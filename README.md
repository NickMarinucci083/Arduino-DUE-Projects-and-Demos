# Arduino Due Peripheral & Interface Demos

A collection of **Arduino Due (ATSAM3X8E)** sketches demonstrating displays, audio, input devices, USB HID, DAC output, infrared communication, and other hardware interfaces. The programs range from small hardware tests to more complete embedded-system examples.

## Included Demos

- **Analog Joystick Mouse** — Uses an analog joystick to control a computer mouse through native USB.
- **DAC Test** — Demonstrates analog output using the Arduino Due's built-in DAC.
- **Electret Microphone Record** — Samples audio from an electret microphone using the Due's ADC.
- **Electret Microphone Playback** — Plays sampled microphone data through the DAC.
- **IR Receiver** — Receives and decodes NEC infrared remote-control signals.
- **Keyboard Simulator** — Tests native USB keyboard emulation on a computer.
- **Mouse Simulator** — Tests native USB mouse emulation and generated mouse movement.
- **4-Digit 7-Segment Multiplexing** — Controls a four-digit 7-segment display using multiplexing.
- **Native TX/RX LED Control** — Demonstrates direct control of the Due's native USB TX/RX indicator LEDs.
- **RTC Clock Display** — Displays the SAM3X8E real-time clock using a multiplexed 4-digit display.
- **Remote-Controlled Mouse** — Combines NEC infrared input with native USB mouse and keyboard control.
- **SSD1306 OLED Demo** — Demonstrates text and graphics output on a 128×32 SSD1306 OLED display.
- **480×320 TFT Animation** — Displays a large image on a TFT screen and demonstrates basic animation.

## Hardware

The collection targets the **Arduino Due**, based on the **Microchip/Atmel SAM3X8E ARM Cortex-M3**. Depending on the sketch, additional hardware may include an OLED or TFT display, 4-digit 7-segment display, joystick, microphone, IR receiver and remote, or suitable audio circuitry.

## Usage

Open the required `.ino` file in the **Arduino IDE** and select **Arduino Due** as the target board. Install any libraries required by the individual sketch before compiling.

Several examples use the Due's **native USB port**, allowing it to act as a keyboard or mouse when connected to a computer.

## Purpose

These programs provide practical examples of **ADC, DAC, RTC, display control, audio sampling, infrared protocols, multiplexing, and USB HID**, while demonstrating how the Arduino Due can interface with a wide range of external hardware.
