//here we will test our program
#include<iostream>
#include"collatz.hpp"


int main() {

    cltz::bigNumber n;

    n.genNumber(1000);

    std::cout << n << std::endl;


    return 0;
}
