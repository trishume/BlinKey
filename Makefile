# You'll need to change these
SKETCH := $(HOME)/Box/Dev/Arduino
ARDUINO_VAR_PATH := $(SKETCH)/hardware/attiny/variants
BOARDS_TXT := $(SKETCH)/hardware/attiny/boards.txt

MONITOR_PORT := /dev/null
BOARD_TAG := trinket3
ISP_PROG := usbtiny

ARDUINO_LIBS = OnePixel

# This makefile is designed for OSX with homebrew
ARDUINO_DIR   = /Applications/Arduino.app/Contents/Resources/Java
include /usr/local/opt/arduino-mk/Arduino.mk

AVRDUDE_ISP_OPTS = -c $(ISP_PROG)
