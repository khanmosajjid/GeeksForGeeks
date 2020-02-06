#include<bits/stdc++.h>
using namespace std;


int main(){
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++){
		long long int n,result=0;
		cin>>n;
		vector<long long int>arr;

		for(long long int j=0;j<n;j++){
			long long int  x;
			cin>>x;
			arr.push_back(x);
		}
		if(n==1){
			cout<<"1"<<endl;
			result=1;
		    
		}
         long long int s=0;
         long long int end=n-1;
         long long int sum1[n];
         long long int sum2[n];
         
          if(n!=1){
              sum1[0]=arr[0];
              sum2[0]=arr[n-1];
            for(int i=1;i<n;i++){
                sum1[i]=arr[i]+sum1[i-1];
            }
            for(int i=1;i<n;i++){
                sum2[i]=sum2[i-1]+arr [n-i-1];
            }
           
            
            for(long long int i=0;i<n;i++){
                if(sum1[i]==sum2[n-i-1]){
                    cout<<i+1<<endl;
                    result=1;
                    break;
                }
            }
        }
        if(result!=1){
            cout<<"-1"<<endl;
            
        }

	}
	return 0;
}