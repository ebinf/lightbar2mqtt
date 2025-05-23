#include "constants.h"

/* -- nRF24 --------------------------------------------------------------------------------------------------- */
// The pin number to which the nRF24's Chip Enable (CE) pin is connected.
#define RADIO_PIN_CE 4

// The pin number to which the nRF24's Chip Select Null (CSN) pin is connected.
#define RADIO_PIN_CSN 5

/* -- Light Bars ---------------------------------------------------------------------------------------------- */
// All light bars that should be controlled by this controller. Each light bar must have a unique serial.
// Each entry consists of the serial and the name of the light bar. By default, up to 10 light bars can be added.
//
// If the serial is set to the same value as one remote's, the original remote will still control the light bar
// directly. To separate the light bar from the original remote, set this to a different value, e.g. 0xABCDEF.
//
// The name will be used in Home Assistant.
constexpr SerialWithName LIGHTBARS[] = {
    {0xABCDEF, "Light Bar 1"},
};

/* -- Remotes ------------------------------------------------------------------------------------------------- */
// All remotes that this controller should listen to. Each remote must have a unique serial.
// Each entry consists of the serial and the name of the remote. By default, up to 10 remotes can be added.
//
// If you don't know the serial of your remote, just set this to any value and flash your controller. Once
// the controller is running, the serial of your remote will be printed to the console.
//
// The name will be used in Home Assistant.
constexpr SerialWithName REMOTES[] = {
    {0x123456, "Remote 1"},
};

/* -- WiFi ---------------------------------------------------------------------------------------------------- */
// The SSID of the WiFi network to connect to.
#define WIFI_SSID "<Your WiFi>"

// The password of the WiFi network to connect to.
#define WIFI_PASSWORD "<Your Password>"

/* -- MQTT ---------------------------------------------------------------------------------------------------- */
// The IP address of the MQTT broker to connect to.
#define MQTT_SERVER "192.168.1.1"

// The port of the MQTT broker to connect to.
#define MQTT_PORT 1883

// The user to use to connect to the MQTT broker.
// Set this to NULL if no user is required.
#define MQTT_USER "<Your User>"

// The password to use to connect to the MQTT broker.
// Set this to NULL if no password is required.
#define MQTT_PASSWORD "<Your Password>"

// The root topic used for communicating with this controller.
// Normally, you don't need to change this. Only if you want to archive a specific structure in your MQTT broker.
// This has nothing to do with Home Assistant's discovery feature.
// Each controller will use its own unique subtopic consisting of the controllers MAC address. Therefore, you can
// have multiple controllers in your network without any conflicts.
#define MQTT_ROOT_TOPIC "lightbar2mqtt"

/* -- Home Assistant Device Discovery ------------------------------------------------------------------------- */
// Whether to send Home Assistant discovery messages.
#define HOME_ASSISTANT_DISCOVERY true

// The prefix to use for Home Assistant discovery messages.
// This must match the prefix used in your Home Assistant configuration. The default is "homeassistant".
#define HOME_ASSISTANT_DISCOVERY_PREFIX "homeassistant"

// The name of the device to use in Home Assistant.
// This is the name that will be displayed in the Home Assistant UI. Of course, you can change this in the UI
// later on. But if you want to have a specific name from the beginning or make it easier to identify the device,
// you can set it here.
#define HOME_ASSISTANT_DEVICE_NAME "Mi Computer Monitor Light Bar"

/* -- Time ---------------------------------------------------------------------------------------------------- */
// Syncs the system time with an NTP server. This helps some diplay the ESP32 in the clients list of some routers,
// such as TP-Link Deco.

// This is the NTP server
#define NTP_SERVER "pool.ntp.org"

// Your local timezone offset in seconds.
// eg UTC+10 - 10 * 60 * 60
#define GMT_OFFSET_SEC 0

// The Daylight offset (in seconds). Set it to 3600 if your country observes Daylight saving time; otherwise, set it to 0.
#define DST_OFFSET_SEC 0
