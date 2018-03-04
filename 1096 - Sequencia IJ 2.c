#include <stdio.h>
 
int main() {
    
    int aux, I=1, J=7;
    
    for(aux=0; I<=9 && J!=5; aux++){
        if(J>5){
            printf("I=%d J=%d\n", I, J);
            J--;
        }
    
        if(J==5 && I<=9){
            printf("I=%d J=%d\n", I, J);
            J=J+2;
            I=I+2;
        }
    }

    return 0;
}
