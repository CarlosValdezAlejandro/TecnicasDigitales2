// Programa clasico de parpadeo de led
//


#include "EasyPio.h"

void main(void){

	pioInit();		//inicializamos config de puertos
//	pinMode(21, OUTPUT);	//seleccionamos puertos de salida para los leds
//	pinMode(20, OUTPUT);
	pinMode(16, OUTPUT);
//	noInterrupts();

	while(1){
		
		
		digitalWrite(16, 1);
		delayMillis(1000);
		digitalWrite(16, 0);
		delayMillis(1000);
	}
	//interrupts();
}

