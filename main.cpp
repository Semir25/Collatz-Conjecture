//here we will test our program
#include<iostream>
#include"collatz.hpp"


int main() {

    cltz::bigNumber n;

    n.setNumber(1);
    if (n==1)n= n+1;
    else if (n%2==0) n= n/2;
    else n= n*3 +1 ;
    return 0;
}
