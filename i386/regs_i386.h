#ifndef __REGS_I386_H__
#define __REGS_I386_H__
#include <stdint.h>

extern void get_eax(uint32_t *reg);
extern void get_ecx(uint32_t *reg);
extern void get_edx(uint32_t *reg);
extern void get_ebx(uint32_t *reg);
extern void get_ebp(uint32_t *reg);
extern void get_esi(uint32_t *reg);
extern void get_edi(uint32_t *reg);
extern void get_esp(uint32_t *reg);
extern void get_eip(uint32_t *reg);

#endif      // __REGS_I386_H__
