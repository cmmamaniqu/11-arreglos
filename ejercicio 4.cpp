#include <iostream>
using namespace std;

void TamyLle(int num,int tam,int Uni[]){
	for(int i=0;i<tam;i++){
		Uni[i]=num*(i+1);
	}
}

int main(){
	int tam,num;
	
	cout<<"TamanoyLlenado de un arreglo: "<<endl;
	cout<<"Ingrese el tamano: ";cin>>tam;
	cout<<"Ingrese el numero: ";cin>>num;
	
	int Uni[tam];
	
	TamyLle(num,tam,Uni);
	
	cout<<"\nArreglo nuevo:";
	for(int i=0;i<tam;i++){
		cout<<Uni[i]<<",";
	}
	return 0;
}
