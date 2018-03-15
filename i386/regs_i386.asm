section .text
global get_eax
global get_ecx
global get_edx
global get_ebx
global get_ebp
global get_esi
global get_edi
global get_esp
global get_eip

get_eax:
    mov ebx, [esp+0x04]
    mov [ebx], eax
    ret

get_ecx:
    mov eax, [esp+0x04]
    mov [eax], ecx
    ret

get_edx:
    mov eax, [esp+0x04]
    mov [eax], edx
    ret

get_ebx:
    mov eax, [esp+0x04]
    mov [eax], ebx
    ret

get_ebp:
    mov eax, [esp+0x04]
    mov [eax], ebp
    ret

get_esi:
    mov eax, [esp+0x04]
    mov [eax], esi
    ret

get_edi:
    mov eax, [esp+0x04]
    mov [eax], edi
    ret

get_esp:
    mov eax, [esp+0x04]
    mov [eax], esp
    sub [eax], dword 0x08
    ret

get_eip:
    mov eax, [esp]
    mov ebx, [esp+0x04]
    mov [ebx], eax	; return address on stack frame.
    ret
