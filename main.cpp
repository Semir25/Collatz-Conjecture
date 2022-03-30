//here we will test our program
#include<iostream>
#include"collatz.hpp"


int main() {

    cltz::bigNumber n;

    n.setNumber(3);

    std::cout << n << std::endl;

    n.setNumber(325);

    std::cout << n << std::endl;

    n.setNumber(900235541);

    std::cout << n << std::endl;

    return 0;
}
