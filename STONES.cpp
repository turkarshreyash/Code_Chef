#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, similars;
	register char c;
	char l2[26],u2[26], l1[26], u1[26];
	cin>>t;
	while(t--){
		similars = 0;
		for(int i=0;i<26;i++){
			l1[i] = 0;
			l2[i] = 0;
			u1[i] = 0;
			u2[i] = 0;
		}
		for(c=getchar();c==32||c==10;c=getchar()){
			//Empty loop
		}
		for(;(c>96&&c<124)||(c>64&&c<92);c=getchar()){
			if(c>96){
				l1[c-97]++;
			}else{
				u1[c-65]++;
			}
		}
		for(c=getchar();c==32||c==10;c=getchar()){
			//Empty loop
		}
		for(;(c>96&&c<124)||(c>64&&c<92);c=getchar()){
			if(c>96){
				l2[c-97]++;
			}else{
				u2[c-65]++;
			}
		}
		for(int i=0;i<26;i++){
			if(l1[i]<=l2[i]){
				similars = similars + l1[i]; 
			}else if(l2[i]<l1[i]){
				similars = similars + l2[i]; 
			}
			if(u1[i]<=u2[i]){
				similars = similars + u1[i]; 
			}else if(u2[i]<u1[i]){
				similars = similars + u2[i]; 
			}
		}
		cout<<similars<<"\n";
	}
}
