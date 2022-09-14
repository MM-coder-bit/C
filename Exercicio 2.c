// Exercício 2.
//
// Um arquivo CSV (comma-separated values) é um arquivo de texto que possui um padrão específico de formatação através de uma tabela estruturada
// na qual a separação das informações é dada por vírgula (comma). Suponha a existência de um arquivo de texto do tipo CSV contendo
// os nomes, pesos (em kg) e alturas (em metros) de várias pessoas, conforme o exemplo aseguir:
//
// "Fulano de Tal",79,1.72
// "Ciclano de Tal",98,1.81
// "Beltrano de Tal",77,1.73
//
// Escreva um programa que faça a leitura dos registros do arquivo e calcule e exiba o IMC (Índice de Massa Corporal) de cada pessoa.
// O IMC é dado por:
//
//IMC=peso/(altura*altura)

//------------------------------------------------------------//

//https://stackoverflow.com/questions/27208976/fscanf-csv-in-c-value-not-assigned

#include <stdio.h>
#include <math.h>

#define tam 200

int main(int argc, char *argv[])
{
    FILE *fp;
     
    char nome[tam];
    int peso;
    float altura;


    if ((fp=fopen ("exercicio_2.csv","r")) != NULL)
    {
      while(fscanf(fp, "%[^,],%d,%f", nome, &peso, &altura) != EOF)
      {
        //printf("%s %d %.2f\n",nome, peso, altura);
        printf("o IMC do %s e = %.2f\n",nome,(peso/(altura*altura)));
      }
    }
    else
    {
       printf("Erro ao carregar o arquivo!\n");  
    }

    fclose(fp);

    return 0;

}
