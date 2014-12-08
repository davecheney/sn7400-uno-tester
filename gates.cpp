#include <stdint.h>
#include <arduino.h>
#include "gates.h"

Output::Output(uint8_t pin) {
  _pin = pin;
  pinMode(_pin, INPUT);
}

int Output::Get() {
  return digitalRead(_pin);
}

bool Output::operator ==(const int &b) const {
  return digitalRead(_pin) == b;
}

bool Output::operator !=(const int &b) const {
  return digitalRead(_pin) != b;
}

Input::Input(uint8_t pin) {
    _pin = pin;
  pinMode(_pin, OUTPUT);
}

Input Input::operator=(const int rhs) {
  digitalWrite(_pin, rhs);
}

Nand::Nand(uint8_t a, uint8_t b, uint8_t y) :
  A(a), B(b), Y(y) { };
  
Nor::Nor(uint8_t a, uint8_t b, uint8_t y) :
  A(a), B(b), Y(y) { };

Inverter::Inverter(uint8_t a, uint8_t y) :
  A(a), Y(y) { };

And::And(uint8_t a, uint8_t b, uint8_t y) :
  A(a), B(b), Y(y) { };
  
Or::Or(uint8_t a, uint8_t b, uint8_t y) :
  A(a), B(b), Y(y) { };

