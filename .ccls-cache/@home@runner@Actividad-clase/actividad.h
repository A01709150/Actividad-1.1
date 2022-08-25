// =================================================================
//
// File: activity.h
// Author: Diego Perdomo Salcedo
// Date: 25/08/2022
//
// =================================================================
using namespace std;
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaIterativa(unsigned int n) {  
int sum=0;
while(int i=0 < n){
  sum += n;
  n-=1;
}
return sum;

  }

//=================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	if (n==0)
    return 0;
  else 
    return n+sumaRecursiva(n-1) ;
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	return 0;
}

#endif /* ACTIVITY_H */
