#include <iostream>



int main()
{
    unsigned char a = 10, y = 0;


   _asm {
        mov al, a
        mov cl, 0
        mov dl, 0
        forloop:
        mov bl, al
            and bl, 1
            add dl, bl
            shr al, 1
            add cl, 1
            cmp cl, 8
            jnz forloop
            and dl, 1
            xor dl, 1
            mov y, dl



   }



   printf("%d", y);
}