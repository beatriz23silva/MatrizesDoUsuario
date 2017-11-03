#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <funcoes.h>

#define NMAXLINHAS 20
#define NMAXCOLUNAS 20

int opcao=0;
int nlinhasA,  ncolunasA, nlinhasB, ncolunasB, aux_numA=0, aux_numB=0;
float matrizA[NMAXLINHAS][NMAXCOLUNAS], matrizB[NMAXLINHAS][NMAXCOLUNAS], matrizC[NMAXLINHAS][NMAXCOLUNAS];
int i, j, nlinhas, ncolunas, nlinhasC, ncolunasC;


void Opcao(int opcao){
    void menu();
    void tamMatrizA();
    void tamMatrizB();
    void num_aleatoriosA();
    void num_aleatoriosB();
    void atribuir_A();
    void atribuir_B();
    void soma();
    void sub();
    void mult();
    void ImprimirA();
    void ImprimirB();
    void ImprimirC();



    do{

        menu();
        scanf("%d", &opcao);

        switch(opcao){
        case 1:

             tamMatrizA();

            break;
        case 2:
             tamMatrizB();

            break;
        case 3:

             num_aleatoriosA();

            break;
        case 4:

             num_aleatoriosB();

            break;

        case 5:
             atribuir_A();

            break;
        case 6:

             atribuir_B();

            break;
        case 7:
             soma();

            break;

        case 8:
             sub();

            break;

        case 9:
             mult();

            break;

        case 10:

             ImprimirA();

            break;

        case 11:
             ImprimirB();

            break;

        case 12:
             ImprimirC();

            break;

        }

    }while (opcao != 13);


}


void menu(){

    printf("\n(1) Definir o tamanho da matriz A \n"
           "(2) Definir o tamanho da matriz B \n"
           "(3) Preencher a matriz A com valores aleatorios \n"
           "(4) Preencher a matriz B com valores aleatorios  \n"
           "(5) Atribuir valor para um elemento da matriz A \n"
           "(6) Atribuir valor para um elemento da matriz B \n"
           "(7) Calcular A+B \n"
           "(8) Calcular A-B \n"
           "(9) Calcular A*B \n"
           "(10) Imprimir matriz A \n"
           "(11) Imprimir matriz B \n"
           "(12) Imprimir matriz C \n"
           "(13) Sair \n");

    printf("\nDigite sua operacao: ");

}
void tamMatrizA(){

    do{
        printf("digite o numero de linhas : ");
        scanf("%d", &nlinhasA);


        if (nlinhasA > NMAXLINHAS){
            printf("Digite no maximo 20 linhas!\n");
        }


    } while(nlinhasA > NMAXLINHAS);

    do{
        printf("digite o numero de colunas: ");
        scanf("%d", &ncolunasA);
        if (nlinhasA > NMAXLINHAS){
            printf("Digite no maximo 20 colunas!\n");
        }
    } while(ncolunasA > NMAXCOLUNAS);


    for (i=0; i<nlinhasA; i++){
        for (j=0; j<ncolunasA; j++){

            matrizA[i][j] = 0;


        }


    }

    aux_numA=1;

}
void tamMatrizB(){

    do{
        printf("digite o numero de linhas : ");
        scanf("%d", &nlinhasB);
    } while(nlinhasB > NMAXLINHAS);

    do{
        printf("digite o numero de colunas: ");
        scanf("%d", &ncolunasB);
    } while(ncolunasB > NMAXCOLUNAS);

    for (i=0; i<nlinhasB; i++){
        for (j=0; j<ncolunasB; j++){

            matrizB[i][j] = 0;


        }


    }
    aux_numB=1;
}

void num_aleatoriosA(){

    if (aux_numA == 0){


        printf("Voce nao digitou o tamanho da matriz A. Retorne para a opcao (1). \n");

    }

    srand(time(0));
    for(i=0; i<nlinhasA; i++){
        for(j=0; j<ncolunasA; j++){

            matrizA[i][j] = rand();
        }
    }
}

void num_aleatoriosB(){
    if (aux_numB == 0){


        printf("Voce nao digitou o tamanho da matriz B. Retorne para a opcao (2). \n");

    }
    srand(time(0));
    for (i=0; i<nlinhasB; i++){
        for (j=0; j<ncolunasB; j++){

            matrizB[i][j] = rand();
        }

    }
}

void atribuir_A(){
     printf("aux_numA: %d ", aux_numA);
    if (aux_numA == 0){


        printf("Voce nao digitou o tamanho da matriz A. Retorne para a opcao (1). \n");

    }
    for(i=0; i<nlinhasA; i++){
        for(j=0; j<ncolunasA; j++){

            printf("digite o elemento (%d,%d):", i,j);
            scanf("%f", &matrizA[i][j]);
        }
    }
}

void atribuir_B(){
    if (aux_numB == 0){


        printf("Voce nao digitou o tamanho da matriz B. Retorne para a opcao (2). \n");

    }
    for(i=0; i<nlinhasB; i++){
        for(j=0; j<ncolunasB; j++){

            printf("digite o elemento (%d,%d):", i,j);
            scanf("%f", &matrizB[i][j]);
        }
    }
}

