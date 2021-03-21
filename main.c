//Marina Bulhosa
#include "coletordelixo.h"


int main()
{
    int *a = (int*) malloc (sizeof(int));
    int *b = (int*) malloc (sizeof(int));
    char *c = (char*) malloc (sizeof(char));
    char *d = (char*) malloc (sizeof(char));
    *a=100;
    *b=16;
    *c='A';
    *d='B';

    memoria *x=NULL, *y=NULL, *z=NULL, *w=NULL;

    x= malloc2(sizeof(memoria));
    atrib(x,*a);
    y= malloc2(sizeof(memoria));
    atrib(y,*b);
    z= malloc2(sizeof(memoria));
    atrib(z,*c);
    w= malloc2(sizeof(memoria));
    atrib(w,*d);
    atrib2(&x,&y);
    atrib2(&z,&w);
    Imprime(x);
    Imprime(y);
    Imprime(z);
    Imprime(w);

    return 0;
}
