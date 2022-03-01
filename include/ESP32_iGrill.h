#pragma once
#include <Arduino.h>
#include <ESP_WiFiManager.h>

void setupProbes();
void getiGrillInfo();
bool setupPropaneCharacteristic();
bool setupBatteryCharacteristic();
bool connectToServer();
void initAPIPConfigStruct(WiFi_AP_IPConfig &in_WM_AP_IPconfig);
void initSTAIPConfigStruct(WiFi_STA_IPConfig &in_WM_STA_IPconfig);
void displayIPConfigStruct(WiFi_STA_IPConfig in_WM_STA_IPconfig);
void configWiFi(WiFi_STA_IPConfig in_WM_STA_IPconfig);
uint8_t connectWiFi();
uint8_t connectMultiWiFi();
void heartBeatPrint();
void check_WiFi();
void wifi_manager();
void disconnectMQTT();
void connectMQTT();
void setDeviceJSONObject(const char * fwVersion, const char * iGrillBLEAddress);
void publishSystemInfo();
void publishProbeTemp(int probeNum, int temp);
void publishBattery(int battPercent);
void publishPropaneLevel(int propanePercent);
void mqttAnnounce();
bool readConfigFile();
bool writeConfigFile();
bool loadConfigData();
void saveConfigData();
String getSystemUptime();
void toggleLED();
void toggleLED();
static void handleClick();
static void handleDoubleClick();
static void handleLongPressStop();
void newConfigData();
void check_status();