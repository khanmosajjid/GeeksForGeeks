#include <bits/stdc++.h>
using namespace std;
int isValid(char *);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		char s[10000];
		cin>>s;
		cout<<isValid(s)<<endl;
	}
	return 0;
}
}


bool check(string x){
    int l=0,i=0,n=0;
    
    // while(x[i]!='\0'){
    //     l++;
    //     i++;
    // }
    l=x.length();
  
    
    if(l>=4){
        return false;
    }
    
    if(l!=1&&x[0]=='0'){
        return false;
    }
    if(x==""){
        return false;
    }
    int s=x.length();
    for(int j=0;j<l;j++){
        if(x[j]<48||x[j]>57){
            return false;
        }
        n=n+(x[j]-'0')*pow(10,s-1);
        s--;
    }
    if(n>=0&&n<=255){
        return true;
    }
    return false;
    
}


int isValid(char *ip)
{
      string s=""; 
        int count=0,d=0;
        int i=0;
        while(ip[i]!='\0'){
            count++;
            i++;
        }
        
        int j=0;
        for(int i=0;i<=count;i++){
           
           if(ip[i]=='.'){
              d++;
           }
           if(ip[i]!='.'&&ip[i]!='\0'){
               s=s+ip[i];
           }
           if(ip[i]=='.'||ip[i]=='\0'){
               bool l=check(s);
               s.clear();
               if(l==0){
                   return 0;
               }
           }
            
        }
        if(d!=3){
            return 0;
        }
      return 1;
}      