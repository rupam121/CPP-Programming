#include<iostream>
#include<cmath>
using namespace std;
int funplus(int x,int y){
	return x+y;
}
int funplus(int x){
	return pow(x,x);
}
double funplus(double x,double y){
	return x+y;
}
int main(){
	int num1=funplus(2,4);
	double num2=funplus(3.3,4.4);
	int xx=funplus(5);
	cout<<num1<<" "<<num2<<" "<<xx;
	return 0;
}
