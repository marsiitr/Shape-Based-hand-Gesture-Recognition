

#include <Servo.h>    
#include <SPI.h>     
#include "RF24.h"     


Servo thumb;
Servo index_fingure;
Servo middle_fingure;
Servo ring_fingure;
Servo little_fingure;

RF24 radio(9,10);     

const uint64_t pipe = 0xE8E8F0F0E1LL;

int msg[5];

void setup(){

  
  thumb.attach(15); 
  ring_fingure.attach(16); 
  index_fingure.attach(17); 
  middle_fingure.attach(18); 
  little_fingure.attach(19); 
  
  radio.begin();                    
  radio.openReadingPipe(1, pipe);   
  radio.startListening();           
  }


void loop(){
  if(radio.available()){
    bool done = false;
    while (!done){
    done = radio.read(msg, sizeof(msg));

    thumb.write(msg[2]); 
    ring_fingure.write(msg[4]);
    index_fingure.write(msg[3]); 
    middle_fingure.write(msg[1]); 
    little_fingure.write(msg[0]);
    }
  }
}
