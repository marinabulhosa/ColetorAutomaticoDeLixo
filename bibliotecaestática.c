//Marina Bulhosa
#include "coletordelixo.h"


memoria *malloc2(int tamanho)
{
    void *endereco=malloc(tamanho);
    ((memoria*)endereco)->cont=1; ///casting
    return endereco;
}

void *atrib(struct Memoria *endereco, void *valor)
{
    endereco->valor=valor;
}

void atrib2(struct Memoria **endereco1,struct Memoria **endereco2)
{
    struct Memoria *aux;
    (*endereco1)->cont--;
    if((*endereco1)->cont==0)
    {
        printf("\n A area que continha o valor %d,referenciada %d vezes agora esta limpa",(*endereco1)->valor,(*endereco1)->cont);
        aux=*endereco1;
        free(aux);
    }
    (*endereco2)->cont++;
    (*endereco1)=(*endereco2);
}

void Imprime(struct Memoria *endereco1)
{
    printf("\n%d aparece %d vezes",endereco1->valor,endereco1->cont);
}
