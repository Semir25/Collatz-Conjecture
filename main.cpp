//here we will test our program
#include<iostream>
#include"collatz.hpp"


int main() {

    cltz::bigNumber n;

    n.genNumber(2);

    std::cout << n << std::endl;

    n = n + 932;

    std::cout << n << std::endl;


    return 0;
}
