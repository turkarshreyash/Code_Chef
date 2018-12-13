#include<bits/stdc++.h>
using namespace std;
void fast_input(int &number){
	register int in = getchar();
	number = 0;
	for(;in<58&&in>47;in=getchar()){
		number = number*10 + in - 48;
	}
}





int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, l, min, temp;
	int skills[5000];
	fast_input(t);
	//cin>>t;
	while(t--){
		min = 1000000000;
		fast_input(l);
		//cin>>l;
		for(int i =0;i<l;i++){
			fast_input(skills[i]);
			//cin>>skills[i];
		}
		sort(skills,skills+l);
		for(int i =0;i<l-1;i++){
			temp = skills[i+1]-skills[i];
			//cout<<skills[i]<<" "<<temp<<" "<<min<<"\n";
			if(temp< min){
				min = temp;
			}
		}
		cout<<min<<"\n";
	}
	
}
