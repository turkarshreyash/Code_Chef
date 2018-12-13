#include<iostream>
using namespace std;

int func_sum(int times,int num){
	int sum = 0;
	for(int i=1;i<=num;i++){
		sum = sum + i;
	}
	if(times==1){
		return sum;
	}else{
		return func_sum(times-1,sum);
	}
}

int main(){
	int t,times,num;
	cin>>t;
	while(t--){
		cin>>times>>num;
		cout<<func_sum(times,num)<<endl;
	}
}
