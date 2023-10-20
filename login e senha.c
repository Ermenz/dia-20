#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include <stdbool.h>

int main () {

int i = 0;
int nota;
float media;
char resposta1 [250] = "N";
float soma;
char resposta [250];

do
{
     
     printf ("informe nota");
     scanf("%d", &nota);
     i++;

    soma+= nota;

     printf("Mais uma nota?");
     gets(resposta);

} while (strcmp(resposta, resposta1) != 0);

media = soma/i;

printf("Media: %.f", media);

return 0;
} 
