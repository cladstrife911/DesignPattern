#include "GasNotificationHandle.h"

#include <stddef.h>
#include <stdlib.h>

GasNotificationHandle * GasNotificationHandle_Create(void)
{
  GasNotificationHandle *me = (GasNotificationHandle *) malloc(sizeof(GasNotificationHandle));
  if(me!=NULL)
  {

  }
  return me;
}

void GasNotificationHandle_Destroy(GasNotificationHandle *me)
{
}
