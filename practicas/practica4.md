## Objetivo
Hacer un spike sobre IPC: señale, fork/exec, memoria compartida y archivos mapeados a memoria.

## Herramintas
+ git
+ gcc

## Conceptos 

+IPC 
  + Comunicacion entre procesos
+Señales:
  +El emisor manda una señal y el receptor deja de hacer lo que esta haciendo y ejecuta el codigo de la señal.
  +Existen varias señales, para listarlas puedo usar el comando kill -l
  
+Memoria compartida.
  +Se crean un bloque de memoria, el bloque de memoria tiene un key.
  +Cualquier proceso con el key se puede conectar al bloque.
  +El bloque de memoria persiste hasta que se borre mediante un comando o se reinicie la computadora.
  
+Archivos mapeados a memoria. 
  +es un bloque de memoria compartida que esta asociada a un archivo.
  +Los cambios en el bloque se guardan automaticamente.

# Que apendi:
 Aprendi como funcionan los segmentos de memoria y como los podemos identificar. Vimos como los procesos funcionan a detslle y como se componen y se apuntan unos a otos.
 Aprendi que son los semaforos y por que son importantes. Vimos que son los Memory map que son basicamente un papel pasante de la memoria del disco duro.

# url del commit:
