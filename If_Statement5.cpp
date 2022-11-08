#include <iostream>



int main()
{
  unsigned char a, b, c, y;



   a = 0;
    b = 7;
    c = 1;



   /*
        if(a == 5 || (b == 7 && c == 1)){
            y = 1;
        }else{
            y = 0;
        }
    */



   _asm {
        mov al, a
        mov bl, b
        mov cl, c



       sub al, 5
        jz than



       sub bl, 7
        jnz el
        sub cl, 1
        jz than



       el:
        mov y, 0
        jmp endif
        
        than:
        mov y,1
        jmp endif
        
        endif:
    }



   printf_s("%d", y);

   return 0;
}