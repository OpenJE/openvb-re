#include "GameItem.h"
typedef struct {
    GameItem GameItem;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
} GameWeapon;
undefined __stdcall ReadAttackModeData(uint param_1, int param_2);
undefined __thiscall DeductPrimaryAmmo(uint param_1);
undefined __thiscall DeductSecondaryAmmo(uint param_1);
int __thiscall GetEffectiveRange(int param_1);
int __thiscall CalculateMeleeToHit(int param_1, int * param_2, int * param_3, undefined4 param_4, int param_5);
int __thiscall CalculateRangedToHit(int param_1, int * param_2, int * param_3, undefined4 param_4, int param_5);
int __thiscall CalculateDamage(int param_1, int param_2, int * param_3, int param_4, int param_5, undefined4 param_6);
int __thiscall CalculateToHit(int param_1, int * param_2, int * param_3, undefined4 param_4);
undefined4 __thiscall UnloadPrimaryAmmo(int param_1);
undefined4 __thiscall UnloadPrimaryAmmo(int param_1);
undefined4 __thiscall ReloadPrimaryAmmo(int param_1, int param_2, int param_3);
undefined4 __thiscall ReloadSecondaryAmmo(int param_1, int param_2);
GameWeapon * __thiscall GameWeapon(int param_1);
undefined __stdcall ReadAttackModeData(uint param_1, int param_2);
uint __thiscall ReadData(int param_1, int param_2);
undefined4 __thiscall ResolveTargets(int param_1, cls_0x401b00 * param_2, int param_3, int param_4, char param_5, undefined4 param_6, cls_0x401b00 * param_7);
typedef struct {
    virt_meth_0x4080c0 * virt_meth_0x4080c0_0;
} GameWeapon::vftable_650020;