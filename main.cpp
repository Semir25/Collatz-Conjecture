//here we will test our program
#include<iostream>
#include"collatz.hpp"


int main() {

    cltz::bigNumber n;
    n.setNumber(4);
    cltz::collatz_conjecture(n);
    return 0;
}
