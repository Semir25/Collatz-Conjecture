//here we will test our program
#include<iostream>
#include"collatz.hpp"


int main() {

    cltz::bigNumber n;

    n.genNumber(10);

    std::cout << n << std::endl;
    std::cout << n.is_even() << std::endl;
    std::cout << n.is_odd() << std::endl;

    return 0;
}
