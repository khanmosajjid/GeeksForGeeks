#include<bits/stdc++.h>
using namespace std;
 

int main() {
   long long int t,n,sum,a[10000000];
   
   cin>>t;
   for(long long int i=0;i<t;i++){
       cin>>n>>sum;
       for( long long int j=0;j<n;j++){
           cin>>a[j];
       }
      
       long long int header=0,flag=0,wsum=0,k=0;
         for(k=0;k<n;k++){
             wsum=wsum+a[k];
              while(wsum>sum){
                   wsum=wsum-a[header];
                     header++;
                }
                
                if(wsum==sum){
                    flag=1;
                     cout<<header+1<<" "<<k+1<<endl;
                      
                      break;
                 }
      
         }
                 if(flag==0){
                    cout<<"-1"<<endl;
                 } 
      
      }
  return 0;
}