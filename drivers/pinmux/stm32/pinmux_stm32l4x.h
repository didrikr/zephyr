/*
 * Copyright (c) 2016 Open-RnD Sp. z o.o.
 * Copyright (c) 2016 BayLibre, SAS
 * Copyright (c) 2018-2019 Centaur Analytics, Inc
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32L4X_H_
#define ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32L4X_H_

/**
 * @file Header for STM32L4X pin multiplexing helper
 */

/*
 * Note: The SPIx_SCK and MOSI pin speeds must be set to VERY_HIGH to
 * avoid device hangs during boot with higher SPI speeds (e.g. 40MHz
 * on L4+)
 */

/* Port A */
#define STM32L4X_PINMUX_FUNC_PA0_PWM2_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA0_USART2_CTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA0_UART4_TX __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA0_ADC12_IN5 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PA1_SPI1_SCK __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN |                     \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32L4X_PINMUX_FUNC_PA1_USART2_RTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA1_UART4_RX __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PA1_ADC12_IN6 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PA2_USART2_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA2_ADC12_IN7 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PA3_USART2_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA3_ADC12_IN8 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PA4_SPI1_NSS __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA4_SPI3_NSS __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA4_ADC12_IN9 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PA5_PWM2_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA5_SPI1_SCK __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32L4X_PINMUX_FUNC_PA5_ADC12_IN10 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PA6_SPI1_MISO __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN)
#define STM32L4X_PINMUX_FUNC_PA6_USART3_CTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA6_LPUART1_CTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA6_ADC12_IN11 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#if defined(CONFIG_SOC_STM32L496XX)
#define STM32L4X_PINMUX_FUNC_PA7_I2C3_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#endif /* CONFIG_SOC_STM32L496XX */
#define STM32L4X_PINMUX_FUNC_PA7_SPI1_MOSI __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32L4X_PINMUX_FUNC_PA7_ADC12_IN12 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PA9_I2C1_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA9_USART1_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#if defined(CONFIG_SOC_STM32L432XX) || defined(CONFIG_SOC_STM32L433XX) ||      \
	defined(CONFIG_SOC_STM32L452XX)
#define STM32L4X_PINMUX_FUNC_PA9_I2C1_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#endif

#define STM32L4X_PINMUX_FUNC_PA10_I2C1_SDA __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA10_USART1_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PA10_OTG_FS_ID __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_PULLUP)
#if defined(CONFIG_SOC_STM32L432XX) || defined(CONFIG_SOC_STM32L433XX) ||      \
	defined(CONFIG_SOC_STM32L452XX)
#define STM32L4X_PINMUX_FUNC_PA10_I2C1_SDA __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#endif

#define STM32L4X_PINMUX_FUNC_PA11_USART1_CTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA11_FDCAN_RX __DEPRECATED_MACRO                                       \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA11_OTG_FS_DM __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)

#define STM32L4X_PINMUX_FUNC_PA12_USART1_RTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA12_FDCAN_TX __DEPRECATED_MACRO                                       \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA12_OTG_FS_DP __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)

#define STM32L4X_PINMUX_FUNC_PA15_PWM2_CH1 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA15_USART2_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PA15_SPI1_NSS __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA15_SPI3_NSS __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA15_USART3_RTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA15_UART4_RTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)

/* Port B */
#define STM32L4X_PINMUX_FUNC_PB0_SPI1_NSS __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB0_ADC12_IN15 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PB1_USART3_RTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB1_LPUART1_RTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB1_ADC12_IN16 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PB3_SPI1_SCK __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32L4X_PINMUX_FUNC_PB3_SPI3_SCK __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUPDR_PULL_DOWN | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)

#if defined(CONFIG_SOC_STM32L496XX)
#define STM32L4X_PINMUX_FUNC_PB4_I2C3_SDA __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#endif /* CONFIG_SOC_STM32L496XX */
#define STM32L4X_PINMUX_FUNC_PB4_SPI1_MISO __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN)
#define STM32L4X_PINMUX_FUNC_PB4_SPI3_MISO __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUPDR_PULL_DOWN)
#define STM32L4X_PINMUX_FUNC_PB4_USART1_CTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)

#define STM32L4X_PINMUX_FUNC_PB5_PWM3_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PB5_SPI1_MOSI __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32L4X_PINMUX_FUNC_PB5_SPI3_MOSI __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUPDR_PULL_DOWN | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)

#define STM32L4X_PINMUX_FUNC_PB6_I2C1_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB6_USART1_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32L4X_PINMUX_FUNC_PB7_I2C1_SDA __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB7_USART1_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PB7_UART4_CTS __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)

#define STM32L4X_PINMUX_FUNC_PB8_I2C1_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#ifndef CONFIG_SOC_STM32L432XX
#define STM32L4X_PINMUX_FUNC_PB8_FDCAN_RX __DEPRECATED_MACRO                                        \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#endif

#define STM32L4X_PINMUX_FUNC_PB9_I2C1_SDA __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#ifndef CONFIG_SOC_STM32L432XX
#define STM32L4X_PINMUX_FUNC_PB9_FDCAN_TX __DEPRECATED_MACRO                                        \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#endif

#define STM32L4X_PINMUX_FUNC_PB10_SPI2_SCK __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32L4X_PINMUX_FUNC_PB10_I2C2_SCL __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB10_USART3_TX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB10_LPUART1_RX __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUPDR_NO_PULL)

#define STM32L4X_PINMUX_FUNC_PB11_I2C2_SDA __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB11_USART3_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PB11_LPUART1_TX __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32L4X_PINMUX_FUNC_PB12_LPUART1_RTS __DEPRECATED_MACRO                                  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB12_SPI2_NSS __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)

