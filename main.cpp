//here we will test our program
#include<iostream>
#include"collatz.hpp"


int main() {

    cltz::bigNumber n;

    n.setNumber(131569);

    std::cout << n << std::endl;

    n = n / 2234;
    std::cout << n << std::endl;

    return 0;
}
