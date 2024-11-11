#include <stdio.h>
	/*
	[1, 1, 1, 0, 0] =  3
 	[0, 0, 0, 0, 0] =  0
	[1, 1, 1, 1, 1] = -1
	
	Se tiene un arreglo tal que [1,1,1....0,0,0....],(es decir, unos seguidos de ceros).
	Devolver la  posicion del primer 0 que aparece, si no hay ningun 0 ,devolver -1.
	Ademas el algoritmo debe tener un orden de complejiad O(logn).
	Demostrar con el Teorema Maestro que, en efecto, el algoritmo es O(logn).
	*/
	int aux(int arreglo[], int inicio, int fin){
		if(inicio >= fin){
			return -1;
		}
		int mitad = (inicio+fin) / 2;
		if(arreglo[0] == 0){
			return 0;
		}
		
		if(arreglo[mitad] == 0){
			return mitad;
		}
	
	if (arreglo[mitad] == 1) { 
		return aux(arreglo, mitad + 1, fin); 
	}else {
	 	return aux(arreglo, inicio, mitad - 1);
	}
		
	}
	
	int ceroPosicion(int arreglo[], int n){
		return aux(arreglo, 0, n-1);
	}

	// A: 1; B: 2; C: O(1)
	 // f(n) = O(1)
	 // F(n) == n^log2 1 == n^0 == 1 == O(1)
	 // EL seguno case es: f(n) == n^logb A == logn 

	int main(){
	 	int arreglo[] = {1, 1, 1, 0, 0};
	 	int n = sizeof(arreglo) / sizeof(int);
	 	
	 	printf("%d", ceroPosicion(arreglo, n));
	 	
	 	return 0;
	}
