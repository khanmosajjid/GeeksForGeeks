#include<bits/stdc++.h>
using namespace std;

//pattern problem solution
//for n=3
//pattern is 
//10203010011012
//**4050809
//****607

int main(){
	int i,n,j=0;
	cin>>n;
	int r=n,k=n;
	int x=1;
	for(i=0;i<k;i++){
		 j=1;

		int p=i;
		while(p!=0){
		    cout<<"**";
			p--;
		}

		while(j<=n){
			cout<<x<<"0";
			x++;
			j++;
		}
		

		int t=x+n*(n-1);
		 j=1;
	

		while(j<n){
			cout<<t<<"0";
			t++;
			j++;
		}
		cout<<t;
		n--;
		t=0;
		cout<<""<<endl;

	}
	return 0;
	
}