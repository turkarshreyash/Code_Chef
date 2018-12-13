#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t,f;
	char num[10];
	cin>>t;
	while(t--){
		cin>>num;
		f =1;
		for(int i = strlen(num)-1;i>=0;i--){
			if(f== 1&&num[i] == '0'){
				f= 1;
			}else{
				cout<<num[i];
				f = 0;
			}
			
		}
		cout<<endl;
		
	}
}
