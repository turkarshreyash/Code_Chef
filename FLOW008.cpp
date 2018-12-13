#include<iostream>
using namespace std;
int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n>=10){
			cout<<-1<<endl;
			continue;
		}
		cout<<"What an obedient servant you are!"<<endl;
	}
}
