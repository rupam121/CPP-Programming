
//def: The C++ goto statement is also known as jump statement. It is used to transfer 
//control to the other part of the program. It unconditionally jumps to the specified label.

#include<iostream>
using namespace std;
int main(){
	ineligible:
		cout<<"You are not eligible 4 vote"<<endl;
	cout<<"Enter ur age"<<endl;
	int age;
	cin>>age;
	if(age<18){goto ineligible;}
	else{cout<<"You are eligible for vote"<<endl;}
	return 0;
}
