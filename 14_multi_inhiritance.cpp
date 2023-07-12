//Multilevel Inheritance
//A class can also be derived from one class, which is already derived from another class.
//In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass).
#include<iostream>
using namespace std;
class classA{
	public:
		void myfun(){
			cout<<"some content base class"<<endl;
		}
};
class mychild{
	public:
		void myfun1(){
			cout<<"my child content";
		}
};
class grandchild:public mychild,public classA{
};
int main(){
	grandchild child;
	child.myfun();
	child.myfun1();
	return 0;
}
