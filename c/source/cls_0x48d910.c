#include "../include/cls_0x48d910.h"

void __thiscall cls_0x48d910::meth_0x48d910(cls_0x48d910 *this)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)this->mbr_0x34;
  if (ppiVar1 != (int **)this->mbr_0x38) {
    do {
      if (*ppiVar1 != (int *)0x0) {
        (**(code **)(**ppiVar1 + 0x14))();
      }
      ppiVar1 = ppiVar1 + 1;
    } while (ppiVar1 != (int **)this->mbr_0x38);
  }
  return;
}


