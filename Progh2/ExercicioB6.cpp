#include<iostream>
#include <ctime>
#include <experimental/random>
using namespace std;

int gerarNumeroAleatorio(){
    unsigned seed = time(0);
    srand(seed);
    int valor = rand()%100;
    return valor;
}
int main(){
    int a;
    a=gerarNumeroAleatorio();
    cout<<a;
}
