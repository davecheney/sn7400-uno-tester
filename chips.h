// http://www.ti.com/lit/ds/symlink/sn74ls00.pdf
class SN74LS00 {
public:
  Nand n1, n2, n3, n4;

  SN74LS00();
};

// http://www.ti.com/lit/ds/symlink/sn74ls02.pdf
class SN74LS02 {
public:
  Nor n1, n2, n3, n4;

  SN74LS02();
};

// http://www.ti.com/lit/ds/symlink/sn74ls04.pdf
class SN74LS04 {
public:
  Inverter i1, i2, i3, i4, i5, i6;

  SN74LS04();
};

// http://www.ti.com/lit/ds/symlink/sn74ls08.pdf
class SN74LS08 {
public:
  And a1, a2, a3, a4;

  SN74LS08();
};

// http://www.ti.com/lit/ds/symlink/sn74ls32.pdf
class SN74LS32 {
public:
  Or o1, o2, o3, o4;

  SN74LS32();
};

