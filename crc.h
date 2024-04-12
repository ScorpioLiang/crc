/**
 ******************************************************************************
 * @file       crc.h
 * @author     liang
 * @version    V1.0
 * @date       2023-07-27
 * @brief      CRC校验程序inc
 * @license    Copyright (c) 2020-2032,
 ******************************************************************************
 * @attention
 *
 * 修改说明
 * V1.0
 *
 ******************************************************************************
 */
#ifndef __CRC_H__
#define __CRC_H__

#include "stdint.h"

uint8_t crc4_itu(uint8_t *data, uint16_t length);
uint8_t crc5_epc(uint8_t *data, uint16_t length);
uint8_t crc5_itu(uint8_t *data, uint16_t length);
uint8_t crc5_usb(uint8_t *data, uint16_t length);
uint8_t crc6_itu(uint8_t *data, uint16_t length);
uint8_t crc7_mmc(uint8_t *data, uint16_t length);
uint8_t crc8(uint8_t *data, uint16_t length);
uint8_t crc8_itu(uint8_t *data, uint16_t length);
uint8_t crc8_rohc(uint8_t *data, uint16_t length);
uint8_t crc8_maxim(uint8_t *data, uint16_t length); // DS18B20
uint16_t crc16_ibm(uint8_t *data, uint16_t length);
uint16_t crc16_maxim(uint8_t *data, uint16_t length);
uint16_t crc16_usb(uint8_t *data, uint16_t length);
uint16_t crc16_modbus(uint8_t *data, uint16_t length);
uint16_t GetCrc16ModbusLSBMap(uint8_t *pData, uint16_t usDataLen);
uint16_t GetCrc16ModbusMSBMap(uint8_t *pData, uint16_t usDataLen);
uint16_t crc16_ccitt(uint8_t *data, uint16_t length);
uint16_t crc16_ccitt_false(uint8_t *data, uint16_t length);
uint16_t crc16_x25(uint8_t *data, uint16_t length);
uint16_t crc16_xmodem(uint8_t *data, uint16_t length);
uint16_t crc16_dnp(uint8_t *data, uint16_t length);
uint32_t crc32(uint8_t *data, uint16_t length);
uint32_t crc32_mpeg_2(uint8_t *data, uint16_t length);

#endif // __CRC_H__
