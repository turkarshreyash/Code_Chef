#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t, n, sum;
	cin>>t;
	while(t--){
		sum = 0;
		cin>>n;
		for(int i=1;i<=n;i=i+2){
			sum = sum + pow((n-i+1),2);
		}
		cout<<sum<<endl;
	}
}
