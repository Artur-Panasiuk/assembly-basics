#include <iostream>



int main()
{
   unsigned char a, b, y;



   a = 5;
    b = 7;



   /*
        if(a == 5 || b == 7){
            y = 1;
        }else{
            y = 0;
        }
    */



   _asm {
        mov al, a
        mov bl, b



       sub al, 5
        jz than



       sub bl, 7
        jz than



       else:
        mov y,0
        jmp endif
        
        than:
        mov y,1
        jmp endif
        
        endif:
    }



   printf_s("%d", y);

   return 0;
}