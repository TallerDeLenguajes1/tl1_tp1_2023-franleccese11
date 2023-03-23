#include <stdio.h>
int main(){
    printf("hola mundo\n");
int num = 7;
int *p_num;
p_num = &num;
printf("1-La direccion de memoria almacenada por el puntero es: %d\n",p_num);
printf("2-La direccion de memoria almacenada por la variable es: %d\n",num);
printf("3-La direccion de memoria del puntero es: %d\n",&p_num);
printf("4-El  el tamaño de memoria utilizado por la variable es: %d\n",sizeof(num));
printf("5-El contenido del puntero es: %d\n",*p_num);
printf("6-La dirección de memoria almacenada por el puntero es: %d\n",);
}