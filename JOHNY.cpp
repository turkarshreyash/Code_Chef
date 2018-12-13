#include<iostream>
#include<algorithm>
using namespace std;

void fast_scan(int &number){
	bool negative = false;                      
 	register int c = getchar();					
  	number = 0;
  	while(c==32 || c==10){						
   		c = getchar();
	  }
	if(c == 45){                                
 		negative = true;
 		c = getchar();                          
	 }
	 for(;c>47&&c<58;c=getchar()){  
	 	number = number*10 + c - 48;           
	 }
	 if(negative)                               
	 	number = number*-1;						
}




int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t, n,kth, found;
	int len_songs[100];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i = 0;i<n;i++){
			//fast_scan(len_songs[i]);
			cin>>len_songs[i];
		}
		cin>>kth;
		//fast_scan(kth);
		kth = len_songs[kth-1];
		sort(len_songs,len_songs+n);
		for(int i = 0,l = n-1,half = (i+l)/2;;half=(i+l)/2){
			if(kth>len_songs[half]){
				i = half+1;
			}if(kth < len_songs[half]){
				l = half-1;
			}if(kth==len_songs[half]){
				cout<<half+1<<"\n";
				break;
			}
		}
		
	}
}
