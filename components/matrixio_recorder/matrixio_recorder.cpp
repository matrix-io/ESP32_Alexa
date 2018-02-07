/*
 * matrixio_recorder.c
 *
 *  Created on: 30.03.2017
 *      Author: michaelboeckling
 */

#include <stdlib.h>
#include <stdbool.h>

#include "freertos/FreeRTOS.h"
#include "common_component.h"

#include "wishbone_bus.h"
#include "microphone_array.h"

namespace hal = matrix_hal;

extern matrix_hal::WishboneBus *wb;

hal::MicrophoneArray mics;

static component_status_t recorder_status = UNINITIALIZED;

void matrixio_recorder_init()
{
   mics.Setup(wb);
}

void matrixio_recorder_start()
{
    if(recorder_status == RUNNING)
        return;

	recorder_status = RUNNING;
}

void matrixio_recorder_stop()
{
    if(recorder_status == STOPPED)
        return;

    recorder_status = STOPPED;
}

