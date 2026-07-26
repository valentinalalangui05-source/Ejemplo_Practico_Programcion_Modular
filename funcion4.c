#include <stdio.h>

void completarMatriz(int matrizA[2][3], int numMatriz);
void mostrarMatriz(int matriz1[2][3], char nombre[]);
void sumarMatriz(int matriz1[2][3], int matriz2[2][3], int resultado[2][3]);
void restarMatriz(int matriz1[2][3], int matriz2[2][3], int resultado[2][3]);
void productoMatriz(int matriz1[2][3], int matriz2[2][3], int resultado[2][3]);

int main (){

    int matriz1[2][3];
    int matriz2[2][3];
    int resultado[2][3];
    
    completarMatriz(matriz1, 1);
    completarMatriz(matriz2, 2);

    mostrarMatriz(matriz1, "Matriz 1");
    mostrarMatriz(matriz2, "Matriz 2");

    sumarMatriz(matriz1, matriz2, resultado);
    mostrarMatriz(resultado, "El resultado de la suma es:");

    restarMatriz(matriz1, matriz2, resultado);
    mostrarMatriz(resultado, "El resultado de la resta es:");\

    productoMatriz(matriz1, matriz2, resultado);
    mostrarMatriz(resultado, "El resultado de la multiplicacion es:");

    return 0;
}

//Permite que el usuario ingrese uyna matriz
void completarMatriz(int matrizA[2][3], int numMatriz){

    printf("Ingrese matriz %i:\n", numMatriz);
    
    for(int i=0; i<2; i++){

        for(int j = 0; j < 3; j++){
            printf("Ingrese valor [%i] [%i] :", i, j);
            scanf("%i", &matrizA[i][j]);
        }
        
    }

}
//Permite ver las matrices completas
void mostrarMatriz(int matriz1[2][3], char nombre[]){
    //A la variable nombre se le coloco como lista ya que el char necesita un puntero o un arreglo para represenatr dicha cadena

    printf("%s\n", nombre);
    
      for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
}

//permite sumar Matrices
void sumarMatriz(int matriz1[2][3], int matriz2[2][3], int resultado[2][3]){

    for(int i=0; i<2; i++){
        for(int j = 0; j < 3; j++){
            resultado[i][j] = matriz1[i][j]+matriz2[i][j];
        }
        
    }
}

//permite restar Matrices
void restarMatriz(int matriz1[2][3], int matriz2[2][3], int resultado[2][3]){

    for(int i=0; i<2; i++){
        for(int j = 0; j < 3; j++){
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
        
    }
}

//permite multiplicar matrices
void productoMatriz(int matriz1[2][3], int matriz2[2][3], int resultado[2][3]){

    for(int i=0; i<2; i++){
        for(int j = 0; j < 3; j++){
            resultado[i][j] = matriz1[i][j] * matriz2[i][j];
        }
        
    }
}

