#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main () {

int codigo = 0;
float soma = 0;
float salario;
int idade;
char sexo;
int maior;
int menor;
int salarioacima = 0;
int quantidade;
float media ;


setlocale(LC_ALL, "portuguese");

printf("CÓDIGO   |   DESCRICÃO   \n");
printf("1        |   ADICIONAR PESSOA\n"); 
printf("2        |   SAIR E EXIBIR RESULTADOS\n");

    
do {

    printf("Diga o código");
    scanf("%d", &codigo);

    printf("informe seu sexo ");
    scanf("%s", &sexo);


    printf("informe a sua idade");
    scanf("%d", &idade);

    printf("informe seu salário");
    scanf("%f", &salario);
   
   
   if (maior < idade)
   {
     maior = idade;
   }
   if (menor > idade)
   {
    menor = idade;
   }

    soma+= salario;
    quantidade++;

  if (sexo == 'F' && salario > 5000  )
  {
    salarioacima++;
  }

   
    printf("CÓDIGO   |   DESCRICÃO   \n");
    printf("1        |   ADICIONAR PESSOA\n"); 
    printf("2        |   SAIR E EXIBIR RESULTADOS\n");
    
    printf("Diga o código");
    scanf("%d", &codigo);

  
 }while (codigo == 1);

 media= soma/quantidade;


printf("Media de salário %.2f \n", media);
printf("Menor idade do grupo %d \n", menor);
printf("maior idade do grupo %d \n", maior); 
printf("Quantidade de mulheres com salário acima de 5000: %d \n", salarioacima);


return 0;

}