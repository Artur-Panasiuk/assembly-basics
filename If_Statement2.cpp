#include <iostream>



int main()
{
    unsigned char y, a = 0x32;



   _asm {
        mov al, a
        mov bl, 0
        /*if(al == 0x32)*/
        sub al, 0x32
        mov y,al




        mov y, bl
    }



   printf("%d\n", y);
    printf("%#4x = %d\n", a, a);
    printf("%x\n", a);



   return 0;
}