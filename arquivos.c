#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE  *fp;
    int i;
    char nome[51];

    if ((fp=fopen("nome.txt","w")) != NULL)
    {
        for ( i = 0; i < 10; i++)
        {
            printf("\nEscreva um Animal: ");
            fgets(nome, 50, stdin);
            fprintf(fp, "Animal %d: %s\n", i+1, nome);
        }
        
        fclose(fp);
    }
    else
    {
        printf("Erro na abertura do arquivo");
    }
    system("pause");
}