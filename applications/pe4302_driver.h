#ifndef _PE4302_H__
#define _PE4302_H__
#endif

#include <rtdevice.h>
#include <board.h>

//PE4302相关引脚定义
//LE位、P/S位已经由模块上的拨码器配置完成：P/S为ON位时为程控
//但是值得注意的是，datasheet中说明：LE为高时数据寄存器可以访问，LE为低时锁开启，寄存器内容被锁定

//Vital Issues:写入数据时的LE位的状态
//PUP1与PUP2引脚可以认为是上电初始化引脚或者是固定增益引脚，不同配置可以配置成不同的固定增益，详见datasheet Table.6


//一般情况下的引脚注释
#define PE4302_LE_SET     rt_pin_write(GET_PIN(D,6),PIN_HIGH)       
#define PE4302_LE_RESET   rt_pin_write(GET_PIN(D,6),PIN_LOW)

#define PE4302_CLK_SET    rt_pin_write(GET_PIN(D,3),PIN_HIGH)
#define PE4302_CLK_RESET  rt_pin_write(GET_PIN(D,3),PIN_LOW)

#define PE4302_DATA_SET   rt_pin_write(GET_PIN(D,4),PIN_HIGH)
#define PE4302_DATA_RESET rt_pin_write(GET_PIN(D,4),PIN_LOW)

#define PE4302_PUP1_SET   rt_pin_write(GET_PIN(C,8),PIN_HIGH)
#define PE4302_PUP1_RESET rt_pin_write(GET_PIN(C,8),PIN_LOW)

#define PE4302_PUP2_SET   rt_pin_write(GET_PIN(C,9),PIN_HIGH)
#define PE4302_PUP2_RESET rt_pin_write(GET_PIN(C,9),PIN_LOW)
//针对rtt的引脚编号
#define PE4302_LE   GET_PIN(D,6)
#define PE4302_CLK  GET_PIN(D,3)
#define PE4302_DATA GET_PIN(D,4)
#define PE4302_PUP1 GET_PIN(C,8)
#define PE4302_PUP2 GET_PIN(C,9)