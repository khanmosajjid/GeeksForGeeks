#include <bits/stdc++.h>
using namespace std;
void convertToRoman(int ) ;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		
	convertToRoman(N);
	cout<<endl;
		
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*you are required to complete 
this function*/
void convertToRoman(int n) 
{
  string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
  string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
  string hundred[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
  string thousand[] = {"","M","MM","MMM","MMMM"};
  
  string ans="";
  ans=ans+thousand[n/1000];
  n=n%1000;
  ans=ans+hundred[n/100];
  n=n%100;
  ans=ans+tens[n/10];
  n=n%10;
  ans=ans+ones[n];
  cout<<ans;


  
  
    
}