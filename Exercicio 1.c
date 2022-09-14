//Escreva um programa que leia o conteúdo um arquivo de texto e:
//
//a. calcula apenas as palavras começadas pelas letras 'a' ou 'A'.
//b. calcula a frequência de vogais
//c. calcula o percentual de vogais no arquivo.

//------------------------------------------------------------//

#include <stdio.h>

char vogais[10] = {"aeiouAEIOU"}; // acrescentar esta melhoria!

int main()
{
    FILE *fp;                     //fp é o ponteiro para um arquivo.
    char c;
    
    float m = 0,n = 0;            // Variaveis auxiliares
    int tam;

    if ((fp=fopen ("exercicio_1.txt","r")) != NULL)
    {
       
        while ((c=fgetc(fp)) != EOF)
        {
            if (c == 'a' || c == 'A')
            {
                n++;
            }  
            // vogais
            if (c == 'a' || c == 'A'|| c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
            {
                m++;
            }
                    
            
        }

        // Ponteiros
        fseek( fp, 0, SEEK_END ); // Pula até o fim do arquivo (file,deslocamento,posição)
        tam = ftell(fp);         // verifica a posição do ultimo caractere

        char texto[tam];
        char aux_texto[tam];
        
        FILE *x;
        x = fopen("exercicio_1.txt","r");

        while (fscanf(x,"%[^\n]\n",aux_texto) != -1) // imprime tudo exceto /n
        {
            printf("\n%s",aux_texto);
            //texto = aux_texto;
        }
        
        //printf("%s", aux_texto);
                       
    }
    fclose(fp);
    //fclose(x);

    printf("\n-------------------------------------------");
    printf("\nA - Existem %1.f letras a/A no arquivo.",n);
    printf("\nB - Existem %1.f vogais no arquivo.",m);
    printf("\nC - Existem %1.f porcentos de vogais no arquivo.",(m/tam)*100);
    printf("\n  - Eistem %d caracteres no arquivo ",tam);

    //system("pause");
    
    return 0;
}
