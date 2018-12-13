#include<iostream>
using namespace std;
int main(){
	int n,s;
	int arr[100001];
	cin>>n;
	while(n!=0){
		s=0;
		for(int i =0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n-1;i++){
			if(arr[i] == arr[i+1] +1 || arr[i] == arr[i+1] -n + 1){
				continue;
			}
			s = 1;
			break;
		}
		if(s==0){
			cout<<"ambiguous"<<endl;
		}else{
			cout<<"not ambiguous"<<endl;
		}
		cin>>n;
	}
	
}
