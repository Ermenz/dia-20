#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


int main () {

setlocale("LC_ALL", "portuguese");


    
    printf("C�DIGO   |   DESCRIC�O   \n");
    printf("1        |   ADICIONAR PESSOA\n"); 
    printf("2        |   SAIR E EXIBIR RESULTADOS\n");


   printf("Informe c�digo");
   scanf("%d", codigo);

switch (codigo)
{
case 1:
    
do
{
    
    printf("informe seu sexo");
    gets(sexo);

    printf("informe a sua idade");
    scanf("%d", &idade);

    printf("informe seu sal�rio;");
    scanf("%f", &salario);
   
    if (idade > idade1)
   {
     idade = maior;
   }
   else
   {
    idade = menor;
   }
   
   idade = idade1;

    soma+= salario;
    quantidade++;

printf("C�DIGO   |   DESCRIC�O   \n");
printf("1        |   ADICIONAR PESSOA\n"); 
printf("2        |   SAIR E EXIBIR RESULTADOS\n");


   printf("Informe c�digo");
   scanf("%d", codigo);

} while (codigo = 1);
    break;

case 2:




   
}





return 0;

}