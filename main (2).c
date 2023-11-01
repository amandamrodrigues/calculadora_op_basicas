/*Fa�a um programa que leia um c�digo (1, 2, 3 ou 4) e dois valores do tipo inteiro, calcula e fornece:
� A adi��o dos n�meros para c�digo =1
� A subtra��o dos n�meros para c�digo =2
� A multiplica��o dos n�meros para c�digo =3
� A divis�o dos n�meros para c�digo = 4.
Aten��o: Cada opera��o dever� ser calculada por uma fun��o com retorno.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int adicao(int n1, int n2);
int subtracao(int n1, int n2);
int multiplicacao(int n1, int n2);
int divisao(int n1, int n2);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cod, num1, num2, Result;

     printf("\n Digite o primeiro numero: ");
           scanf("%d", &num1);
           printf("\n Digite o segundo numero: ");
           scanf("%d", &num2);

    printf("MENU: \n"
           "1-Adi��o\n"
           "2- Subtra��o\n"
           "3- Multiplica��o\n"
           "4-Divis�o\n"
           "Op��o escolhida: ");
           scanf("%d", &cod);



           switch(cod){
           case 1:
               Result = adicao(num1,num2);
               break;
           case 2:
                Result = subtracao(num1, num2);
                break;
            case 3:
               Result = multiplicacao(num1,num2);
               break;
           case 4:
                Result = divisao(num1, num2);
                break;
           default:
                printf("\nC�digo invalido\n");
           }
           if(cod==1||cod==2||cod==3||cod==4)
           printf("\nResultado: %d", Result);
}

int adicao(int n1, int n2){
    int soma;
    soma = n1 + n2;
    return soma;}

    int subtracao(int n1, int n2){
    int sub;
    sub = n1 - n2;
    return sub;}

    int multiplicacao(int n1, int n2){
    int vezes;
    vezes = n1 * n2;
    return vezes;}

    int divisao(int n1, int n2){
    int divide;
    divide = n1 / n2;
    return divide;

}
