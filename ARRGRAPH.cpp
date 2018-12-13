#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t, arr[50], iso, n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		if(n==1){
			cout<<0<<endl;
			cout<<arr[0]<<endl;
		}
		for(int i = 0;i<n;i++){
			iso = 1;
			for(int j = 0;j<n;j++){
				if(i==j){
					continue;
				}
				if(__gcd(arr[i],arr[j]) == 1){
					iso = 0;
					break;
				}
			}
			if(iso){
				cout<<arr[i]<<endl;
				break;
			}
		}
		if(iso){
			cout<<1<<endl;
			if(arr[0]==47){
				cout<<43;
			}else{
				cout<<47;
			}
			for(int i = 1;i<n;i++){
				cout<<" "<<arr[i];
			}
			cout<<endl;
		}else{
			cout<<0<<endl;
			for(int i = 0;i<n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			
		}
	}
}
