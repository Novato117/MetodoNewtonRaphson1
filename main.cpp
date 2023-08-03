#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
//funciones declaradas
#define f(x) x - cos(x)
#define g(x) 1 + sin(x)
using namespace std;
int main()
{
float x0, x1, f0, f1, g0, e;
int iteracion = 0, N;
int a;
do{
cout<< setprecision(10)<< fixed;
cout<<"para \n f(Xo)=Xo-cos(Xo) \n f`(Xo)=1+sen(Xo)";
cout<<"\n Ingrese la condicion incial Xo: ";
cin>>x0;
cout<<"error: ";
cin>>e;
cout<<" iteraciones maximas: ";
cin>>N;
/* metodo newton*/
//cout<< endl<<"*********************"<< endl;
cout<<"Metodo Newton Raphson"<< endl;
cout<<"*********************"<< endl;
do
{
g0 = g(x0);
f0 = f(x0);
if(g0 == 0.0)
{
cout<<"Error.";
exit(0);
}
x1 = x0 - f0/g0;
cout<<"Iteracion : "<< iteracion<<":\t x = "<< setw(10)<< x1<<" y f(x) = "<< setw(15)<< f(x1)<< endl;

x0 = x1;
iteracion = iteracion+1;
if(iteracion > N)
{
cout<<"error.";
exit(0);
}
f1 = f(x1);
}while(iteracion<N);
cout<< endl<<"raiz es: "<< x1;
cout<<"\n ingrese 1 para reiniciar : "<<endl,
cin>>a;
if(a==1){
    system("cls");
    iteracion = 0;
}
}while(a==1);
return 0;
}
