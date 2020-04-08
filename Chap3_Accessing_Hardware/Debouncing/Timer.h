#ifndef TIMER_H
#define TIMER_H

typedef struct Timer Timer;
struct Timer{
  Timer *pSelf;
};

void Timer_delay(Timer *pTimer, unsigned int debounceTime);

#endif
