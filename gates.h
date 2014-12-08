class Output {
private: 
  uint8_t _pin;
public:
  Output(uint8_t pin);
  int Get();
  bool operator==(const int &b) const;
  bool operator!=(const int &b) const;
};

class Input  {
private: 
  uint8_t _pin;

public:
  Input(uint8_t pin);

  Input operator=(const int rhs);
};

class Nand {
  public:
    Input A;
    Input B;
    Output Y;

    Nand(uint8_t a, uint8_t b, uint8_t y);
};

class Nor {
  public:
    Input A;
    Input B;
    Output Y;

    Nor(uint8_t a, uint8_t b, uint8_t y);
};

class Inverter {
  public:
    Input A;
    Output Y;

    Inverter(uint8_t a, uint8_t y);
};

class And {
  public:
    Input A;
    Input B;
    Output Y;

    And(uint8_t a, uint8_t b, uint8_t y);
};

class Or {
  public:
    Input A;
    Input B;
    Output Y;

    Or(uint8_t a, uint8_t b, uint8_t y);
};
