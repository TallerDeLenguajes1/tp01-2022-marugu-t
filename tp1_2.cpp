#include <stdio.h>
#include <math.h>

// FUNCIONES
int cuadradoNumero(int numero);
// Esta función trabaja con enteros.

void cuadradoNumeroVoid(int numero);
// Esta función trabaja con enteros pero no retorna el valor del cuadrado, lo muestra directamente por pantalla.

void mostrarDirContenido(int variable);
// Esta función trabaja con variables de tipo entero.

void invertir(int *a, int *b);
// Para esta función recurro a pasaje por referencia (uso punteros a variables) a fin de modificar los valores de ambas variables.

void orden(int *a, int *b);
// Para esta función también recurro a pasaje de parámetros por referencia.

// ----------

int main(){

    printf("-----------------\n");

    int entero1 = 10;
    printf("CUADRADO -> El cuadrado del primer numero (%d) es: %d. \n",entero1,cuadradoNumero(entero1));
    // Prueba de la función cuadradoNumero con entero1.

    int entero2 = 4;
    cuadradoNumeroVoid(entero2);
    // Pruebo la funcion cuadradoNumeroVoid, se mostrará el resultado desde la misma función (la funcion no devuelve ningún resultado)

    printf("-----------------\n");

    int entero3 = 5;
    mostrarDirContenido(entero3);
    // Pruebo la funcion mostrarDirContenido pasando por valor el contenido de la variable entero3.

    printf("-----------------\n");

    int a = 10, b = 7;

    printf("INVERTIR -> Antes de invertir, a tiene el valor %d y b tiene el valor %d. \n",a,b);

    invertir(&a,&b);
    
    printf("INVERTIR -> Luego de invertir, a tiene el valor %d y b tiene el valor %d. \n",a,b);
    // Pruebo la funcion invertir para dos enteros a y b. Se explica su funcionamiento en comentarios dentro de la funcion.

    // Al trabajar con pasaje de parámetros por referencia, los cambios en las variables a y b se reflejan en main y no son exclusivos a la funcion invertir.

    printf("-----------------\n");

    int c = 50, d = 60;
    // Tras ordenar, en c se almacenará el menor valor y en d el mayor.

    if(c == d){

        printf("ORDENAR -> Los valores son iguales, c contiene %d y d contiene %d. \n",c,d);
        // En el caso de que los valores sean iguales.

    } else {

        orden(&c,&d);
        /* NOTAR QUE: Para esta función no importa el orden en que se pasen los parámetros c y d (primero c y luego d, o primero d y luego c), pero siempre guardará en el primer parámetro pasado el menor valor y en el segundo el mayor valor) */
    }
    
    printf("-----------------\n");


    return 0;

}

// FUNCIONES

int cuadradoNumero(int numero) {

    return numero*numero;
    // También podría usarse la función pow(numero,2) de math.h, de esta forma
    // return pow(numero,2);

}

void cuadradoNumeroVoid(int numero) {

    printf("CUADRADO -> El cuadrado del numero %d es %d. \n",numero,cuadradoNumero(numero));
    // o bien
    // printf("-> El cuadrado del numero %d es %d. \n",numero,numero*numero);

}

void mostrarDirContenido(int variable) {

    printf("INFO VAR.-> La direccion de memoria de la variable recibida es %p y su contenido es %d. \n",&variable,variable);

}

void invertir(int *a, int *b) {

    int aux = *a;
    // Guardo en una variable auxiliar el valor contenido en la variable a para luego asignarlo a la variable b. Uso el operador de indirección pues la funcion recibe las direcciones de memoria de las variables, no sus valores.

    *a = *b;
    // La variable a ahora contiene el valor de la variable b. Uso de nuevo el operador de indirección por la misma razón.

    *b = aux;
    // La variable b ahora contiene el valor que se encontraba en la variable a.

}

void orden(int *a, int *b) {

    if(*a != *b){

        if(*a > *b){
            invertir(a,b);
        }
        /* El único caso a considerar es si en la primera variable se almacena un valor mayor al que se encuentra en la segunda variable. En dicho caso, se invierten los valores entre las variables. En caso contrario, no es necesario invertir los valores */

        printf("ORDENAR -> El menor valor es %d (guardado en el primer parametro pasado) y el mayor valor es %d (guardado en el segundo parametro pasado).\n",*a,*b);

    } 
    // A la función llegarán valores distintos por el control impuesto en main, pero se vuelve a implementar el control en caso de eliminar el control en main.

}

// ----------

