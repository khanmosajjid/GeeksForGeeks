#include<bits/stdc++.h>
using namespace std;

void permutation(string s,int start,int end){
	if(start==end){
		cout<<s<<" ";
		return;
	}else{
		for(int i=start;i<end;i++){
			swap(s[start],s[i]);
			permutation(s,start+1,end);
			swap(s[start],s[i]);
		}
	}
}

int main(){
	string s;
	cin>>s;
	int n=s.length();
	cout<<n<<endl;
	permutation(s,0,n);
	return 0;

}