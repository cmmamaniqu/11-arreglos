#include <iostream>
using namespace std;

int main(){
   int n;
   cout<<"\nCantidad de elementos a leer: "; cin>>n;
   int numeros[n],p=0,m=0;
   int par[n];
   int impar[n];
   
    for(int i=0;i<n;i++){
   	    cin>>numeros[i];
    }
   	
   	for(int i=0;i<n;i++){
   	    if(numeros[i]%2==0){
		par[p]=numeros[i];
		p++;
		
     	} else {

        impar[m]=numeros[i];
        m++;
	}
   }
   cout<<"\nNumeros pares"<<endl;
   for(int i=0;i<p;i++){
   	cout<<par[i];
    cout<<", ";
    }
   
   cout<<"\nNumeros impares"<<endl;
   for(int i=0;i<m;i++){
   	cout<<impar[i];
    cout<<", ";
    }

   return 0;
}
   
   
   
   



