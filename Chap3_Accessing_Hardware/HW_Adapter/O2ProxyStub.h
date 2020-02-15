
#ifndef O2_PROXY_H
#define O2_PROXY_H

/*********** AcmeO2SensorProxy ****************/
typedef struct
{
  int (*getO2Conc)(void);
  int (*getO2Flow)(void);
}AcmeO2SensorProxy;

/*********** UltimateO2SensorProxy ****************/
typedef struct
{
  int (*accessO2Conc)(void);
  double (*accessGasFlow)(void);
}UltimateO2SensorProxy;

#endif /*O2_PROXY_H*/
