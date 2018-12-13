#include<iostream>
using namespace std;
int main(){
	int t,quantity,price;
	double output;
	cin>>t;
	while(t--){
		cin>>quantity>>price;
		if(quantity>1000){
			output = quantity*price;
			output = output*0.9;
			printf("%5.6f\n",output);
		}else{
			output = quantity*price;
			printf("%5.6f\n",output);
			
		}
	}
}
