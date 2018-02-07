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

// static renderer_config_t *recorder_instance = NULL;
static component_status_t recorder_status = UNINITIALIZED;

void matrixio_recorder_init()
{
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

