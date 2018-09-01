/* This file is auto-generated using the IRQN tool. Do not modify. */

#ifndef IRQN_HANDLER

#include <stm32f7xx_handler.h>

#else

IRQN_HANDLER(-14, NonMaskableInt)
IRQN_HANDLER(-13, HardFault)
IRQN_HANDLER(-12, MemoryManagement)
IRQN_HANDLER(-11, BusFault)
IRQN_HANDLER(-10, UsageFault)
SKIP_HANDLER(-9)
SKIP_HANDLER(-8)
SKIP_HANDLER(-7)
SKIP_HANDLER(-6)
IRQN_HANDLER(-5, SVCall)
IRQN_HANDLER(-4, DebugMonitor)
SKIP_HANDLER(-3)
IRQN_HANDLER(-2, PendSV)
IRQN_HANDLER(-1, SysTick)
IRQN_HANDLER(0, WWDG)
IRQN_HANDLER(1, PVD)
IRQN_HANDLER(2, TAMP_STAMP)
IRQN_HANDLER(3, RTC_WKUP)
IRQN_HANDLER(4, FLASH)
IRQN_HANDLER(5, RCC)
IRQN_HANDLER(6, EXTI0)
IRQN_HANDLER(7, EXTI1)
IRQN_HANDLER(8, EXTI2)
IRQN_HANDLER(9, EXTI3)
IRQN_HANDLER(10, EXTI4)
IRQN_HANDLER(11, DMA1_Stream0)
IRQN_HANDLER(12, DMA1_Stream1)
IRQN_HANDLER(13, DMA1_Stream2)
IRQN_HANDLER(14, DMA1_Stream3)
IRQN_HANDLER(15, DMA1_Stream4)
IRQN_HANDLER(16, DMA1_Stream5)
IRQN_HANDLER(17, DMA1_Stream6)
IRQN_HANDLER(18, ADC)
IRQN_HANDLER(19, CAN1_TX)
IRQN_HANDLER(20, CAN1_RX0)
IRQN_HANDLER(21, CAN1_RX1)
IRQN_HANDLER(22, CAN1_SCE)
IRQN_HANDLER(23, EXTI9_5)
IRQN_HANDLER(24, TIM1_BRK_TIM9)
IRQN_HANDLER(25, TIM1_UP_TIM10)
IRQN_HANDLER(26, TIM1_TRG_COM_TIM11)
IRQN_HANDLER(27, TIM1_CC)
IRQN_HANDLER(28, TIM2)
IRQN_HANDLER(29, TIM3)
IRQN_HANDLER(30, TIM4)
IRQN_HANDLER(31, I2C1_EV)
IRQN_HANDLER(32, I2C1_ER)
IRQN_HANDLER(33, I2C2_EV)
IRQN_HANDLER(34, I2C2_ER)
IRQN_HANDLER(35, SPI1)
IRQN_HANDLER(36, SPI2)
IRQN_HANDLER(37, USART1)
IRQN_HANDLER(38, USART2)
IRQN_HANDLER(39, USART3)
IRQN_HANDLER(40, EXTI15_10)
IRQN_HANDLER(41, RTC_Alarm)
IRQN_HANDLER(42, OTG_FS_WKUP)
IRQN_HANDLER(43, TIM8_BRK_TIM12)
IRQN_HANDLER(44, TIM8_UP_TIM13)
IRQN_HANDLER(45, TIM8_TRG_COM_TIM14)
IRQN_HANDLER(46, TIM8_CC)
IRQN_HANDLER(47, DMA1_Stream7)
IRQN_HANDLER(48, FMC)
IRQN_HANDLER(49, SDMMC1)
IRQN_HANDLER(50, TIM5)
IRQN_HANDLER(51, SPI3)
IRQN_HANDLER(52, UART4)
IRQN_HANDLER(53, UART5)
IRQN_HANDLER(54, TIM6_DAC)
IRQN_HANDLER(55, TIM7)
IRQN_HANDLER(56, DMA2_Stream0)
IRQN_HANDLER(57, DMA2_Stream1)
IRQN_HANDLER(58, DMA2_Stream2)
IRQN_HANDLER(59, DMA2_Stream3)
IRQN_HANDLER(60, DMA2_Stream4)
IRQN_HANDLER(61, ETH)
IRQN_HANDLER(62, ETH_WKUP)
IRQN_HANDLER(63, CAN2_TX)
IRQN_HANDLER(64, CAN2_RX0)
IRQN_HANDLER(65, CAN2_RX1)
IRQN_HANDLER(66, CAN2_SCE)
IRQN_HANDLER(67, OTG_FS)
IRQN_HANDLER(68, DMA2_Stream5)
IRQN_HANDLER(69, DMA2_Stream6)
IRQN_HANDLER(70, DMA2_Stream7)
IRQN_HANDLER(71, USART6)
IRQN_HANDLER(72, I2C3_EV)
IRQN_HANDLER(73, I2C3_ER)
IRQN_HANDLER(74, OTG_HS_EP1_OUT)
IRQN_HANDLER(75, OTG_HS_EP1_IN)
IRQN_HANDLER(76, OTG_HS_WKUP)
IRQN_HANDLER(77, OTG_HS)
IRQN_HANDLER(78, DCMI)
SKIP_HANDLER(79)
IRQN_HANDLER(80, RNG)
IRQN_HANDLER(81, FPU)
IRQN_HANDLER(82, UART7)
IRQN_HANDLER(83, UART8)
IRQN_HANDLER(84, SPI4)
IRQN_HANDLER(85, SPI5)
IRQN_HANDLER(86, SPI6)
IRQN_HANDLER(87, SAI1)
IRQN_HANDLER(88, LTDC)
IRQN_HANDLER(89, LTDC_ER)
IRQN_HANDLER(90, DMA2D)
IRQN_HANDLER(91, SAI2)
IRQN_HANDLER(92, QUADSPI)
IRQN_HANDLER(93, LPTIM1)
IRQN_HANDLER(94, CEC)
IRQN_HANDLER(95, I2C4_EV)
IRQN_HANDLER(96, I2C4_ER)
IRQN_HANDLER(97, SPDIF_RX)
SKIP_HANDLER(98)
SKIP_HANDLER(99)
SKIP_HANDLER(100)
SKIP_HANDLER(101)
SKIP_HANDLER(102)
IRQN_HANDLER(103, SDMMC2)
IRQN_HANDLER(104, CAN3_TX)
IRQN_HANDLER(105, CAN3_RX0)
IRQN_HANDLER(106, CAN3_RX1)
IRQN_HANDLER(107, CAN3_SCE)
IRQN_HANDLER(108, JPEG)
IRQN_HANDLER(109, MDIOS)

#endif