void soma(){

    for (i=0; i<nlinhasA; i++){
        for (j=0; j<ncolunasA; j++){

            matrizC[i][j] = 0;


        }


    }

    if (aux_numA==0 && aux_numB==0) {
        printf("Voce nao digitou o tamanho da matriz A nem o da B. Retorne para a opcao (1) e para a opcao (2). \n");

    }
    else if (aux_numA == 0 ){


        printf("Voce nao digitou o tamanho da matriz A. Retorne para a opcao (1). \n");

    }
    else if (aux_numB ==0) {


        printf("Voce nao digitou o tamanho da matriz B. Retorne para a opcao (2). \n");

    }
    else if (nlinhasA!=nlinhasB){

        printf("O numero de linhas de A e B sao diferentes. \n "
               "A operacao nao pode ser realizada. \n");


    }
    else if (ncolunasA!=ncolunasB){

        printf("O numero de colunas de A e B sao diferentes. \n "
               "A operacao nao pode ser realizada. \n");

    }



    nlinhas = nlinhasB;
    ncolunas = ncolunasB;
    for (i=0; i<nlinhas; i++){
        for(j=0; j<ncolunas; j++){

            matrizC[i][j]= matrizA[i][j] + matrizB[i][j];

        }


    }
}

void sub(){
    for (i=0; i<nlinhasA; i++){
        for (j=0; j<ncolunasA; j++){

            matrizC[i][j] = 0;


        }


    }
    if (aux_numA == 0 && aux_numB==0) {
        printf("Voce nao digitou o tamanho da matriz A nem o da B. Retorne para a opcao (1) e para a opcao (2). \n");


    }
    else if (aux_numA == 0 ){


        printf("Voce nao digitou o tamanho da matriz A. Retorne para a opcao (1). \n");

    }
    else if (aux_numB ==0) {


        printf("Voce nao digitou o tamanho da matriz B. Retorne para a opcao (2). \n");

    }
    else if (nlinhasA!=nlinhasB){

        printf("O numero de linhas de A e B sao diferentes. \n "
               "A operacao nao pode ser realizada. \n");


    }
    else if (ncolunasA!=ncolunasB){

        printf("O numero de colunas de A e B sao diferentes. \n "
               "A operacao nao pode ser realizada. \n");

    }



    nlinhas = nlinhasB;
    ncolunas = ncolunasB;
    for (i=0; i<nlinhas; i++){
        for(j=0; j<ncolunas; j++){

            matrizC[i][j]= matrizA[i][j] - matrizB[i][j];

        }


    }
}

void mult(){

    for (i=0; i<nlinhasA; i++){
        for (j=0; j<ncolunasB; j++){

            matrizC[i][j] = 0;


        }


    }


    if (aux_numA == 0 && aux_numB==0) {
        printf("Voce nao digitou o tamanho da matriz A nem o da B. Retorne para a opcao (1) e para a opcao (2). \n");


    }
    else if (aux_numA == 0 ){


        printf("Voce nao digitou o tamanho da matriz A. Retorne para a opcao (1). \n");

    }
    else if (aux_numB ==0) {


        printf("Voce nao digitou o tamanho da matriz B. Retorne para a opcao (2). \n");

    }
    else if (ncolunasA!=nlinhasB){

        printf("O numero de linhas de A e de colunas de B sao diferentes. \n "
               "A operacao nao pode ser realizada. \n");


    }
    int k;
    for (i=0; i<nlinhasA; i++){
        for(j=0; j<nlinhasA; j++){
            for(k=0; k<ncolunasA;k++){
                matrizC[i][j]= matrizC[i][j] + (matrizA[i][k] * matrizB[k][j]);
            }


        }
    }
}

void ImprimirA(){
    if (aux_numA == 0 ){


        printf("Voce nao digitou o tamanho da matriz A. Retorne para a opcao (1). \n");

    }


    for (i=0; i<nlinhasA; i++){
        for(j=0; j<ncolunasA; j++){

            printf("%g ", matrizA[i][j]);

        }
        printf("\n");

    }
}
void ImprimirB(){
    if (aux_numB == 0 ){


        printf("Voce nao digitou o tamanho da matriz B. Retorne para a opcao (2). \n");

    }

    for (i=0; i<nlinhasB; i++){
        for(j=0; j<ncolunasB; j++){

            printf("%g ", matrizB[i][j]);

        }
        printf("\n");

    }

}

void ImprimirC(){
    if (aux_numA == 0 && aux_numB==0) {
        printf("Voce nao digitou o tamanho da matriz A nem o da B. Retorne para a opcao (1) e para a opcao (2). \n");


    }
    else if (aux_numA==0){


        printf("Voce nao digitou o tamanho da matriz A. Retorne para a opcao (1). \n");

    }
    else if (aux_numB==0) {


        printf("Voce nao digitou o tamanho da matriz B. Retorne para a opcao (2). \n");

    }

    for (i=0; i<nlinhasA; i++){
        for(j=0; j<ncolunasB; j++){

            printf("%g ", matrizC[i][j]);

        }
        printf("\n");

    }
}

