#include<iostream>
using namespace std;
int main(){
	int t,h,c,s;
	float quantity[3];
	cin>>t;
	while(t--){
		h=0;
		c=0;
		s=0;
		cin>>quantity[0]>>quantity[1]>>quantity[2];
		if(quantity[0]>50){
			h=1;
		}if(quantity[1]<.7){
			c = 1;
		}if(quantity[2]>5600){
			s = 1;
		}
		if(h+c+s==3){
			cout<<10<<endl;
		}else if(h==1 &&  c==1){
			cout<<9<<endl;
		}else if(c==1&&s==1){
			cout<<8<<endl;
		}else if(h==1&&s==1){
			cout<<7<<endl;
		}else if(h+s+c==1){
			cout<<6<<endl;
		}else{
			cout<<5<<endl;
		}
		
	}
}
