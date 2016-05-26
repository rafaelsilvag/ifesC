#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[3] = {10,20,30};
    int *p;
    int **q;

    p = v;
    q = &p;
    printf("%d\n",p);
    printf("%d\n", &v[0]);
    
    printf("%d\n", *p);    
    p++;
    printf("%d\n", *(--p));

    printf("%d\n", **q);
    printf("%d\n", *q);
}
