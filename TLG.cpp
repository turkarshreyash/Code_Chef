#include<iostream>
using namespace std;
int main(){
	int r;
	cin>>r;
	int Si=0,Ti=0,max=0,s,t,max_holder;
	for(int i=0;i<r;i++){
		cin>>s>>t;
		Si =Si + s;
		Ti = Ti + t;
		if(Si>=Ti && Si-Ti>max){
			max = Si-Ti;
			max_holder = 1;
		}
		if(Ti>=Si && Ti-Si>max){
			max = Ti-Si;
			max_holder = 2;
		}
		
	}
	cout<<max_holder<<" "<<max<<endl;
}
