#include <iostream>
using namespace std;
void print_matriz(int **m, int f,int c){
	int **p= m;
	int *q=nullptr;
	while(p<m+f){
		q=*p;
		while(q<*p+c){
			cout<<*q<<"\t";
			q++;
		}
		cout<<"\n";
		p++;
	}
}
int main() {
	int matriz[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int **arr= new int *[4];
	for(int i=0;i<4;i++){
		arr[i]=matriz[i];
	}
	print_matriz(arr, 4, 3);
	return 0;
}

