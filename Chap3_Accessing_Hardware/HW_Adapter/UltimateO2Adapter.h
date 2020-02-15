
#ifndef ULTIMATE_02_ADAPTER_H
#define ULTIMATE_02_ADAPTER_H

#include "O2ProxyStub.h"


typedef struct
{
  UltimateO2SensorProxy *itsUltimateO2SensorProxy;
}UltimateO2Adapter;

int UltimateO2Adapter_gimmeO2Conc(UltimateO2Adapter *const me);
int UltimateO2Adapter_gimmeO2Flow(UltimateO2Adapter *const me);

#endif /*ULTIMATE_02_ADAPTER_H*/
