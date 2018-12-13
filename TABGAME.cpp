#include<iostream>
#define gc getchar//_unlocked
void fs(int &number){                     
 	register int c = gc();					
  	number = 0;
  	while(c==32 || c==10){						
   		c = gc();
	  }
	 for(;c>47&&c<58;c=gc()){  
	 	number = (number<<3) +(number<<1)+ c - 48;           
	 }						
}
bool arr[1000][1000];
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t, M, N,q,x,y;
	register char c;
	//std::cin>>t;
	fs(t);
	
	arr[0][0] = 0;
	while(t--){
		M = 1;
		c = gc();
		while(c==32||c==10){
			c=gc();
		}
		for(;c==48||c==49;c=gc()){
			arr[0][M++] = c-48;
		}
		N = 1;

		while(c==32||c==10){
			c=gc();
		}
		for(;c==48||c==49;c=gc()){
			arr[N++][0] = c-48;
		}
		for(int i=1;i<N;i++){
			for(int j = 1;j<M;j++){
				if(i==1){                    //Row 1 Initialised !
					if(j==1){
						if(arr[0][1]==0||arr[1][0]==0){
							arr[1][1] = 1;
						}else{
							arr[1][1] = 0;
						}
 					}else{
						if(arr[0][j]==0){
							arr[1][j] = 1;
						}else{
							arr[1][j] = not arr[1][j-1];
						}
					}
				}else if(j==1){                  // Column 1 Initialised !
					if(arr[i][0]==0){
						arr[i][1] = 1;
					}else{
						arr[i][1] = not arr[i-1][1];
					}
				}else{
					if(arr[i-1][j]==0||arr[i][j-1]==0){
						arr[i][j] = 1;
					}else{
						arr[i][j] = 0;
					}
				}
			}
		}
		/*for(int i = 0;i<N;i++){
			for(int j = 0 ;j<M;j++){
				std::cout<<arr[i][j]<<"\t";
			}
			std::cout<<std::endl;
		}*/
		//std::cin>>q;
		fs(q);
		while(q--){
			//std::cin>>x>>y;
			fs(x);
			fs(y);
			std::cout<<arr[x][y];
		}
		std::cout<<"\n";
	}
}
