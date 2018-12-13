#include<iostream>
using namespace std;
int is_prime(int num){
	for(int i=2;i<num;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t, num;
	cin>>t;
	while(t--){
		cin>>num;
		if(is_prime(num)){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
}
