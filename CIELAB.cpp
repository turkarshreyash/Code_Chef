#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b;
	cin>>a>>b;
	int c = a-b;
	if(c%10!=9){
		c+=1;
	}else{
		c-=1;
	}
	cout<<c<<"\n";
}
