#include<iostream>
using namespace std;

int main(){
	string food="pizza";
	string* ptr=&food;
	
	cout<<food<<" "<<&food<<" "<<&ptr<<" "<<*ptr<<" "<<ptr<<endl;
	*ptr=" Dev 111"; //modify pointer value
	cout<<food<<" "<<&food<<" "<<&ptr<<" "<<*ptr<<" "<<ptr;
	return 0;
}
