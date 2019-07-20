#include<bits/stdc++.h> 
using namespace std;

int main() {
	
  string s;
  char c[1000];
  int n,k;

  cin>>n;

  for(int i=0;i<n;i++){
  	cin>>s;
  	int size=s.size();
  	k=0;
  
  	for(int j=0;j<size;j++){
  		
  		if(s[j]=='b'){
  		   continue;
  		}

  		else if(s[j]=='a' && s[j+1]=='c'){
  		
  			j++;
         }
         
  		else{
  			c[k]=s[j];
  		    k++;
  	}

  	}
  
  	 for(int t=0;t<k;t++){
    	cout<<c[t];
    }
    cout<<""<<endl;


    }
    return 0;
}
