#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N, num, conta=0, sumPositivo=0, sumTotal=0;
    int culo;
    int culo2;
    int culo3;

    cout<< "Escriba la cantidad de numeros a leer: "; cin>>N;
    for(int x=0; x<N; x++){
cout<<"INGRESE EL VALOR ENTERO EN LA POSICION "<<x+1<<" "; cin>>num;
if(num>0){
    conta++;
    sumPositivo += num;
}

   sumTotal += num;
    }
    float promPositivo = static_cast<float>(sumPositivo)/conta; 
    float promTotal = static_cast<float>(sumTotal)/N; 
cout<<"Estos es la cantidad de numeros mayores a 0: "<<conta<<endl;
cout<<"El promedio de los numeros positivos es : "<<promPositivo<<endl;
cout<<"El promedio del total de numeros : "<<promTotal<<endl;


    return 0;
}

