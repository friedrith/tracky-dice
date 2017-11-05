# Tracky Dice

This is a dice to put on your desk and control tracky.


## Version 0

* show a task is active
* start/stop the current task

> In this version, the arduino communicates with tracky-driver through serial port.

* To show the that a task is active, a led is blinking smoothly.
* To start/stop a task, the user must push a button


* [Arduino LED blink](https://www.arduino.cc/en/Tutorial/Blink)
* https://www.arduino.cc/en/Serial/Println
* http://gaelbillon.com/un-module-nodejs-pour-lire-les-donnees-du-port-serie/
* [Pushbutton on arduino](https://www.arduino.cc/en/tutorial/button)
* [Use interrupt for better reactivity](https://www.arduino.cc/en/Reference/attachInterrupt)
* [Circuits](https://circuits.io/)
* [Circuits editor](https://www.tinkercad.com)

[More about version 0](doc/version-0.md)


## Version 1

* show the description of the task
* show the duration of the current task
* stop the current task


### Show the current task

Alphanumeric LCD display (20x2):

* http://www.instructables.com/id/Interfacing-20x4-LCD-with-Arduino/
* https://learn.adafruit.com/adafruit-arduino-lesson-11-lcd-displays-1

Constrast are programmatically updatable


### Show the duration of the current task

LED 7-segment Display (4 digits):

* http://thepolyscope.com/fr/afficheur-7-segments-4-digits-arduino/
