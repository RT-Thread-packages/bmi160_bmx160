#ifndef SENSOR_BOS_BMI160_H__
#define SENSOR_BOS_BMI160_H__

#include <rtthread.h>
#include <rtdevice.h>

#if defined(RT_VERSION_CHECK)
    #if (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 0, 2))
        #define RT_SIZE_TYPE   rt_ssize_t
    #else
        #define RT_SIZE_TYPE   rt_size_t
    #endif
#endif

int rt_hw_bmx160_init(const char *name, struct rt_sensor_config *cfg);

#endif
