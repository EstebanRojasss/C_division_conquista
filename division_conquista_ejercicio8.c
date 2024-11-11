#include <stdio.h>

// Determinar por division y conquista una funcion que determine el minimo de un arreglo.

int minAux(int arreglo[], int inicio, int fin){
	// Arreglo desordenado.
	if(inicio == fin){
		return arreglo[inicio];
	}
	int mitad = (inicio + fin) / 2;
	int min_izq = minAux(arreglo, inicio, mitad);
	int min_der = minAux(arreglo,mitad+1,fin);
	if(min_izq < min_der){
		return min_izq;
	}else return min_der;
	 
}

// el orden de complejidad del algoritmo es de O(n).

int Minimo(int arreglo[], int n){
	return minAux(arreglo, 0, n-1);
}

// Arreglo ordenado.

/*
int minimoArregloOrdenado(int arreglo[], int n){
    if(arreglo[0]<arreglo[n-1]){
    	return arreglo[0];
    }else return arreglo[n-1];
}
*/
int main(){
	int arreglo[] = {3,4,6,2,1,9,7,8,10};
	int n = sizeof(arreglo) / sizeof(int);
	int res = Minimo(arreglo, n);
	printf("El minimo es: %d",res);
	
}
