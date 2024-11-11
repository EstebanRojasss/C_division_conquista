#include <stdio.h>
/*
 Implementar, por división y conquista, una función que dado un arreglo sin elementos repetidos y casi ordenado 
 (todos los elementos se encuentran ordenados, salvo uno), obtenga el elemento fuera de lugar. Indicar y justificar el orden.
*/

int aux(int arreglo[], int inicio, int fin){
	if(inicio >= fin){
		return -1;
	}
	int mitad = (inicio+fin) / 2;
	if((mitad > inicio && arreglo[mitad] < arreglo[mitad-1]) || mitad < fin && arreglo[mitad] > arreglo[mitad+1]){
		return arreglo[mitad];
	} 
	int mit_izq = aux(arreglo, inicio, mitad);
    if(mit_izq != -1){
    	return arreglo[mitad];
    }
    return aux(arreglo, mitad+1, fin);
	
}  // ORDEN DE COMPLEJIDAD CON EL TEOREMA MAESTRO.
     // A: 2; B: 2: C: 1
     // LogbA = Log2 2 = 1;
	 // n log 2 2 = n1 = O(n) > c = O(1)
	 // El orden de complejidad es: O(n) 

int fueraDeLugar(int arreglo[], int n){
	return aux(arreglo, 0, n-1);
}


int main(){
	int arreglo[] = {1,2,3,4,9,5.10};
	int n = sizeof(arreglo) / sizeof(int);
	int res = fueraDeLugar(arreglo, n);
	printf("%d",res);
	
	return 0;
}
