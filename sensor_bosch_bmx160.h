#ifndef SENSOR_BOS_BMI160_H__
#define SENSOR_BOS_BMI160_H__

#include <rtthread.h>
#if defined(RT_VERSION_CHECK)
    #if (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 1, 0))
        #include "drivers/sensor.h"
    #else
        #include "sensor.h"
    #endif
#endif

int rt_hw_bmx160_init(const char *name, struct rt_sensor_config *cfg);

#endif
