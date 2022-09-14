//Exercício 3.

//Escreva um programa para criar um arquivo de texto com as informações do exercício anterior.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define guest 3

int main(int argc, char *argv[])
{
    FILE  *fp;
    int i=0;
    int usuarios = 0;

    char nome[51];
    char peso[10];
    char tamanho[10]; 

    //printf("Quantos usuários?");
    //scanf("%i",&usuarios);
    

    if ((fp=fopen("wIMC.txt","w+")) != NULL) // w+ = read and write
    {
        for ( i = 0; i < guest; i++)
        {
            printf("\nInsira o nome: ");
            fgets(nome, 50, stdin);
            nome[strlen(nome) - 1] = '\0'; // removendo o /n
            
            printf("\nInsira o peso:");
            fgets(peso, 50, stdin);
            peso[strlen(peso) - 1] = '\0';
            
            printf("\nInsira o tamanho:");
            fgets(tamanho, 50, stdin);
            tamanho[strlen(tamanho) - 1] = '\0';

            fprintf(fp,"%s,%s,%s\n",nome,peso,tamanho);

            free(nome);
            free(peso);
            free(tamanho);

        }
        
        fclose(fp);
    }
    else
    {
        printf("Erro na abertura do arquivo");
    }
    system("pause");
}