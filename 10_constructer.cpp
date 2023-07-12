#include<iostream>
using namespace std;

class myclass{
	public:
		string brand;
		int model;
		 myclass(string b,int c){         //constructer
		brand=b;
		model=c;
		}
};
int main(){
//	myclass a; // auto call the constructer method
    myclass  a1("audi",100);
	myclass a2("bmw",200);
    cout<<a1.brand<<a1.model<<endl;
    cout<<a2.brand<<a2.model<<endl;
	return 0;
}
