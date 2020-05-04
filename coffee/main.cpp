#include <iostream>
#include "coffee.hpp"

int main(){
    std::cout << make_coffee()<< std::endl;
    std::cout << make_coffee(false, true) <<std::endl;
    std::cout << make_coffee(true)<<std::endl;
    std::cout << make_coffee(true, true)<< std::endl ;

    return 0;
}