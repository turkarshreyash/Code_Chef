#include<iostream>
// 16 8 4 2 1
int main(){
    int t, n, no_visited, sum;
    std::string temp;
    std::cin>>t;
    while(t--){
        sum = 0;
        std::cin>>n;
        int *arr = new int[n]();
        for(int i = 0 ; i < n ; i++){
            bool visited[5] = {0};
            std::cin>>temp;
            no_visited = 0;
            for(auto c : temp){
                switch (c)
                {
                    case 'a':
                        if(visited[4]){
                            break;
                        }
                        visited[4] = 1;
                        no_visited++;
                        arr[i] += 16;
                        break;
                    case 'e':
                        if (visited[3]){
                            break;
                        }
                        visited[3] = 1;
                        no_visited++;
                        arr[i] += 8;
                        break;
                    case 'i':
                        if (visited[2])
                        {
                            break;
                        }
                        visited[2] = 1;
                        no_visited++;
                        arr[i] += 4;
                        break;
                    case 'o':
                        if (visited[1])
                        {
                            break;
                        }
                        visited[1] = 1;
                        no_visited++;
                        arr[i] += 2;
                        break;
                    case 'u':
                        if (visited[0])
                        {
                            break;
                        }
                        visited[0] = 1;
                        no_visited++;
                        arr[i] += 1;
                        break;
                }
                if(no_visited==5){
                    break;
                }
            }
        }
        for(int i = 0 ; i < n-1 ; i++){

            if(arr[i] == 31){
                sum += n-i-1;
                continue;
            }
            for(int j = i + 1 ; j < n ; j++){
                if((arr[i] | arr[j]) == 31){
                   // std::cout<<arr[i]<<" "<<arr[j]<<"\t"<<(arr[i]|arr[j])<<"\n";
                    sum+=1;
                }
            }
        }
        std::cout<<sum<<std::endl;
    }
}