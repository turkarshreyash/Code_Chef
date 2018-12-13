#include<iostream>
using namespace std;
int main(){
	int t, n, mi1,mi2;
	int arr[100001];
	arr[100000] = 1000000;
	cin>>t;
	while(t--){
		cin>>n;
		mi1=100000;
		mi2=100000;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]<arr[mi1]){
				mi1=i;
			}
		}
		for(int i =0;i<n ;i++){
			if(arr[i]<arr[mi2] && i != mi1){
				mi2 = i;
			}
		}
		cout<<arr[mi1]+arr[mi2]<<endl;
		
	}
}
