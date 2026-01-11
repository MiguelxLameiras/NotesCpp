#include <stdio.h>

int main(){
    int a = 1;
    int b =  a++ + ++a;
    /*
    a++  -> Usa o valor atual (1) e depois incrementa, ou seja, neste ponto a = 2 e valor usado na soma = 1
    ++a  -> Incrementa primeiro (a passa a 3) e depois usa o valor, ou seja, valor usado na soma = 3

    Soma final (observada neste compilador): 1 + 3 = 4
    b recebe 4

    Problema:

    Nesta expressão 'a' é modificada duas vezes sem um ponto de sequência (sequence point)
    Entre o a++ e o ++a não há garantia da ordem de avaliação,
    portanto o comportamento é indefinido segundo o padrão C.

    Consequência:
    - O compilador pode gerar valores diferentes em outra máquina, compilador ou flag de otimização
    - Não se deve confiar no resultado observado
*/

    printf("%d", b);

    return 0;

}