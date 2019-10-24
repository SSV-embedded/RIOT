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
 * @file
 * @brief       Board specific implementations for the MLS/160A board
 *
 * @author      Juergen Fitschen <ssv-embedded.de>
 *
 * @}
 */

#include "board.h"
#include "periph/gpio.h"

void board_init(void)
{
    cpu_init();
    gpio_init(LED0_PIN, GPIO_OUT);
    gpio_init(UART1DIR_PIN, GPIO_OUT);
    gpio_init(UART2DIR_PIN, GPIO_OUT);
}
