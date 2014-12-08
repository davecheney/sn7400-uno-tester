class InputPin {
private: 
  uint8_t _pin;
public:
  InputPin(uint8_t pin);
  int Get();
  bool operator==(const int &b) const;
  bool operator!=(const int &b) const;
};

class OutputPin  {
private: 
  uint8_t _pin;

public:
  OutputPin(uint8_t pin);

  OutputPin operator=(const int rhs);
};

class Nand {
  public:
    OutputPin A;
    OutputPin B;
    InputPin Y;

    Nand(uint8_t a, uint8_t b, uint8_t y);
};

class Nor {
  public:
    OutputPin A;
    OutputPin B;
    InputPin Y;

    Nor(uint8_t a, uint8_t b, uint8_t y);
};

class Inverter {
  public:
    OutputPin A;
    InputPin Y;

    Inverter(uint8_t a, uint8_t y);
};

class And {
  public:
    OutputPin A;
    OutputPin B;
    InputPin Y;

    And(uint8_t a, uint8_t b, uint8_t y);
};

class Or {
  public:
    OutputPin A;
    OutputPin B;
    InputPin Y;

    Or(uint8_t a, uint8_t b, uint8_t y);
};
