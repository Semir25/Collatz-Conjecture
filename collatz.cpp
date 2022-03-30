//here we will define everything from collatz.hpp that needs to be defined
#include"collatz.hpp"
#include<cstdlib>
#include<ctime>

namespace cltz {
    //the first element in the list will be the strongest digit and the last will be the weakest digit

    bigNumber& bigNumber::genNumber(unsigned int n) {
        srand(time(0));
        number_.clear();

        for(int i = 0; i < n; ++i) {
            number_.push_back('0' + rand()%10);
        }

        return *this;

    } 

    bigNumber& bigNumber::setNumber(unsigned long long n) {
        number_.clear();

        while(n > 0) {
            int tmp = n%10;
            n /= 10;
            number_.push_front('0' + tmp);
        }

        return *this;

    } 
    
    std::ostream& operator<<(std::ostream& out, bigNumber& n) {

        for(auto it= n.begin(); it != n.end(); ++it) {
            std::cout << (*it); 
        }

        return out;

    }


    bigNumber& bigNumber::operator*(long long other){
      int remained=0;
      // iterating throuht the list from the end to the begging
      for (auto it = --(this->end()); it != --(this->begin()); it--){
        int temp =((*it - '0')*other) + remained%10;
        remained /= 10;
        while ( temp > 9){
          temp -= 10;
          remained++;
        }
        *it = '0' + temp;
      }
      //the list is already filled up to the beggining
      while (remained > 0){
        number_.push_front(char(remained%10 + '0'));
        remained /=10;
      }

      return *this;
    }



    bigNumber& bigNumber::operator+(long long n) {

        //positioning iterator at the smallest digit
        auto it = end();
        it--;

        while(n > 0) {

            //extracting smallest digit
            int tmp = n%10;
            n /= 10;

            if(it != begin()) {
                //adding the number and moving it over if it overflows
                *it += tmp;

                if(*it > '9') {
                    *it -= 10;
                    n += 1;
                }

                //moving iterator to the next higher digit
                --it;
            }
            else {
                //if it reaches the begining of the list
                *it += tmp;
                if(*it > '9') {
                    *it -= 10;
                    number_.push_front('1');
                }
                else {
                    if(n > 0) number_.push_front('0');
                }

                it = begin();
            }

        }

        return *this;
    }

}
