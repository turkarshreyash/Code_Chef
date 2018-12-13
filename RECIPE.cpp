#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}
void display(int arr[],int gcd,int l){
	for(int i = 0;i<l;i++){
		cout<<arr[i]/gcd<<" ";
	}
	cout<<endl;
}
int find_gcd(int arr[], int n){
	int result = arr[0];
	for(int i=0;i<n;i++){
		result = gcd(arr[i],result);               
	}
	return result;
}
int main(){
	int arr[51], result[51];
	int t, l, gcd;
	cin>>t;
	while(t--){
		cin>>l;
		for(int i =0;i<l;i++){
			cin>>arr[i];
		}
		display(arr,find_gcd(arr,l),l);
	}
} 

