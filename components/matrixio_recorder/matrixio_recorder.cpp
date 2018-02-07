/*
 * matrixio_recorder.c
 *
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

void matrixio_mics_setup()
{
  mics.Setup(wb);
}


extern "C" {
void matrixio_recorder_init()
{
   matrixio_mics_setup();
}
}
