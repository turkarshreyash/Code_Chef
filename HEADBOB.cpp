#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t,n,flag;
	cin>>t;
	char gestures[1001];
	while(t--){
		flag=0;
		cin>>n;
		cin>>gestures;
		if(strchr(gestures,'Y')){
			cout<<"NOT INDIAN"<<endl;
			continue;
		}if(strchr(gestures,'I')){
			cout<<"INDIAN"<<endl;
			continue;
		}
			cout<<"NOT SURE"<<endl;
	}
}
