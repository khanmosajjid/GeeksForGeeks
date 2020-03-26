#include <iostream>
using namespace std;


void coinChange(int n,int coins[],int t){
    
    for(int i=t-1;i>=0;i--){
        if(n-coins[i]>=0){
            cout<<coins[i]<<" ";
             n=n-coins[i];
            i=i+1;
           
        }
    }
  
     
}

int main() {
	int t;
	cin>>t;
	
	int coins[]={1, 2, 5, 10, 20, 50,100, 200, 500, 2000};
	
	  while(t--){
	      int n;
	      cin>>n;
	      coinChange(n,coins,10);
	      cout<<endl;
	      
	  }
	return 0;
}