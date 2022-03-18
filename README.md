# Trabajo Práctico N°1
(marugu-t - Martin Agüero Trevisan)
## EJERCICIO 2 - 2a) Sobre el archivo .gitignore: ¿por qué es conveniente incluirlo? ¿cuándo se debe hacer? ¿cómo configurar el archivo .gitignore?

Se puede crear el archivo .gitignore en la raíz del directorio para indicar qué archivos y/o carpetas serán ignoradas cuando se realiza un commit (extraído de: [Ignoring Files, Github Docs](https://docs.github.com/en/get-started/getting-started-with-git/ignoring-files)). En este sentido, resulta conveniente incluirlo para cuando sea necesario hacer un commit de varios archivos al mismo tiempo teniendo en cuenta que se desea dejar de lado/ignorar otros archivos que no queremos incluir dentro del commit a realizar.

No es obligatorio el uso de .gitignore, por lo tanto no se puede definir exactamente cuándo usarlo o no, pero es recomendable usarlo para ignorar archivos que no es necesario añadir a nuestro repositorio o para evitar añadirlos de forma accidental.

Se configura de la siguiente manera:

- Abrir Git Bash
- Ir a la ubicación del repositorio Git
- Se usa el siguiente comando que crea el archivo .gitignore: touch .gitignore

En el archivo .gitignore se puede observar que se ignora al archivo ignorado.txt

## Nota ejercicio 2, 3b), 3c) y 3d)

En este caso, creé el archivo tp1_1.cpp y al compilar se generó el ejecutable. En .gitignore añado la regla para ignorar tp1_1.exe a la hora de hacer el commit.

## Si resolvió correctamente los puntos ii y iii notará que el resultado es el mismo. ¿A qué se debe?

Esto ocurre porque el puntero contiene la dirección de memoria de la variable que en mi caso llamé "num_entero". Si muestro el contenido del puntero, muestro la dirección de memoria de la variable num_entero. Es decir, puedo mostrar dicha dirección de memoria usando el mismo puntero a esa variable o el operador de dirección &.

## ¿Qué obtiene en el punto 4? ¿es igual a los anteriores? ¿por qué?

En el punto iv se muestra la dirección de la variable puntero, la diferencia con los puntos ii y iii es que en estos se muestra la dirección de la variable num_entero. La variable puntero, si bien contiene la dirección de memoria de otra variable (en este caso, num_entero) es también una variable, y como tal se encuentra almacenada en una dirección de memoria dada (distinta de aquella en donde se encuentra num_entero).