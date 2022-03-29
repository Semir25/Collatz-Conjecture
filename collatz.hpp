//here we will deklare everythig that we will use 
#include<list>


namespace cltz {

    class bigNumber {
        public:
            bigNumber() = default;
            bigNumber(const bigNumber& other): number_{other.number_} {}
            bigNumber(bigNumber&& other): number_{std::move(other.number_)} {}
            bigNumber& operator=(const bigNumber& other) {
                number_ = other.number_;
                return *this;
            }
            bigNumber& operator=(bigNumber&& other) {
                number_ = std::move(other.number_);
                return *this;
            }

            //method to generate random number with number of digits as argument (for ginormous numbers, NECESSERY!) 
            //method to push back a digit one number at a time (to increase the number one digit at a time)
            //method to pop last digit (not neccessary) 
            //method to set number_ from a value (for smaller numbers, not necessary, will make testing a lot easier, will require for loops and division) 

            //operator to add a number (NECCESARY!) 
            //operator to substract a number (implement last because it might not be necessasry for this project)
            //operator to multiply (NECCESARY!)
            //operator to divide (NECCESARY!)

        private:
            std::list<char> number_;


    };

    //function declaration for collatz-conjecture (takes out bigNumber as input, spits out on screen number of steps it takes to reach zero)
    //possibly print number at each step
    //possibly draw graph of the process (there is a library like in python for that)
}
