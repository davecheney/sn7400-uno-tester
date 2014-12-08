#include <stdint.h>
#include "gates.h"
#include "chips.h"

int serialWrite(char c, FILE *f) {
  Serial.write(c);
  return 0;
}

void setup() {
  // setup the UART
  Serial.begin(19200);
  fdevopen(serialWrite, NULL);
  printf("RESET\n");
}

SN74LS00 ic;
SN74LS02 x;
SN74LS04 y;
SN74LS08 an;

void assert(Output& y, int v) {
  if (y != v) {
    printf("pin failed\n");
  }
}

void testNand(Nand& n, int a, int b, int y) {
  n.A = a;
  n.B = b;
  if(n.Y != y) 
    printf("FAIL: Nand: a: %d, b: %d, y: %d\n", a, b, y);
}
    
void t(Nand& n) {
  testNand(n, LOW, LOW,  LOW);
  testNand(n,HIGH, LOW, HIGH);
  testNand(n, LOW, HIGH, HIGH);
  testNand(n, HIGH, HIGH, LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  t(ic.n1);
  t(ic.n2);
  t(ic.n3);
  t(ic.n4);
}
