#pragma once

#include <esp_now.h>
#include <esp_wifi.h>
#include <WiFi.h>
#include <Arduino.h>

void getMac();
void initESPN();
void broadcast(const String &message);
void sentCallback(const uint8_t *macAddr, esp_now_send_status_t status);
void receiveCallback(const uint8_t *macAddr, const uint8_t *data, int dataLen);
void formatMacAddress(const uint8_t *macAddr, char *buffer, int maxLength);