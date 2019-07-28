// #include<bits/stdc++.h>
// using namespace std;

// void rotateArray(int n,int d){

// }

// int main(){
// 	int t,n,d;
// 	cin>>t;
	
// 	for(int i=0;i<t;i++){
//      cin>>n;
//      cin>>d;

// 	}
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,k,n,t,num,d;
	int a[100000],c[100000];

	cin>>t;
	for(i=1;i<=t;i++){
	  
	    cin>>n;
	    
	    cin>>d;
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	       }
	    
	    // for(int j=0;j<d;j++){
	        
	    //     c[j]=a[j];
	    // }
	    // for(int j=0;j<n-d;j++){
	    //     a[j]=a[j+d];
	    // }
	    // for(int j=0;j<d;j++){
	    //     a[n-d+j]=c[j];
	    // }
	    
	   for(int j=0;j<n;j++){
	        cout<<a[(j+d)%n]<<endl;
	   }
	    cout<<""<<endl;
	}
	
	return 0;
}