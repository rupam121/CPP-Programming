//Access specifiers define how the members (attributes and methods) of a class can be accessed.
#include<iostream>
using namespace std;

class my{
	public:
		int x;
	private:
		int y;
};
int main(){
	my myobj;
	myobj.x=10; //public allowed
	myobj.y=20; //private not allowed
	
	return 0;
}
