
 #include<bits/stdc++.h>
using namespace std;


void addFraction(int num1, int den1, int num2,
                 int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    }
}

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
void addFraction(int num1, int den1, int num2,int den2){
    if(den1==den2){
        int a=num1+num2;
        cout<<a<<"/"<<den1;
        return;
    }
    else{
        int b=gcd(den1,den2);
        den1=den1/b;
        den2=den2/b;
        int a=num1*den2;
        int c=num2*den1;
        den1=den1*den2;
        cout<<a+c<<"/"<<den1;
        return;
    }
 }