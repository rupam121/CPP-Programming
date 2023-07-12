#include<iostream>
using namespace std;
//class method:: inside class or outside class method is created;
class myclass{
	public:
		void method1(){ //inner method
			cout << "hello World"<<endl;
		}
		void method2();
};
void myclass::method2(){ //outer method
			cout<<"hello dev"<<endl;
}
int main(){
	myclass a;
	a.method1();
	a.method2();
	return 0;
}
