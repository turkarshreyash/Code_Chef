#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t,l,i;
	int num;
	cin>>t;
	while(t--){
		cin>>num;
		i = log10(num);
		l = num/pow(10,i)  + num%10;
		cout<<l<<endl;
	}
}
