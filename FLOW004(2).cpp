#include<iostream>
using namespace std;
int main(){
	int t,num,sum;
	cin>>t;
	while(t--){
		cin>>num;
		sum = num %10;
		while(num>9){
			num = num/10;
		}
		sum = sum +  num;
		cout<<sum<<endl;
	}
}
