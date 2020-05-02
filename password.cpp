#include <iostream>

void pass(int pw){
    int tries = 0;
    while(pw!=1234 && tries<3){
        std::cout << "Wrong Number Try again: \n";
        std::cin >> pw;

    }
    if(pw ==3256){
        std::cout << "Correct! \n";
    }
}

int main(){
    int password;
    std::cout << "Enter your P/W: ";
    std::cin>> password;

    pass(password);

    return 0;
}