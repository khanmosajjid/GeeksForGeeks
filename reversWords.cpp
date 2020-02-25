#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string line;
	    cin>>line;
	   
	   vector<string> tokens;
	   stringstream check1(line);
	   string intermediate;
	   
	   while(getline(check1, intermediate, '.')){
	       tokens.push_back(intermediate);
	       tokens.push_back(".");
	   }
	   
	   for(int i=tokens.size()-2;i>=0;i--){
	       cout<<tokens[i];
	       //cout<<i;
	   }
	   cout<<endl;
	}
	return 0;
}