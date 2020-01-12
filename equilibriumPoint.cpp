#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector<int>arr;

		for(int j=0;j<n;j++){
			int x;
			cin>>x;
			arr.push_back(x);
		}
		if(n==1){
			cout<<"1"<<endl;
			
         }
         int s=0;
         int end=n-1;
         int sum1=0;
         int sum2=0;
         if(n!=1){
         while(s<end){
             
         	sum1=sum1+arr[s];
         	sum2=sum2+arr[end];
         	
         	cout<<"sum 1 is "<<sum1<<endl;
         	cout<<" sum 2 is "<<sum2<<endl;
         	if(sum1==sum2){
         		cout<<s+2<<endl;
         		break;
         	}
         	if(sum1<sum2){
               s++;
         	}
         	if(sum1>sum2){
                end--;
         	}

         }
         
         cout<<"-1"<<endl;
        }
        

	}
	return 0;
}