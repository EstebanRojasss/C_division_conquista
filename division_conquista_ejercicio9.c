#include <stdio.h>
#include <stdbool.h>

//Implementar, por división y conquista, una función que dado un arreglo y su largo, 
//determine si el mismo se encuentra ordenado. Indicar y justificar el orden. 
 bool aux(int arreglo[] ,int inicio, int fin){
 	if(inicio >= fin){ // O(1)
 		return true;
 	}
 	int mitad = (inicio+fin) / 2; //O(1)
 	if(arreglo[mitad] > arreglo[mitad+1]){  // O(1)
 		return false;
 	}
    return aux(arreglo, inicio, mitad) && aux(arreglo, mitad+1, fin);
 }

 bool comprobarOrden(int arreglo[], int n){
 	return aux(arreglo, 0, n-1);
 }
 
 // ORDEN TEOREMA MAESTRO: 
  // A: 2; B: 2; C: O(1)
  // T(n) = AT(n/B) + O(n);
  // T(n) = 2T(n/2) + O(1)
  //      = log b A = log 2 2 = 1. 
  // f(n) = O(1): significa que tiene complejidad constante, por lo tanto es menor a O(n),
  // porque todo algoritmo que crece con n, es mayor a un algoritmo constante O(1);
  // Por lo tanto el orden de complejidad de este algoritmo es de: O(n);
 

int main(){
	int arreglo[] = {1,2,3,4,5,9,7,8};
	int n = sizeof(arreglo) / sizeof(int);
	bool res = comprobarOrden(arreglo,n);
	printf("%d", res);
	
	return 0;
}
