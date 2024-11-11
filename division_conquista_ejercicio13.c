#include <stdio.h>
/*
int posicionPico(int arreglo[], int inicio, int fin){
	while(inicio <= fin){
		int mitad = (inicio + fin) / 2;
		if(arreglo[mitad-1] > arreglo[mitad]){
			if(arreglo[mitad-1] < arreglo[mitad-2]){
				return mitad -2;
			}
			return mitad -1;
		}else{
			inicio = mitad + 1;
		}
	}
}
*/

//284,3828125 KiB
 // De manera recursiva

  int posicionPico(int arreglo[], int inicio, int fin){
 	if(inicio == fin){
 		return inicio;
 	}
 	int mitad= (inicio+fin)/2;
 	
 	if(arreglo[mitad] > arreglo[mitad+1]){
 		return posicionPico(arreglo, inicio, mitad);
 	}else {
 		return posicionPico(arreglo, mitad+1,fin);
 	}
 	
 }
 

int pico(int arreglo[], int n){
	if(n < 3){
		return -1;
	}
	return posicionPico(arreglo, 0, n-1);
}

int main(){
	
	int arr [] = {1, 2, 3, 4, 5, -1, -2};
	int n = sizeof(arr) / sizeof(int);
	int res = pico(arr,n);
	printf("%d", res);
	return 0;
}
