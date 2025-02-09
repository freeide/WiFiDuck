/*
   Copyright (c) 2019 Stefan Kremser
   This software is licensed under the MIT License. See the license file for details.
   Source: github.com/spacehuhn/WiFiDuck
 */

#pragma once

// DEBUG Settings
#define ENABLE_DEBUG
#define DEBUG_BAUD 115200

// EEPROM Settings
#define EEPROM_SIZE       4095
#define EEPROM_BOOT_ADDR  3210
#define BOOT_MAGIC_NUM    1234567890

// WiFi Settings
#define WIFI_SSID "wifiduck"
#define WIFI_PASSWORD "wifiduck"
#define WIFI_CHANNEL "1"

// Connection Settings
#define NUMBER_CONNECTION_TRIES 1
#define CONNECTION_DELAY 5000

// I2C Settings
#define I2C_ADDR 0x31
#define I2C_SDA 4
#define I2C_SCL 5
#define I2C_CLOCK_SPEED 100000L

#define BUFFER_SIZE 512
#define PACKET_SIZE 32