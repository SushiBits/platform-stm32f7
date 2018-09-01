/*
 * stm32f1xx_handler.h
 *
 *  Created on: Jan 8, 2018
 *      Author: technix
 */

#ifndef IRQN_HANDLER

#include <stm32f1xx_it.h>

#else

#if defined(STM32F722xx)
#include "stm32f722xx_handler.h"
#elif defined(STM32F723xx)
#include "stm32f723xx_handler.h"
#elif defined(STM32F732xx)
#include "stm32f732xx_handler.h"
#elif defined(STM32F733xx)
#include "stm32f733xx_handler.h"
#elif defined(STM32F756xx)
#include "stm32f756xx_handler.h"
#elif defined(STM32F746xx)
#include "stm32f746xx_handler.h"
#elif defined(STM32F745xx)
#include "stm32f745xx_handler.h"
#elif defined(STM32F765xx)
#include "stm32f765xx_handler.h"
#elif defined(STM32F767xx)
#include "stm32f767xx_handler.h"
#elif defined(STM32F769xx)
#include "stm32f769xx_handler.h"
#elif defined(STM32F777xx)
#include "stm32f777xx_handler.h"
#elif defined(STM32F779xx)
#include "stm32f779xx_handler.h"
#elif defined(STM32F730xx)
#include "stm32f730xx_handler.h"
#elif defined(STM32F750xx)
#include "stm32f750xx_handler.h"
#else
#error "Please select first the target STM32F7xx device used in your application (in stm32f7xx.h file)"
#endif

#endif
