#include <iostream>
using namespace std;
void print_matriz(int **m, int f,int c){
	int **p= m;
	int *q=nullptr;
	while(p<m+f){
		q=*p;
		while(q<*p+c){
			cout<<*(q++)<<"\t";
		}
		cout<<"\n";
		p++;
	}
}
int main() {
	int matriz[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int filas=4;const int columnas=3;
	int **arr= new int *[filas];
	int **arr_ptr = arr;
	int (*mat_ptr)[columnas] = matriz;
	while (arr_ptr < arr + filas) { 
		*(arr_ptr++) = *(mat_ptr++); 
	}
	print_matriz(arr, filas, columnas);
	return 0;
}
	
	
