#include<bits/stdc++.h>
using namespace std;

void lastDigit(int a,int b){
	int number=1,c[10];
     int id=a%10;
     c[0]=c[1]=c[5]=c[6]=1;
     c[2]=c[3]=c[7]=c[8]=4;
     c[4]=c[9]=2;
     b=b%c[id];
     if(b==0){
     	b=c[id];
     }
     int p=pow(id,b);
     cout<<p%10<<endl;

}
int main(){
	int a,b;
	;
	cin>>a>>b;
	lastDigit(a,b);
	return 0;

}
