# Objetivo
Hacer un spike sobre hilos, semáforos y locks.

# Herrmamientas 
+ git
+ gcc

# Conceptos
+ Hilos
  + Es un proceso ligero que solo consta de un stack y el codigo y el heap los comparte con el proceso principal.
  + Pueden ejecutar funciones diferentes
  
  
+ Semáforos:
  + Es una variable global.
  + Soporta dos operaciones
    + Incrementar (sem_post) siempre incrementa en uno.
    + Decrementar (sem_wait) si el valor del semáforo es mayor a 0 decrementa y si es igual a cero se suspende.
  
+ Lock.
  + Es una variable global
  + Soporta dos operaciones.
    + lock (bloqueo)
    + unlock
    
+ Secciones críticas
  

# Que aprendí

+ Aprendí como hacer un sistema paralelo en donde hacemos algo hasta que existan recursos para hacerlo
+ Aprendí a hacer locks y quitar locks a variables
+ Aprendí a hacer semaforos y implementarlos

# Url del commit
https://github.com/DanielMartinezTec/so-gp1/commit/f477e37ad1bdd5a4d351b1ed691d905e692a8934#diff-1f016d571905788dd8bcfe052b6479ae
