#include <iostream>
using namespace std;

int isPower(long long int x,long long int y){
    long long int a=y;
    long long int t=1;
    if(y==1){
        return 1;
    }
    while(a--){
        t=t*x;
        if(t==y){
            return 1;
        }
    }
    return 0;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	   long long int x,y;
	   cin>>x>>y;
	  cout<<isPower(x,y)<<endl;
	}
	return 0;
}