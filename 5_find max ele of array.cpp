#include<iostream>
using namespace std;
void findmax(int arr[6]);
int main(){
	int arr1[6]={1,3,4,5,6,22};
	findmax(arr1);
	return 0;
}
void  findmax(int arr[6]){
	int max=arr[0];
	for(int i=0;i<6;i++){
		if(max<arr[i]){ max=arr[i];}
	}
	cout<<"max value of array: "<<max<<endl;
}
