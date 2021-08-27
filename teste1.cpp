#include <stdio.h>
/* 
Aula de Algoritmos e Programação Estruturada 
Anhanguera - DevOps
Professora : Vanessa Matias Leite
Ta3 - Teleaula 3
Explicação sobre : Escopo
*/
int testar()
{
    int x = 10;
    return x;
}
int main()
{
    int x = 20;
    printf("\n Valor de x na função main() = %d", x);
    printf("\n Valor de x na função testar() = %d", testar());
    printf("\n");

    return 0;

}