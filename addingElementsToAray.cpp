#include<bits/stdc++.h>
using namespace std;

vector<int> solve (int A0, vector<long long> X, int N, int Q) {

    vector<int> a,b;
    b.push_back(A0);
    for(int i=1;i<N;i++){
        if(i%2==0){
            int x=(2*b[i-1])+3*b[i-2];
            b.push_back(x);
        }
        else{
            int x=3*b[i-1];
            if(x%2==0){
                b.push_back(x+1);
            }
            else
            b.push_back(x);
        }
    }
    // for(int i=0;i<N;i++){
    //     cout<<b[i]<<" ";
    // }
         int c;
          cout<<X.size()<<endl;
          for(int i=0;i<X.size();i++){
              int h=0;
              if(X[i]==b[h]){
                  a.push_back(1);
              }
              else if(X[i]>b[h]&&X[i]<b[h]){
                  a.push_back(0);
              }
               
              else{
                  int l=0;
                  int e=N-1;
                  while(l<=e){
                        
                      if(b[l]+b[e]>X[i]){
                          c=0;
                          e--;
                      }
                      if(b[l]+b[e]<X[i]){
                          c=0;
                          l++;
                      }
                      if(b[l]+b[e]==X[i]){
                          a.push_back(1);
                          c=1;
                          break;
                      }
                  }
              }
              if(c==0){
                  a.push_back(0);
              }
          }
    
    
   
    return a;
}


int main() 
{   ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {   int N;
        cin >> N;
        int A0;
        cin >> A0;
        int Q;
        cin >> Q;
        vector<long long> X(Q);
        for(int i_X=0; i_X<Q; i_X++)
        {
        	cin >> X[i_X];
        }
        
        vector<int> ans = solve(A0, X, N, Q);
        for(int i=0;i<ans.size();i++)
        {  if(ans[i]) cout<<"true"<<endl ; 
           else cout<<"false"<<endl ;     
        }
        
    }
}