# You'll need to change these
SKETCH := $(HOME)/Box/Dev/Arduino
ARDUINO_VAR_PATH := $(SKETCH)/hardware/attiny/variants
BOARDS_TXT := $(SKETCH)/hardware/attiny/boards.txt

MONITOR_PORT := /dev/null
BOARD_TAG := trinket5
ISP_PROG := usbtiny
AVRDUDE_ARD_PROGRAMMER := usbtiny

ARDUINO_LIBS = OnePixel usbdrv
CFLAGS_STD := -std=gnu99
F_CPU := 16500000UL
AVRDUDE_OPTS := -q

# This makefile is designed for OSX with homebrew
ARDUINO_DIR   = /Applications/Arduino.app/Contents/Resources/Java
include /usr/local/opt/arduino-mk/Arduino.mk

AVRDUDE_ISP_OPTS = -c $(ISP_PROG)
AVRDUDE_ARD_OPTS = -D -c $(AVRDUDE_ARD_PROGRAMMER)
CFLAGS := -std=gnu99
