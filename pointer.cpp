#include <iostream>

int main(){
    int b = 4;
    int *a = &b;
    std::string character = "Hello World!";

    std::cout << a << std::endl;
    std::cout << *a << std::endl;
    std::cout << character << std::endl;

    return 0;
}