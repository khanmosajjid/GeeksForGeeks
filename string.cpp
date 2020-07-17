// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
	
// 	while(t--){
// 	    string s1,s2;
	    
// 	    cin>>s1;
// 	    cin>>s2;
// 	    int n=s2.length();
// 	    cout<<n<<endl;
// 	    cout<<s1.length()<<" is the length of 1 string "<<endl;
// 	    int j=0;
// 	    int i=0;
// 	    int count=0;
// 	    while(1){

// 	        if(s2[i]==s1[j]){
// 	            count++;
// 	            cout<<count<<" match";
	            
// 	        }
	      
// 	        if(count==n){
// 	            cout<<" count at final "<<endl;
// 	            break;
// 	        }
	        

// 	         if(j==s1.length()){
// 	            break;
// 	        }
// 	         if(s2[i]!=s1[j]){
// 	            i=0;
// 	        }else{
// 	        	i++;
// 	        }
// 	        j++;
// 	        cout<<j<<endl;
// 	    }
// 	    if(count==n){
// 	        cout<<"found"<<endl;
// 	    }else{
// 	        cout<<"not found"<<endl;
// 	    }
// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<"#";
    }
    cout<<endl;
    for(int i=1;i<n-1;i++){
        cout<<"*";
        for(int j=1;j<n-1;j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
        
    }
    for(int i=0;i<n;i++){
        cout<<"#";
    }
    return 0;
}