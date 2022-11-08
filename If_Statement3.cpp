#include <iostream>



int main()
{
  unsigned char a, b, y;



   a = 5;
    b = 7;



   /*
        if(a == 5 && b == 7){
            y = 1;
        }else{
            y = 0;
        }
    */



   _asm {
        mov al, a
        mov bl, b
        cmp al, 5
        jnz fjump
        cmp bl, 7
        jnz fjump
        mov y, 1
        jmp ajump
        fjump:
        mov y, 0
        ajump:
    }



   printf_s("%d", y);

   return 0;
}