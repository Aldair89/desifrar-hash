# desifrar-hash
Este código en C++ utiliza la librería Crypto++ para calcular el hash SHA-256 de una cadena de texto y luego realiza un intento de descifrar un hash objetivo mediante fuerza bruta.

La función CalculateSHA256 recibe una cadena de texto input y calcula su hash SHA-256 utilizando la clase CryptoPP::SHA256. El resultado se convierte a una representación hexadecimal y se devuelve como una cadena de texto.

La función CheckHashMatch compara un hash calculado a partir de una cadena de texto de entrada con el hash objetivo (targetHash). Si los hashes coinciden, devuelve true; de lo contrario, devuelve false.

En la función main, se define un hash objetivo targetHash que representa el hash SHA-256 de una cadena de texto desconocida.

A continuación, el programa intenta descifrar el hash objetivo por fuerza bruta. Utiliza un bucle for para iterar sobre valores enteros del 0 al 9999 (inclusive). Convierte cada valor entero a una cadena de texto (input) y luego llama a CheckHashMatch para verificar si el hash calculado a partir de input coincide con el hash objetivo. Si encuentra una coincidencia, imprime el valor original que generó el hash y termina el programa.

Si el bucle no encuentra ninguna coincidencia para el hash objetivo después de probar todos los valores del 0 al 9999, imprime un mensaje indicando que no se encontró ninguna coincidencia.

En resumen, el programa intenta descifrar el valor original que generó el hash SHA-256 objetivo utilizando una técnica de fuerza bruta al probar todas las combinaciones posibles de números enteros del 0 al 9999.
