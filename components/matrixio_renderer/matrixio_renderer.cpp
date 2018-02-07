/*
 * matrixio_renderer.c
 *
 */

extern "C" { 
#include "freertos/FreeRTOS.h"

#include "esp_log.h"

#include "matrixio_renderer.h"
}

#include "wishbone_bus.h"
#include "everloop.h"
#include "everloop_image.h"

namespace hal = matrix_hal;

extern matrix_hal::WishboneBus *wb;
  
hal::Everloop everloop;
hal::EverloopImage image1d;

void matrixio_mics_setup()
{
  everloop.Setup(wb);
} 

extern "C" {

void matrixio_render_samples(char *buf, uint32_t buf_len, pcm_format_t *buf_desc){
}

void matrixio_renderer_init(renderer_config_t *config){
}

}
