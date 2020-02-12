// Include the Control Surface library and the Bluetooth MIDI Interface
#include <Control_Surface.h>
#include <MIDI_Interfaces/BluetoothMIDI_Interface.hpp>

// Instantiate a MIDI over BLE interface.
BluetoothMIDI_Interface midi;

// Create a new instance of the class `CCPotentiometer`, called `potentiometer`,
// on pin 36, that sends MIDI messages with controller 7 (channel volume)
// on channel 1.
CCPotentiometer potentiometer(36, {MIDI_CC::Channel_Volume, CHANNEL_1});

void setup() {
    // Initialize everything
    Control_Surface.begin();
}

void loop() {
    // Update the Control Surface (check whether the potentiometer's input has 
    // changed since last time, if so, send the new value over BLE MIDI).
    Control_Surface.loop();
}
