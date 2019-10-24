/*
 * Copyright (C) 2019 SSV Software Systems GmbH
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_ssv-mls160a
 * @{
 *
 * @author      Juergen Fitschen <ssv-embedded.de>
 *
 * @}
 */

#ifndef BOARD_H
#define BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name   Macros for controlling the on-board LED.
 * @{
 */
#define LED0_PORT           GPIOC
#define LED0_PIN            GPIO_PIN(PORT_C, 13)
#define LED0_MASK           (1 << 13)

#define LED0_OFF            (LED0_PORT->BSRR = (LED0_MASK << 16))
#define LED0_ON             (LED0_PORT->BSRR = LED0_MASK)
#define LED0_TOGGLE         (LED0_PORT->ODR  ^= LED0_MASK)
/** @} */

/**
 * @name   Macros for controlling the on-board LED.
 * @{
 */
#define UART1DIR_PIN        GPIO_PIN(PORT_A, 1)
#define UART2DIR_PIN        GPIO_PIN(PORT_B, 27)
/** @} */

/**
 * @brief   Initialize board specific hardware, including clock, LEDs and std-IO
 */
void board_init(void);

/**
 * @brief   Use the 2nd UART for STDIO on this board
 */
#define STDIO_UART_DEV      UART_DEV(0)

/**
 * @name    xtimer configuration
 * @{
 */
#define XTIMER_WIDTH        (16)
#define XTIMER_BACKOFF      5
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
