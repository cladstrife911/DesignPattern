#ifndef ButtonDriver_H
#define ButtonDriver_H

#include "Button.h"
#include "MicrowaveEmitter.h"
#include "Timer.h"

#define LOOPS_PER_MS (1000)
#define DEBOUNCE_TIME (40)

typedef struct ButtonDriver ButtonDriver;
struct ButtonDriver
{
  unsigned char oldState;
  unsigned char toggleOn;
  Button *itsButton;
  MicrowaveEmitter *itsMicrowaveEmitter;
  Timer *itsTimer;
};

void ButtonDriver_Init(ButtonDriver *const me);
void ButtonDriver_Cleanup(ButtonDriver *const me);

/* Operations */
void ButtonDriver_eventReceive(ButtonDriver *const me);
Button *ButtonDriver_getItsButton(const ButtonDriver *const me);
void ButtonDriver_setItsButton(ButtonDriver *const me, Button *p_Button);
MicrowaveEmitter *ButtonDriver_getItsMicrowaveEmitter(const ButtonDriver *const me);
void ButtonDriver_setItsMicrowaveEmitter(ButtonDriver *const me, MicrowaveEmitter * p_MicrowaveEmitter);
Timer *ButtonDriver_getItsTimer(const ButtonDriver *const me);
void ButtonDriver_setItsTimer(ButtonDriver *const me, Timer *p_Timer);
ButtonDriver *ButtonDriver_Create(void);
void ButtonDriver_Destroy(ButtonDriver *const me);
void ButtonDriver_setItsButton(ButtonDriver *const me, Button *p_Button);
void ButtonDriver_setItsButton(ButtonDriver *const me, Button *p_Button);
void ButtonDriver_clearItsButton(ButtonDriver *const me);

#endif
