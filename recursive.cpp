#include <iostream>

void Recursive(int num){
    if(num <=0){
        return ;
    }
    std::cout << "Recursive call "<< num << std::endl;
    Recursive(num-1);

}

int main(){
    Recursive(3);
    return 0;
}