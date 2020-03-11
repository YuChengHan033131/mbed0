#include"mbed.h"

void blink(DigitalOut &LED,int count){
    for(int i=0;i<count*2;i++){
        LED=!LED;
        wait(0.2f);
    }
}