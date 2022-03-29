//here we will define everything from collatz.hpp that needs to be defined
#include"collatz.hpp"
#include<cstdlib>
#include<ctime>

namespace cltz {
    //the first element in the list will be the strongest digit and the last will be the weakest digit

    bigNumber& bigNumber::genNumber(unsigned int n) {
        srand(time(0));

        for(int i = 0; i < n; ++i) {
            number_.push_back('0' + rand()%10);
        }

        return *this;

    } 
    
    std::ostream& operator<<(std::ostream& out, bigNumber& n) {

        for(auto it= n.begin(); it != n.end(); ++it) {
            std::cout << (*it); 
        }

        return out;

    }

}
