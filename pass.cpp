#include<bits/stdc++.h>
using namespace std;

void isMatched(string p,string s){

	   int t=0;
	   
		for(int j=0;j<s.length();j++){

			if(p[t]==s[j]){
				t++;
				continue;
			}

			if(p[t+1]==s[j]){
				cout<<"FAIL"<<endl;
				return;
			}

			if(t==p.length()){
				cout<<"PASS"<<endl;
				return;
			}

		}
		cout<<"FAIL"<<endl;
	
}

int main(){
	string pass,s;
	cin>>pass;
	cin>>s;
	isMatched(pass,s);
	return 0;


}