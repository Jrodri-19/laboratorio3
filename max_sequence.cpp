#include <iostream>
#include <limits>
using namespace std;
int sequency(int *p, int size_){
	int *i=p;
	int *e=p+size_-1;
	int count{0};
	int prev = numeric_limits<int>::min();
	while((i<e)&&((*i>=prev)||(*e>=prev))){
		if((*i>=prev)&&(*e>=prev)){
			if(*i>*e){
				prev=*e;
				e--;
			}else{
				prev=*i;
				i++;
			}
			count++;
		}
		else{
			if(*i>=prev){
				prev=*i;
				i++;
			}
			if(*e>=prev){
				prev=*e;
				e--;
			}
			count++;
		}
	}
	
	return 	count;
}
int main(int argc, char *argv[]) {
	int arr[]={4,3,1,5,2};//tiempo de compilacion final
	cout <<sequency(arr, 5);
	
	return 0;
}

