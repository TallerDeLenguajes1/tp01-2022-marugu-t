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

## Nota ejercicio 2, 3b)

En este caso, creé el archivo tp1_1.cpp y al compilar se generó el ejecutable. En .gitignore añado la regla paraa ignorar tp1_1.exe a la hora de hacer el commit.