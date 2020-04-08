#ifndef BUTTON_H
#define BUTTON_H

struct ButtonDriver;

typedef struct Button Button;
struct Button{
  Button *pSelf;
  unsigned char deviceState;
};

void Button_setItsButtonDriver(Button *pButton, struct ButtonDriver *pButtonDriver);
struct ButtonDriver * Button_getItsButtonDriver(Button *pButton);
unsigned char Button_getState(Button *pButton);
void Button_backlight(Button *pButton, unsigned char toggleOn);

#endif
