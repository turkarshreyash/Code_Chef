#include<iostream>
using namespace std;
int main(){
	int t,bs,os,s;
	char f[3];
	int pb[3];
	int po[3];
	char b[3];
	cin>>t;
	while(t--){
		s=0;
		bs=0;
		os=0;
		cin>>f[0]>>f[1]>>f[2]>>b[0]>>b[1]>>b[2];
		for(int i =0;i<3;i++){
			pb[i] = 0;
			po[i] = 0;
			if(f[i]=='b'||b[i]=='b'){
				bs++;
				pb[i] = 1;
			}
			if(f[i]=='o'||b[i] == 'o'){
				os++;
				po[i] = 1;
			}
		}
		
		if((bs>=3&&os>=1)||(bs>=2&&os>=3)){
			cout<<"yes"<<endl;
			continue;
		}
		for(int i=0;i<3;i++){
			if(pb[i] == 1&&po[i]==1){
				s++;
			}
		}

		if(bs == 2&&os==2&&s==1){
			cout<<"yes"<<endl;
			continue;
		}if(bs==2&&os==1&&s==0){
			cout<<"yes"<<endl;
			continue;
		}
		cout<<"no"<<endl;
	}
}
