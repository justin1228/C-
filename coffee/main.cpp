#include <iostream>
#include "coffee.hpp"

int main(){
    std::cout << make_coffee()<< endl;
    std::cout << make_coffee(false, true) <<endl;
    std::cout << make_coffee(true)<<endl;


    return 0;
}