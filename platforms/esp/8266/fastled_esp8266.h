#pragma once

#include "fastpin_esp8266.h"

#ifdef FASTLED_RGBW
#include "clockless_esp8266_dma_rgbw.h"
#else
#include "clockless_esp8266.h"
#endif
#include "clockless_block_esp8266.h"
