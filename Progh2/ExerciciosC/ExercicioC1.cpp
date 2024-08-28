//1a) linha 4 ira ser o numero 5 que é o valor de i
//1b) linha 5 ira ser o endereço do i que sair
//2a) linha 4 5 e 6 ira aparecer o endereço da memoria das variaveis
//3a) linha 6 ira aparecer 55 pois é o valor onde o ponteiro esta ligado na 7 aparece o endereço de num que o ponteiro esta ligado e na 8 aparece o valor de num que é 55
//3b) Qual a instrução correta para a declaração de um ponteiro de inteiros? e.
//3b) Qual instrução atribui o valor para a uma variável do tipo ponteiro? c.
//3b) Há outras instruções válidas? Quais? O que elas fazem? b. ira fazer a variavel i ter o valor de onde o ponteiro esta apontando
//3c) Qual afirmativa é falsa? 5.pti tem valor 10.
//3d)  Supondo duas variáveis de ponto flutuante (numero1 e numero2), e que a primeira tenha sido inicializada com o valor 7.3, escreva instruções que executem as seguintes ações: 
//  1. Declare a variável fP como um ponteiro para uma variável do tipo float.
//  2. Atribua o endereço da variável numero1 à variável de ponteiro fP. 
//  3. Mostre o valor do objeto apontado por fP.
//  4. Atribua o valor do objeto apontado por fP à variável numero2.
//  5. Mostre o valor de numero2.
//  6. Mostre o endereço de numero1. (Se usar printf, use o formato %p.)
//  7. Mostre o endereço armazenado em fP. Use o especificador de formtato %p. 
#include<iostream>
using namespace std;
int main(){
    float numero1=7.3,numero2,*fP;
    fP=&numero1;
    cout<<*fP<<endl;
    numero2=*fP;
    cout<<numero2<<endl;
    cout<<&numero1<<endl;
    cout<<fP<<endl;
}
//  O valor impresso é o mesmo que o endereço de numero1? Sim.