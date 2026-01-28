// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

// #define SERIAL_USART_FULL_DUPLEX
// when GP0 in right hand got zapped, needed to
// make the comm between the splits half duplex,
// and use GP1 for the right hand and GP0 for the left hand
// as well as make the right hand master.
#define SERIAL_USART_TX_PIN GP1
// #define SERIAL_USART_RX_PIN GP1
