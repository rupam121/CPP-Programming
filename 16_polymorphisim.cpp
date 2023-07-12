//Polymorphism
#include<iostream>
using namespace std;
class animal{
	public:
		void animalsound(){
			cout<<"animal sound"<<endl;
		}
};
class pig:public animal{
	public:
		void animalsound(){
			cout<<"pig sound"<<endl;
		}
};
class dog: public animal{
	public:
		void animalsound(){
			cout<<"dog sound"<<endl;
		}
};
int main(){
	animal a;
	pig b;
	dog c;
	a.animalsound();
	b.animalsound();
	c.animalsound();
	return 0;
}
