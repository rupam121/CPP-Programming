#include<iostream>
using namespace std;

int main(){
	try{
		int age=17;
		if(age>18){
			cout<<"accept grant";
		}
		else{
			throw 505;
		}
	}
	catch(...){ //any type exception can handel
		cout<<"access denied";
	}
	return 0;
}
