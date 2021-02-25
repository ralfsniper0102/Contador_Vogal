#include<stdio.h>
#include<string.h>

int main()
{
    int x, tam, ca, ce, ci, co, cu;
    int chave;
    char nome[30];
    ca = ce = ci = co = cu = 0;

  do
  {
    //chave=0;
    //x=0;
    //tam=0;
    //nome[0]="\o";

    printf("Digite uma frase: ");
    scanf(" %s",&nome);
    tam = strlen(nome);
    
    for(x=0; x<= tam-1; x++)
    {
        if(nome[x]== 'a' || nome[x]=='A')
        {
            ca++;
        }
        else
        {
            if(nome[x]== 'e' || nome[x]=='E')
            {
                ce++;
            }
            else
            {
                if(nome[x]== 'i' || nome[x]=='I')
                {
                    ci++;
                }    
                else
                {    
                    if(nome[x]== 'o' || nome[x]=='O')
                    {
                        co++;
                    }
                    else
                    {
                        if(nome[x]== 'u' || nome[x]=='U')
                        {
                            cu++;
                        }
                    }
                }
                        
            }
        }
    }
    printf("%d - a, ",ca);
    printf("%d - e, ",ce);
    printf("%d - i, ",ci);
    printf("%d - o, ",co);
    printf("%d - u, ",cu);
    printf("\n\n");
    printf("deseja verificar mais uma palavra?('0' = nao / '1' = sim)");
    scanf(" %d",&chave);
    
  } while (chave==1); 
  return 0;
}