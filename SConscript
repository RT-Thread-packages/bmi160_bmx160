from building import *
Import('rtconfig')

src   = []
cwd   = GetCurrentDir()

src += Glob(cwd + '/libraries/*.c')

if GetDepend('PKG_BMI160_BMX160_USING_SENSOR_V1'):
    src += ['sensor_bosch_bmx160.c']

# add bmi160 include path.
path  = [cwd, cwd + '/libraries']

# add src and include to group.
group = DefineGroup('bmi160', src, depend = ['PKG_USING_BMI160_BMX160'], CPPPATH = path)

Return('group')
