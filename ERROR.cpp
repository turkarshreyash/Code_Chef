#include<iostream>
#include<string.h>

int main(){
    int t, char1, char2;  // 010 101
    bool case1,case2, flag;
    std::string input;
    std::cin>>t;
    while(t--){
        std::cin>>input;
        case1 = false;
        case2 = false;
        flag = true;
        for(char i : input){
            if(case1){
                if(i == '0' && char1 == '1'){
                    std::cout<<"Good\n";
                    flag = false;
                    break;
                }
                else if(i == '1' && char1 == '0'){
                    char1 = i;
                }else{
                    case1 = false;
                }
            }

            if(i == '0' && !case1){
                case1 = true;
                char1 = i;
            }


            if(case2){
                if(i == '1' && char2 == '0'){
                    std::cout<<"Good\n";
                    flag = false;
                    break;
                }
                else if(i == '0' && char2 == '1'){
                    char2 = i;
                }else{
                    case2 = false;
                }
            }

            if(i == '1' && !case2 ){
                case2 = true;
                char2 = i;
            }


        }
        if(flag){
            std::cout<<"Bad\n";
        }
    }
}