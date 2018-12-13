#include<iostream>
using namespace std;
int main(){
	int t,cash,notes, demo[6]={100,50,10,5,2,1};
	cin>>t;
	while(t--){
		notes = 0;
		cin>>cash;
		for(int i = 0;i<6&&cash!=0;i++){
			cout<<demo[i]<<endl;
			notes = notes + cash/demo[i];
			cash = cash%demo[i];
		}
		cout<<notes<<endl;
	}
}
