
#include<bits/stdc++.h>
using namespace std;

void permut(string s,int l,int r){
	if(l==r){
		cout<<s<<" ";
	}
	for(int i=l;i<=r;i++){
		swap(s[l],s[i]);//recursion

		permut(s,l+1,r);

		swap(s[i],s[l]);//backtracking
	}
     // cout<<s<<endl;
}

int main(){
	string s="ABC";
   permut(s,0,2);
   return 0;
}