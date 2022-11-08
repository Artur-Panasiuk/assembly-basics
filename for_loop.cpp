#include <iostream>



int main()
{
  int y = 0;



   /*
        for(int i = 0; i!=5; i++) y+=i;
    */



   _asm {
        mov ecx, 0
        mov eax, 0
        start:
            mov ebx, ecx
            sub ebx, 5
            jz endif
            add eax,ecx
            add ecx,1
        jmp start
            endif:
            mov y, eax
    }



   printf_s("%d", y);

   return 0;
}