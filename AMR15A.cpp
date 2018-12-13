#include<iostream>
using namespace std;
int main(){
	int e=0,o=0, n;
	int temp;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>temp;
			if(temp%2==0){
				e++;		
			}else{
				o++;
			}
		}
		if(e>o){
			cout<<"READY FOR BATTLE"<<endl;
		}else{
			cout<<"NOT READY";
		}
	
}
