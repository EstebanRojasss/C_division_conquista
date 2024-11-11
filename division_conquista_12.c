#include <stdio.h>


// Implementar un algoritmo que por division y conquista permita obtener la parte entera de la raiz cuadrada
// de un numero N en tiempo O(log n). Por ejemplo para N = 10 devolver 3. Para 25 devolver 5.
int devolverAux(int numero){
	int resultado = 0, inicio = 1, fin = numero;
	if(numero == 0 || numero == 1){
		return numero;
	}
	while(inicio <= fin){
		int mitad = (inicio+fin) / 2;
		if(mitad * mitad == numero){
			return mitad;
		}
		if(mitad * mitad < numero){
			inicio = mitad + 1;
			resultado = mitad;
		}else {
			fin = mitad-1;
		}
		
	return resultado;
	}
	
  // A: 1: B: 2: C O(1)
    // log 2 1 = 0 = N^log21 = N^0 = 1 == C == O(1)
}

int devolverRaiz(int numero){
  devolverAux(numero);
}

int main(){
	int n = 10;
	printf("%d", devolverRaiz(n));
	
	return 0;
}
