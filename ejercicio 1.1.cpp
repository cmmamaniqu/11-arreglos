#include <iostream>
using namespace std;
int main(){
	int n,s;
	cout<<"Cantidad de numeros a leer: "; cin>>n; 
    int A[n];
	float c,pc;

	c=0; //contador de números ceros
	s=0; 

	for(int i= 0; i<n; i++){
	    cin>>A[i];
		s=s+A[i];

		if(A[i]==0){
			c++;
		}
		pc=(c/n)*100;
    }
	
	cout<<"\nLa suma de los numeros es: "<<s;
	cout<<"\nEl porcentaje de los numeros cero es: "<<pc<<" %";
	
	return 0;
}
