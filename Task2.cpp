#include<iostream>
using namespace std;

int main(){
	int arr[5]= {30,23,43,121,34};
    int *ptr;
    ptr = arr;
	int sum =0;
	int i =0 ;
    for (i =0; i <5; i++){
        sum = sum +*ptr;
        ptr ++;

    }
    cout << sum<<endl;
	return 0;
}