#include <stdio.h>
float calcularPromedioUnidad(int n);
float calcularACD();
float calcularAPE();
float calcularAA();
float calcularES();
void notaCualitativa(float promedio);

int main(){
    //se guarda el numero de unidades
    const int NUMEROUNIDADES = 3;
    float sumaPromedios = 0, promedioFinal;

    //Al for se lo utiliza para llamar a la funcion 3 veces
    for(int  i=1; i<=NUMEROUNIDADES; i++){
        sumaPromedios += calcularPromedioUnidad(i);

    }
    // Calcula el promedio final
    promedioFinal = sumaPromedios / NUMEROUNIDADES;

    printf("PROMEDIO FINAL: %.2f\n", promedioFinal);

    notaCualitativa(promedioFinal);
    
    return 0;
}

//Aqui creamos la funcion para llamarla en el main
float calcularPromedioUnidad(int n){
    
    float promedioACD, promedioAPE, promedioAA, promedioES, promedioUnidad;
    
    printf("La unidad es: %i\n", n);

    promedioACD = calcularACD();
    //printf("Ponderado ACD: %.2f\n", promedioACD);

    promedioAPE = calcularAPE();
    //printf("Ponderado APE: %.2f\n", promedioAPE);

    promedioAA = calcularAA();
    //printf("Ponderado AA: %.2f\n", promedioAA);

    promedioES = calcularES();
    //printf("Ponderado AA: %.2f\n", promedioES);

    promedioUnidad = promedioACD + promedioAPE + promedioAA + promedioES;

    printf("\nPromedio de la Unidad %d: %.2f\n", n, promedioUnidad);

    return promedioUnidad;
}

//Funcion que nos permite calcular la nata del ACD.
float calcularACD(){
    float nota, pACD, sumaNota = 0;
    int numACD;
    do{
        printf("Ingrese el numero de las actividades ACD: ");
        scanf("%i", &numACD);    
    }while(numACD <= 0 || numACD > 10);

    for(int i=1; i<=numACD; i++){
        do{
            printf("Ingresar la nota %i: ", i);
            scanf("%f", &nota);
        }while(nota < 0 || nota > 10);
        sumaNota+=nota;
    }
    pACD = (sumaNota/numACD)* 0.2; 
    return pACD;
}

//Funcion que nos permite calcular la nata del APE.
float calcularAPE(){
    float nota, pAPE, sumaNota = 0;
    int numAPE;
    do{
        printf("Ingrese el numero de las actividades APE: ");
        scanf("%i", &numAPE);    
    }while(numAPE <= 0 || numAPE > 10);

    for(int i=1; i<=numAPE; i++){
        do{
            printf("Ingresar la nota %i: ", i);
            scanf("%f", &nota);
        }while(nota < 0 || nota > 10);
        sumaNota+=nota;
    }
    pAPE = (sumaNota/numAPE)* 0.25; 
    return pAPE; 
}

//Funcion que nos permite calcular la nata del AA.
float calcularAA(){
    float nota, pAA, sumaNota = 0;
    int numAA;
    do{
        printf("Ingrese el numero de las actividades AA: ");
        scanf("%i", &numAA);    
    }while(numAA <= 0 || numAA > 10);

    for(int i=1; i<=numAA; i++){
        do{
            printf("Ingresar la nota %i: ", i);
            scanf("%f", &nota);
        }while(nota < 0 || nota > 10);
        
        sumaNota+=nota;
    }
    pAA = (sumaNota/numAA)* 0.2; 
    return pAA;
}

//Función que calcula la nota ponderada del examen (80%) y del portafolio (20%).
float calcularES(){
    float notaES, notaPortafolio, pES, numES, numPortafolio;
    do{
        printf("Ingrese la nota del examen: ");
        scanf("%f", &numES);
    }while(numES < 0 || numES > 10);
    
    do{
        printf("Ingrese la nota del portafolio: ");
        scanf("%f", &numPortafolio);
    }while(numPortafolio < 0 || numPortafolio > 10);
    
    notaES = numES * 0.8;
    notaPortafolio = numPortafolio * 0.2;
    pES = (notaES+notaPortafolio)* 0.35;

    return pES;
}

//funcion que me permite calcular nota cuantitativa
void notaCualitativa(float promedio){

    printf("Estado: ");

    if(promedio>=7){
        printf("APROBADO\n");

    }else if(promedio>=2.5){
        printf("SUPLETORIO\n");

    }else{
        printf("REPROBADO\n");

    }
}

