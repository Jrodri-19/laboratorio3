#include <iostream>
using namespace std;
//busqueda binaria
int* search_bin(int *p,int size,int v){
	int *i=p;
	int *e=p+size-1;
	int *m=nullptr;
	while(i<=e){
		m= i+(e-i)/2;
		if(*m==v){
			return m;
		}
		if(*m<v){
			i=m+1;
		}
		if(*m>v){
			e=m-1;
		}
	}
	return nullptr;
}
int main() {
	int arr[]={2,4,5,20,24,96};
	int* resultado=search_bin(arr, 6,6);
	(resultado != nullptr)? cout <<"\npos -> "<< resultado - arr :cout<<"no encontrado";
	resultado=search_bin(arr, 6,20);
	(resultado != nullptr)? cout <<"\npos -> "<< resultado - arr :cout<<"no encontrado";
	return 0;
}
