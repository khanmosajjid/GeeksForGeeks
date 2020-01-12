#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int A;
	
	cin>>A;
	long long int b[A];
     
     for(int i=1;i<=A;i++){
     	b[i]=0;
     }
	for(int i=1;i<=A;i++){
		for(int j=i;j<=A;j++){
			for(int k=i;k<=j;k++){
				int h=k;
				b[h]=b[h]+1;
				 
			}

		}
	}
	
	  for(int i=1;i<=A;i++){
	  	
	  	cout<<b[i]<<" ";
	  }
	return 0;
}