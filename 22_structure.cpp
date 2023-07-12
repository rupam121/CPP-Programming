#include<iostream>
using namespace std;
int main(){
	struct{
		int mynum;       //member
		string mystring; //member
	}myvar;              //struct variable
	struct mystruct{     //name of structure
		int num;
		string dev;
	};
	//assining
	myvar.mynum=30;
	myvar.mystring="hi dev";
	
	mystruct var;
	var.num=33;
	var.dev="A Developer";
	cout<<myvar;
	return 0;
}