#define STM32L4X_PINMUX_FUNC_PB13_I2C2_SCL __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB13_USART3_CTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB13_SPI2_SCK __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)

#define STM32L4X_PINMUX_FUNC_PB14_I2C2_SDA __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB14_USART3_RTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB14_PWM15_CH1 __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PB14_SPI2_MISO __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN)

#define STM32L4X_PINMUX_FUNC_PB15_SPI2_MOSI __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)

/* Port C */
#define STM32L4X_PINMUX_FUNC_PC0_I2C3_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PC0_LPUART1_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PC0_ADC123_IN1 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PC1_I2C3_SDA __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PC1_LPUART1_TX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PC1_ADC123_IN2 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PC2_ADC123_IN3 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PC3_ADC123_IN4 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PC4_USART3_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PC4_ADC12_IN13 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PC5_USART3_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PC5_ADC12_IN14 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32L4X_PINMUX_FUNC_PC6_USART6_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32L4X_PINMUX_FUNC_PC7_USART6_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUPDR_NO_PULL)

#define STM32L4X_PINMUX_FUNC_PC8_SDMMC1_D0 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_PULLUP |                    \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)

#define STM32L4X_PINMUX_FUNC_PC9_SDMMC1_D1 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_PULLUP |                    \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)

#define STM32L4X_PINMUX_FUNC_PC10_SPI3_SCK __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUPDR_PULL_DOWN |                     \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32L4X_PINMUX_FUNC_PC10_USART3_TX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PC10_UART4_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PC10_SDMMC1_D2 __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_PULLUP |                    \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)

#define STM32L4X_PINMUX_FUNC_PC11_SPI3_MISO __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUPDR_PULL_DOWN)
#define STM32L4X_PINMUX_FUNC_PC11_USART3_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PC11_UART4_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PC11_SDMMC1_D3 __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_PULLUP |                    \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)

#define STM32L4X_PINMUX_FUNC_PC12_SPI3_MOSI __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUPDR_PULL_DOWN | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32L4X_PINMUX_FUNC_PC12_SDMMC1_CK __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_PULLUP |                    \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)

/* Port D */
#ifndef CONFIG_SOC_STM32L432XX
#define STM32L4X_PINMUX_FUNC_PD0_FDCAN_RX __DEPRECATED_MACRO                                        \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#endif

#ifndef CONFIG_SOC_STM32L432XX
#define STM32L4X_PINMUX_FUNC_PD1_FDCAN_TX __DEPRECATED_MACRO                                        \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#endif

#define STM32L4X_PINMUX_FUNC_PD2_USART3_RTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PD2_SDMMC1_CMD __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_PULLUP |                    \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)

#define STM32L4X_PINMUX_FUNC_PD3_USART2_CTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)

#define STM32L4X_PINMUX_FUNC_PD4_USART2_RTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)

#define STM32L4X_PINMUX_FUNC_PD5_USART2_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32L4X_PINMUX_FUNC_PD6_USART2_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)

#define STM32L4X_PINMUX_FUNC_PD8_USART3_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32L4X_PINMUX_FUNC_PD9_USART3_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)

#define STM32L4X_PINMUX_FUNC_PD11_USART3_CTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)

#define STM32L4X_PINMUX_FUNC_PD12_I2C4_SCL __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32L4X_PINMUX_FUNC_PD12_USART3_RTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)

#define STM32L4X_PINMUX_FUNC_PD13_I2C4_SDA __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

/* Port E */
#define STM32L4X_PINMUX_FUNC_PE9_PWM1_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)

#define STM32L4X_PINMUX_FUNC_PE11_PWM1_CH2 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)

#define STM32L4X_PINMUX_FUNC_PE12_SPI1_NSS __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_PULLUP)

#define STM32L4X_PINMUX_FUNC_PE13_PWM1_CH3 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PE13_SPI1_SCK __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)

#define STM32L4X_PINMUX_FUNC_PE14_SPI1_MISO __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN)

#define STM32L4X_PINMUX_FUNC_PE15_SPI1_MOSI __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)

/* Port F */
#define STM32L4X_PINMUX_FUNC_PF0_I2C3_SDA __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32L4X_PINMUX_FUNC_PF1_I2C3_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PF3_ADC3_IN6 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE
#define STM32L4X_PINMUX_FUNC_PF4_ADC3_IN7 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE
#define STM32L4X_PINMUX_FUNC_PF5_ADC3_IN8 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE
#define STM32L4X_PINMUX_FUNC_PF6_ADC3_IN9 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE
#define STM32L4X_PINMUX_FUNC_PF7_ADC3_IN10 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE
#define STM32L4X_PINMUX_FUNC_PF8_ADC3_IN11 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE
#define STM32L4X_PINMUX_FUNC_PF9_ADC3_IN12 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE
#define STM32L4X_PINMUX_FUNC_PF10_ADC3_IN13 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

/* Port G */
#define STM32L4X_PINMUX_FUNC_PG7_I2C3_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PG7_LPUART1_TX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32L4X_PINMUX_FUNC_PG8_I2C3_SDA __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PG8_LPUART1_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUPDR_NO_PULL)

#define STM32L4X_PINMUX_FUNC_PG9_USART1_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32L4X_PINMUX_FUNC_PG10_USART1_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)

#define STM32L4X_PINMUX_FUNC_PG13_I2C1_SDA __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32L4X_PINMUX_FUNC_PG14_I2C1_SCL __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#endif /* ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32L4X_H_ */
