#include <stdio.h>

float funcionCuadratica(int num);
int direcVariable(int var);
void invertir(int *a,int *b);
void orden(int a, int b);

int main(){
printf("hello world!\n");
}

float funcionCuadratica(int num){
return(num*num);
}

int direcVariable(int var){
    printf("el contenido de la variable es:%d\n",var);
    printf("la direccion de memoria de la variable es:%d\n",&var);
}

void invertir(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void orden(int a, int b)
{
    int aux;

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }

    printf("\nvalor mas chico: %d", a);
    printf("\nvalor mas grande: %d", b);
}

