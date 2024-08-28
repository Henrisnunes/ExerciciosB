#include<iostream>
using namespace std;

double calcularAreaRetangulo(double a,double b){
    return a*b;
}
int maint(){
    double area,comprimento,largura;
    cin>>comprimento>>largura;
    area=calcularAreaRetangulo(comprimento,largura);
    cout<<area;
    return 0;
}