#include<iostream>
using namespace std;
int main(){
	int t, angles[3];
	cin>>t;
	while(t--){
		cin>>angles[0]>>angles[1]>>angles[2];
		if(angles[0]+angles[1]+angles[2] == 180){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
