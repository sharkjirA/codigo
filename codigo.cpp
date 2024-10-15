#include <bits/stdc++.h>
using namespace std;
int main() {
    
  double a, b, c, x1, x2, discriminante;
  cout<<"Ingrese el valor de A: ";
  cin>>a;
  cout<<"Ingrese el valor de B: ";
  cin>>b;
  cout<<"Ingrese el valor de C: ";
  cin>>c;
  discriminante=b*b-4*a*c;
  if (discriminante>=0) 
  {
    x1=(-b+sqrt(discriminante))/(2*a);    
    x2=(-b-sqrt(discriminante))/(2 * a);    
    cout<<"Las raíces de la ecuación cuadrática son:"<<endl;
    cout<<"x1= "<<x1<<" "; 
    cout<<"x2 = " <<x2<<" "; 
  } 
  else 
  {
    cout<<"La ecuación cuadrática no tiene raíces reales."<<endl;
  }

    return 0;
}