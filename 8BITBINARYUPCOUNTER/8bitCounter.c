#include <LPC17xx.h>
unsigned int i,j;
int main(){
SystemInit();
SystemCoreClockUpdate();
LPC_PINCON->PINSEL0 &= 0xFF0000FF; //Enable LEDs
LPC_GPIO0->FIODIR |= 0x00000FF0; //Set Output Mode
while(1){
for(i=0;i<256;i++){
LPC_GPIO0->FIOPIN = i<<4; //Display i on the LED
for(j=0;j<100000;j++); //Delay
}
}
}