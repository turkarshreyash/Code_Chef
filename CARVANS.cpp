#include<iostream>
void fast_scan(unsigned int &number){                     
 	register int c = getchar_unlocked();					
  	number = 0;
  	while(c==32 || c==10){						
   		c = getchar_unlocked();
	  }
	 for(;c>47&&c<58;c=getchar_unlocked()){  
	 	number = (number<<1) + (number<<3)+ c - 48;           
	 }						
}
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	unsigned int min,t,n,full_speed,speed[10000];
	fast_scan(t);
	while(t--){
		full_speed=0;
		min = 2147483648;
		fast_scan(n);
		for(int i = 0;i<n;i++){
			fast_scan(speed[i]);
		}
		for(int i=0;i<n;i++){
			if(speed[i]<min){
				full_speed++;
				min = speed[i];
			}
		}
		std::cout<<full_speed<<"\n";
	}
}
