#include <stdint.h>
#include <arduino.h>
#include "gates.h"

InputPin::InputPin(uint8_t pin) {
  _pin = pin;
  pinMode(_pin, INPUT);
}

int InputPin::Get() {
  return digitalRead(_pin);
}

bool InputPin::operator ==(const int &b) const {
  return digitalRead(_pin) == b;
}

bool InputPin::operator !=(const int &b) const {
  return digitalRead(_pin) != b;
}

OutputPin::OutputPin(uint8_t pin) {
    _pin = pin;
  pinMode(_pin, OUTPUT);
}

OutputPin OutputPin::operator=(const int rhs) {
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

