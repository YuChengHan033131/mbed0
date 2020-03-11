#include"mbed.h"
DigitalOut led1(LED_RED);
DigitalOut led2(LED_GREEN);

void blink(DigitalOut &LED ,int counts);

int main()
{
   while (true) {
        led1=1;
        led2=1;
        blink(led1,3);
        blink(led2,2);
   }
}