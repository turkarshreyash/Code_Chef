#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t,l, flag;
	char num[10000];
	cin>>t;
	while(t--){
		flag = 0;
		cin>>num;
		l = strlen(num);
		for(int i=0;i<l/2;i++){
			if(num[i] != num[l-1-i]){
				flag = 1;
				cout<<"losses"<<endl;
				break;
			}
		}if(flag != 1){
			cout<<"wins"<<endl;
		}
		
	}
}
