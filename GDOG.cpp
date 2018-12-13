#include<iostream>
using namespace std;
int main(){
	int t,max,n,k;
	cin>>t;
	while(t--){
		max=0;
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			if(n%i>max){
				max=n%i;
			}
		}
		cout<<max<<endl;
	}
}
