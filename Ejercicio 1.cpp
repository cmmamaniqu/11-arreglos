#include <iostream>
using namespace std;

int main(){
	int A[20],n,s; cin>>n;
	float c;
	c=0;
	s=0;
	
	float pc;
	for(int i= 0; i<n; i++){
		if(A[i]==0){
			c++;
		}
		
		cin>>A[i];
		s=s+A[i];
		
		pc=(c/n)*100;
	

}
	
	cout<<"\nLa suma de los numeros es: "<<s;
	cout<<"\nEl porcentaje de los numeros cero es: "<<pc<<" %";
	
	return 0;
	
}