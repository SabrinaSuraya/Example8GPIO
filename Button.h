#ifndef _BUTTON_H_
#define _BUTTON_H_

class Button{

     uint8_t -port;
     uint8_t -pin;
     int -debounceTime;
     int -OFFduration;
     int -internalPullUp;

     unsigned int count;
     bool previous;
     bool waiting;
     unisgned long pressed_time;
     unsigned char *B_reader = (unsigned char *) 0x23; // pin B
     

     public:

     Button( uint8_t port, uint8_t pin , int debounceTime, int OFFduration, int internalPullUp){

      -port = port;
      -pin = pin;
      -debounceTime = debounceTime;
      -internalPullUp = internalPullUp;
    

      void Pressed(){
       //_gets_pressed input switch
       
        
      }

      void Refresh(){
    
       
        
        }
        Serial.begin(9600);     ///debouncing
        for(;;){

            if(millis() - pressed_time>= -debounceTime{

              waiting = 0;
              bool current = (((*B_reader) &0b00010000) != 0){

                  if(current){
                      count++;
                      Serial.println(count);
                  }

                  previous = current;
                  }
              }

              else{

                bool current = (((*B_reader) & 0b0001000) != 0)

                if(current && !previous){
                    pressed_time= millis();
                    waiting = 1;
                    
                }
                previous = current;
              }
            }


            for(;;){///dela millis

              unsigned long currentTime = millis();

              if(((*D_writer) & 0b00000100) == 0){

                if(currentTime - previousTime >= ){// on time

                  *D_writer |= 0b00000100//on
                  previousTime= currentTime;
                  
                }
              }
              else{
                if(currentTime - previousTime>= ----){// of time
                  *D_writer &= 0b1111101; // off
                  previous= currentTime;
                }
              }
            }
        }
};

#endif
