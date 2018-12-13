#include<iostream>
using namespace std;
double fact_num(int num){
	double fact = 1;
	for (int i =2;i<=num;i++){
		fact = fact * i;
	}
	return fact;
}
int main(){
	int t,num;
	double fact;
	cin>>t;
	while(t--){
		cin>>num;
		fact = fact_num(num);
		cout<<fact<<endl;
	}
}
