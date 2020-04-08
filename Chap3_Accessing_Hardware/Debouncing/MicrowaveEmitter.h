#ifndef MICROWAVE_EMITTER_H
#define MICROWAVE_EMITTER_H


typedef struct MicrowaveEmitter MicrowaveEmitter;
struct MicrowaveEmitter{
  MicrowaveEmitter *pSelf;
};

void MicrowaveEmitter_startEmitting(MicrowaveEmitter *pMicrowaveEmitter);
void MicrowaveEmitter_stopEmitting(MicrowaveEmitter *pMicrowaveEmitter);

#endif
