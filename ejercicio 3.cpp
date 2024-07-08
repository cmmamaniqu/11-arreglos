#include <iostream>
using namespace std;

int main(){
	int i;
	float temp[7],tmax=0,tmin=0,s=0,prom,n;
	
	for(i=0;i<7;i++){
		cout<<"La temperatura del dia"<<i+1<<" : "; cin>>temp[i];
	}
	
	tmax=temp[0];
	for(i=0;i<7;i++)
	   if(temp[i]>tmax)
	   tmax=temp[i];
    
	tmin=temp[0];
	for(i=0;i<7;i++)
	   if(temp[i]<tmin)
	   tmin=temp[i];
	   
    for(i=0;i<7;i++)
	s=s+temp[i];
	prom=s/7;
	
	cout<<"\nIngrese una temperatura: "; cin>>n;
    
    if(n==tmax){
    	cout<<"\nLa temperatura ingresada coincide con la tmax: ";
	}else{
		cout<<"\nLa temperatura ingresada no coincide con la tmax: ";
	}

    cout<<"\nLa temperatura media de cada dia es: "<<prom;
	cout<<"\nLa temperatura maxima fue: "<<tmax;
	cout<<"\nLa temperatura minima fue: "<<tmin;

	return 0;
}
