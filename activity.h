// =================================================================
//
// File: activity.h
// Author: Diego Perdomo Salcedo
// Date: 25/08/2022
//
// =================================================================

#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
unsigned int sumaIterativa(unsigned int n) {  
int sum=0;
while(int i=0 < n){
  sum += n;
  n-=1;
}
return sum;
}

// Complexity: La complejidad de este problema es O(n) ya que es un solo ciclo con n.

//=================================================================

unsigned int sumaRecursiva(unsigned int n) {
	if (n==0)
    return 0;
  else 
    return n+sumaRecursiva(n-1) ;
}

// Complexity: La complejidad de este es tambien O(n) ya que cuando se tiene una sola llamada recursiva en ejecución y su parámetro de control se disminuye o incrementa en un valor constante.

//=================================================================
unsigned int sumaDirecta(unsigned int n) {
	int sum = 0;
	sum = (n*(n+1))/2;
	return sum;
}

// Complexity: La complejidad de este es O(log) ya que estamos multiplica

#endif /* ACTIVITY_H */
