#include<iostream>
using namespace std;

void fast_scan(int &num){
	num = 0;
	register int c = getchar();
	while(!(c>47&&c<58)){
		c = getchar();
	}
	for(;(c<58&&c>47);c  = getchar()){
		num = num*10 + c - 48;
	}
	
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, works, done, temp;
	int wo[1001];
	int assistant[1001];
	fast_scan(t);
	//cin>>t;
	while(t--){
		//cin>>works>>done;
		fast_scan(works);
		fast_scan(done);
		for(int i = 0;i<works;i++){
			wo[i] = 1;
		}
		for(int i=0;i<done;i++){
			fast_scan(temp);
			//cin>>temp;
			wo[temp-1] = 0;
		}
		for(int i = 0,count = 0 ,temp = 1;i<works;i++){
			if(wo[i]==1 && temp == 1){
				temp *= -1;
				cout<<i+1<<" ";
			}else{
				if(wo[i] == 1 && temp == -1){
					assistant[count++] = i;
					temp*=-1;
				}
		}
		}
		cout<<" "<<"\n";
		for(int i=0;i<(works-done)/2;i++){
			cout<<assistant[i]+1<<" ";
		}
		cout<<"\n";
	}
}

