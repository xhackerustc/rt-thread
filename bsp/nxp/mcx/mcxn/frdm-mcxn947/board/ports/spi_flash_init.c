/*
 * Copyright (c) 2006-2023, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2023-04-21     Wangyuqiang  the first version
 */

#include <rtthread.h>
#include <drv_spi.h>
#include "spi_flash.h"
#include "spi_flash_sfud.h"
#include "drv_pin.h"

#define CS_PIN       (3*32+0)

static int rt_spi_flash_init(void)
{
    int result = -1;

    result = rt_hw_spi_device_attach("spi7", "spi70", CS_PIN);
    rt_kprintf("value is %d\n",result);

    if(result == RT_EOK)
    {
        rt_kprintf("rt_hw_spi_device_attach successful!\n");
    }

    return RT_EOK;
}
INIT_COMPONENT_EXPORT(rt_spi_flash_init);
