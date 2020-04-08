#include "ButtonDriver.h"
#include "Button.h"
#include "MicrowaveEmitter.h"
#include "Timer.h"

#include <stddef.h>

void Timer_delay(Timer *pTimer, unsigned int debounceTime){
}

unsigned char Button_getState(Button *pButton){
    return 0;
}

void Button_backlight(Button *pButton, unsigned char toggleOn){
}

void MicrowaveEmitter_startEmitting(MicrowaveEmitter *pMicrowaveEmitter){
}

void MicrowaveEmitter_stopEmitting(MicrowaveEmitter *pMicrowaveEmitter){
}

void Button_setItsButtonDriver(Button *pButton, struct ButtonDriver *pButtonDriver){
}

ButtonDriver * Button_getItsButtonDriver(Button *pButton){
    return NULL;
}
