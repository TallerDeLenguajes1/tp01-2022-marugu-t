#include <stdio.h>

int main(){

    printf("<-------------->\n");
    printf("   Hola mundo!\n");
    printf("<-------------->\n");
    
    int num_entero = 2;
    int *puntero;
    // Declaro la variable entera y un puntero a entero

    puntero = &num_entero;
    // Ahora el puntero tiene la dirección de memoria de num_entero

    printf("-> El contenido del puntero es: %p. \n", puntero);
    // El puntero contiene la dirección de memoria de num_enteros. Uso el modificador %p para mostrar su contenido.

    printf("-> Accedo al dato guardado en num_entero mediante el puntero: %d. \n",*puntero);
    // Uso el operador de indirección * para acceder al dato guardado en la variable cuya dirección de memoria está contenida en el puntero

    printf("-> Direccion de memoria de la variable num_entero: %p.\n",&num_entero);
    // Muestro la dirección de memoria de la variable num_entero usando el operador de dirección &. Notar que el resultado es el mismo que mostrando el contenido del puntero.

    printf("-> Direccion de memoria de la variable puntero: %p.\n",&puntero);
    // Muestro la dirección de memoria del puntero, pues puntero es por sí una variable también y como tal, tiene una dirección de memoria

    printf("-> Tama%co de memoria utilizado por la variable num_entero: %d (en bytes).",164,sizeof(num_entero));

    return 0;

}