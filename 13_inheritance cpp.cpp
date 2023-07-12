//In C++, it is possible to inherit attributes and methods from one class to another.
//two categories:
//
//    derived class (child) - the class that inherits from another class
//    base class (parent) - the class being inherited from
//: symbol is use to inherete
#include<iostream>
using namespace std;

class vehicle{
	public:
		string brand = "Ford";
};
class car : public vehicle{
	public :
		string model="mustang";
};
int main(){
    car a;
	cout<<a.brand<<" "<<a.model;
	return 0;
}
