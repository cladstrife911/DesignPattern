#ifndef GasNotificationHandle_H
#define GasNotificationHandle_H

#include "GasData.h"

/* the function pointer type
The first value of the function pointer is to the instance
data of the class. The second is a ptr to the new gas data
*/
typedef void (*gasDataAcceptorPtr)(void *,GasData *);

typedef struct _GasNotificationHandle
{
  void *instancePtr;
  gasDataAcceptorPtr acceptorPtr;
}GasNotificationHandle;

GasNotificationHandle * GasNotificationHandle_Create(void);

void GasNotificationHandle_Destroy(GasNotificationHandle *me);

#endif /*GasNotificationHandle_H*/
