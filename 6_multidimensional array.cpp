#include<iostream>
using namespace std;
int main(){
	int test[3][3]= {{2, 5, 5},  
        {4, 0, 3},  
        {9, 1, 8}};  //declaration of 2D array   
     
    //traversal    
    cout<<"2D array :"<<endl;
    for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout<<" "<< test[i][j]<<" ";  
        }  
        cout<<"\n";   
    } 
	return 0;
}
