#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n);

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<maxLen(a,n)<<endl;
		
	}
	return 0;
}


int maxLen(int arr[], int n){
    
    int length=0;
    for(int i=0;i<n;i++){
      if(arr[i]==0){
          arr[i]=-1;
      }
    }
    int maxLength=0;
    for(int i=0;i<n;i++){
        int cs=0;
        for(int j=i;j<n;j++){
            cs+=arr[j];
            if(cs==0){
                maxLength=max(maxLength,j-i+1);
            }
        }
    }
    
    return maxLength;
   
     
}