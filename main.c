#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 1000

    struct nomes{

    char primNome[tam][tam];
    char aux1[tam];
    char aux2[tam];
    char sobrenome[tam][tam];

    };


int main(){

    int a=0, b=0, N, c=0, menor;
    scanf("%d", &N);

    struct nomes primeiro;

    while(a < N)
    {
        scanf("%s ", primeiro.primNome[a]);
        scanf("%s", primeiro.sobrenome[a]);
        a++;
    }

    a = 0;
    while (a < N-1)
        {
                menor = a;
                primeiro.sobrenome[a]==primeiro.sobrenome[menor];

            b = a+1;
            while (b < N)
                {
                    c = 0;
                    while(primeiro.primNome[menor][c] == primeiro.primNome[b][c])
                    {
                            c++;
                    }
                    if(primeiro.primNome[menor][c] > primeiro.primNome[b][c])
                    {
                         menor = b;
                    }
                    b++;
                }

                if(menor != a)
                {
                        strcpy(primeiro.aux1, primeiro.primNome[menor]);
                        strcpy(primeiro.primNome[menor], primeiro.primNome[a]);
                        strcpy(primeiro.primNome[a], primeiro.aux1);

                        strcpy(primeiro.aux2, primeiro.sobrenome[menor]);
                        strcpy(primeiro.sobrenome[menor], primeiro.sobrenome[a]);
                        strcpy(primeiro.sobrenome[a], primeiro.aux2);
                }

            a++;
        }

        a=0;
        while (a < N)
    {
        printf("%s %s\n", primeiro.primNome[a],primeiro.sobrenome[a]);
        a++;
        }

    return 0;
}
