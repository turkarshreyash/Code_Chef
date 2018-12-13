#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,i,c,l;
	char s[10];
	char d;
	cin>>n;
	while(n--){                                                                                                                                 
		cin>>s;
		i = 0;
		c = 0;
		l = strlen(s);
		while(l--){
			if(s[i]=='4'){
				c++;
			}
			i++;
		}
		cout<<c<<endl;
	}
}
