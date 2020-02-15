
#ifndef ACME_02_ADAPTER_H
#define ACME_02_ADAPTER_H

#include "O2ProxyStub.h"

typedef struct
{
  AcmeO2SensorProxy *itsAcmeO2SensorProxy;
}AcmeO2Adapter;

int AcmeO2Adapter_gimmeO2Conc(AcmeO2Adapter *const me);
int AcmeO2Adapter_gimmeO2Flow(AcmeO2Adapter *const me);

#endif /*ACME_02_ADAPTER_H*/
