#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t,l,aplha[26],flag;
	char s[1000];
	cin>>t;
	while(t--){
		flag = 0;
		for(int i=0;i<26;i++){
			aplha[i] = 0;
		}
		cin>>s;
		l = strlen(s);
		for(int i =0;i<l/2;i++){
			aplha[s[i]-97]++ ;
			aplha[s[l-1-i]-97]--;
		}
		for(int i=0;i<26;i++){
			if(aplha[i]!=0){
				cout<<"NO\n";
				flag = 1;
				break;
			}
		}
		if(!flag){
		cout<<"YES\n";
		}
	}
}
