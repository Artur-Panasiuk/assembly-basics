#include <iostream>



int main()
{
    unsigned char a = 2, y = 0;

   _asm {
    mov al, a
    mov bl, 0
    mov dl, 0
    _loop:
        add dl, 1
        shl bl, 1
        mov cl, al
        and cl, 1
        or bl, cl
        shr al, 1
        cmp dl, 8
        jnz _loop
        mov y, bl
    }



   printf("%d", y);
}