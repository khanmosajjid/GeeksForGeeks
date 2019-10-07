#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	vector<char>a;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		int count=0;
		for(int j=0;j<n;j++){
			char x;
			cin>>x;
			a.push_back(x);
		}

		for(int j=0;j<n-1;j++){

              if(a[k]=='1'&&a[k]==a[j]){
               		
               		count++;
               	}
               }
		int s=count*(count-1);
		cout<<s/2<<endl;
		a.clear();
	}
	return 0;
}