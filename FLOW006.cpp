#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	char digits[1];
	for(int i =0;i<t;i++){
		int sum = 0;
		cin>>digits;
		int l = strlen(digits);
		for(int i=0;i<l;i++){
			sum = sum+(int)digits[i];
		}
		cout<<sum<<endl;
	}
}
