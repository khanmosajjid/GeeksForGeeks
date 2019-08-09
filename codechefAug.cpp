#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> a,b;
	stack <int> s1;
	int t,n,A,B,sum,max=0;
	
	cin>>t;
	
	for(int i=0;i<t;i++){
		max=0;
	    s1.push(max);
	    sum=0;
	    cin>>n;
	    for(int j=0;j<n;j++){
	        cin>>A;
	        a.push_back(A);
	    }
	    for(int k=0;k<n;k++){
	        cin>>B;
	        b.push_back(B);
	    }
	    
	    for(int j=0;j<n;j++){
	        sum=(a[j]*20)-(b[j]*10);
	       
	        if(sum>max){
	            s1.pop();
	            s1.push(sum);
	            
	            max=sum;
	        }
	    } 
	    a.clear();
	    b.clear();
	       if(s1.top()<0){
	       	cout<<0<<endl;
	       }
	       else{
	       	 cout<<s1.top()<<endl;
	       }
	       while(!s1.empty()){
	       s1.pop();
	   }
	  
	   }
	
	
	return 0;
}
