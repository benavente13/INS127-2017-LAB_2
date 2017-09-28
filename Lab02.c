#include <stdio.h>
#include <stdlib.h>

void iniciarMatriz(float**Matriz,int filas, int columnas){
	int i, j;


	Matriz = malloc(filas*sizeof(float*));
	for(i = 0; i < filas; i++) {
		Matriz[i] = malloc(columnas*sizeof(float));
	}
	for(i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			Matriz[i][j] = 0;
		}
	}
	printf("La matriz tiene %i filas y %i columnas",filas,columnas);
}
void llenarMatriz(float**Matriz,int filas, int columnas){
	int i, j;

	for(i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			Matriz[i][j] = rand() & 25;
		}
	}
	for(i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			printf("Los numeros almacenados en la matriz son:%f",Matriz[i][j]);
		}
	}
}
void mostrarMatriz(float**Matriz,int filas, int columnas){

}

void primofobico(float**Matriz,int filas, int columnas){
    int i,j;
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            if(numeroPrimo(Matriz[i][j])==true){
                Matriz[i][j]=0;
            }else{
                continue;
                }
        }
    }

}
void primo(){
}


int main(){
	float **Matriz;
	int filas, columnas;
	int i, j;

	printf("Ingrese el tamaño de las filas de la matriz:\n ");
	scanf("%i", &filas);
	printf("Ingrese el tamaño de las columnas de la matriz:\n");
	scanf("%i", &columnas);


	iniciarMatriz(Matriz,filas,columnas);
	llenarMatriz(Matriz,filas,columnas);

	primofobico(Matriz,filas,columnas);




}
