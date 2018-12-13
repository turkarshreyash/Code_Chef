#include<iostream>
using namespace std;
int main(){
	int t, n, k, temp;
	cin>>t;
	while(t--){
		cin>>n>>k;
		char arr[n];
		for(int i = 0;i<n;i++){
			cin>>temp;
			if(k>=temp){
				k = k-temp;
				arr[i] = '1';
			}else{
				arr[i] = '0';
			}
		}
		for(int  i = 0;i<n;i++){
			cout<<arr[i];
		}
		cout<<"\n";
		
		
	}
}
