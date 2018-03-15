#include <stdio.h>
#include <stdint.h>
#include "regs_i386.h"

int main(int argc, char **argv)
{
    uint32_t eax, ecx, edx, ebx, esp, ebp, esi, edi, eip;

	#if 0
	get_eax(&eax);
	get_ecx(&ecx);
	get_edx(&edx);
	get_edx(&ebx);
	get_ebp(&ebp);
	get_esi(&esi);
	get_edi(&edi);
	get_esp(&esp);
	#endif
	get_eip(&eip);

	#if 0
    printf("eax: [%08X]\n", eax);
    printf("ecx: [%08X]\n", ecx);
    printf("edx: [%08X]\n", edx);
    printf("ebx: [%08X]\n", ebx);
    printf("ebp: [%08X]\n", ebp);
    printf("esi: [%08X]\n", esi);
    printf("edi: [%08X]\n", edi);
    printf("esp: [%08X]\n", esp);
	#endif
    printf("eip: [%08X]\n", eip);
    return 0;
}
