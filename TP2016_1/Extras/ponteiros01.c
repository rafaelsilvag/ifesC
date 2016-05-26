#include <stdio.h>
#include <stdlib.h>

int main(){
    char v[5] = "ABCD";
    char *p;

    p = v;
    
    printf("%d\n",p);
    printf("%d\n", &v[0]);

    printf("%c\n", *(p++));
}    
