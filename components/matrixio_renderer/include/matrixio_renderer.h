/*
 * matrixio_renderer.h
 *
 */

#ifndef INCLUDE_MATRIXIO_RENDERER_H_
#define INCLUDE_MATRIXIO_RENDERER_H_

#include "audio_renderer.h"

void matrixio_render_samples(char *buf, uint32_t len, pcm_format_t *format);

void matrixio_renderer_init(renderer_config_t *config);



#endif /* INCLUDE_MATRIXIO_RENDERER_H_ */
