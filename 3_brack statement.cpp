#include<iostream>
using namespace std;
int main(){
	
  for(int i=1;i<=3;i++){        
            for(int j=1;j<=3;j++){        
                if(i==2&&j==2){  
				cout<<"both are same"<<endl;      
                    break;        
                        }        
                    cout<<i<<" "<<j<<"\n";             
                    }        
          } 
	return 0;
}
