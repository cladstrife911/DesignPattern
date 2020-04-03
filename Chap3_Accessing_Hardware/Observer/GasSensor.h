#ifndef GasSensor_H
#define GasSensor_H

#include "GasData.h"
#include "GasNotificationHandle.h"

/* class GasSensor */
typedef struct GasSensor GasSensor;
struct GasSensor
{
  GasData *itsGasData;
  GasNotificationHandle *itsGasNH[100];
};

/* Constructors and destructors:*/
void GasSensor_Init(GasSensor *const me);

void GasSensor_Cleanup(GasSensor *const me);

/* Operations */
void GasSensor_dumpList(GasSensor *const me);

void GasSensor_newData(GasSensor *const me, unsigned int flow, unsigned int n2,
                       unsigned int o2);

void GasSensor_notify(GasSensor *const me);

void GasSensor_subscribe(GasSensor *const me, void *instancePtr,
                         const gasDataAcceptorPtr *aPtr);

void GasSensor_unsubscribe(GasSensor *const me, const gasDataAcceptorPtr *aPtr);

GasData *GasSensor_getItsGasData(const GasSensor *const me);

void GasSensor_setItsGasData(GasSensor *const me, GasData *p_GasData);

int GasSensor_getItsGasNH(const GasSensor *const me);

void GasSensor_addItsGasNH(GasSensor *const me,
                           GasNotificationHandle *p_GasNotificationHandle);

void GasSensor_removeItsGasNH(GasSensor *const me,
                              GasNotificationHandle *p_GasNotificationHandle);

void GasSensor_clearItsGasNH(GasSensor *const me);

GasSensor *GasSensor_Create(void);

void GasSensor_Destroy(GasSensor *const me);

#endif /*GasSensor_H*/
