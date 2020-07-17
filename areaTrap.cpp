#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	double t[10000],v[10000];

	for(double i=0;i<n;i++){
		cin>>t[i]>>v[i];
     }
     double area=0;
     for(double i=0;i<n;i++){
     	 double x=(v[i]+v[i+1])/2;
     	 double y=(t[i+1]-t[i])/1000;
       area=area+x+y;
     }
     cout<<area<<endl;
}