typedef int8_t dtype;
typedef int8_t rtype;
#define cT  numo_cInt8
#define cRT cT

#define m_num_to_data(x) ((dtype)NUM2INT(x))
#define m_data_to_num(x) INT2NUM((int)(x))
#define m_extract(x)     INT2NUM((int)*(dtype*)(x))
#define m_sprintf(s,x)   sprintf(s,"%d",(int)(x))

#include "int_macro.h"

#ifndef INT8_MIN
#define INT8_MIN (-127-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX (127)
#endif

#define M_MIN  INT2FIX(INT8_MIN)
#define M_MAX  INT2FIX(INT8_MAX)
