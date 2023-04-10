/*
 * File: configs.h
 * Authors: Hank <lctuyenvn@gmail.com>
 * Create: 2019-04-17 16:51:03
 *
 * Copyright (c) 2019 EmBCI. All right reserved.
 *
 * Modify this file to quickly configure ESP32_Sandbox,
 * which is the firmware of ESP32 used in project EmBCI.
 */

#ifndef CONFIGS_H
#define CONFIGS_H

#define NAME_DEVICE "Ozone Luxury 1"

#define SERIAL_DEBUG_BAUDRATE   (9600)

#define ERROR_CODE int
#define ERROR_NONE (0x00)

enum status_et
{
    DISCONNECTED,
    CONNECTED,
    CONNECTION_LOST,
    SCANNING,
    SENDING_DATA,
    READING_DATA,
    WRITING_DATA
};

struct connectionStatus
{
    status_et wifiStatus;
    status_et sdCardStatus;
    status_et mqttConnection;
    status_et ds3231Module;
    status_et bmeSensor;
    status_et pmsSensor;
    status_et mhzSensor;
};

//========================== DEFINE FOR WIFI ========================

// #define USING_WIFI_CONFIG
const char ssid[] = "BK Star";
const char pass[]  = "bkstar2021";

//========================== DEFINE FOR LOGGING ========================

#define USING_SDCARD
#define USING_MQTT
#define USING_RTC

//========================== DEFINE CHO MAN HINH ========================

#define SCREEN_SERIAL_PORT      Serial2
#define ERROR_READ_DISPLAY      (777777)
#define NEXTION_BAUDRATE        (9600)
#define EEPROM_SIZE             (512)
#define PIN_TX_TFT              (33)
#define PIN_RX_TFT              (25)

//========================== DEFINE SPI  ========================

#define PIN_NUM_MISO    (21)
#define PIN_NUM_MOSI    (19)
#define PIN_NUM_CLK     (18)
#define PIN_CS_SD_CARD  (5)

//========================== DEFINE I2C ========================

#define PIN_SDA_GPIO    26
#define PIN_SCL_GPIO    27
#define I2C_CLOCK_SPEED 100000U
#define RTC_I2C_ADDRESS (0x68)

//========================== DEFINE LED RGB ========================

#define PIN_NEO_PIXEL   (23)

//========================== DEFINE 2 BUTTON ========================

#define PIN_BUTTON_1    (35)
#define PIN_BUTTON_2    (34)


#endif // CONFIGS_H