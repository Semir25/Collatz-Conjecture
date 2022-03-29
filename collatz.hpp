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
            //all of the methods return a reference to bigNumber so they can be chained

            //method to generate random number with number of digits as argument (for ginormous numbers, NECESSERY!) 
            //if a number already exists delete it
            template<typename T>
            bigNumber& genNumber(const T&);
            //method to push back a digit one number at a time (to increase the number one digit at a time)
            bigNumber& push_back(const char&);
            //method to pop last digit (not neccessary) 
            bigNumber& pop_back();
            //method to set number_ from a value (for smaller numbers, not necessary, will make testing a lot easier, will require for loops and division) 
            //if a number already exists delete it
            template<typename T>
            bigNumber& setNumber(const T&);

            //operator to add a number (NECCESARY!) 
            template<typename T>
            bigNumber& operator+(const T&);
            //operator to substract a number (implement last because it might not be necessasry for this project)
            template<typename T>
            bigNumber& operator-(const T&);
            //operator to multiply (NECCESARY!)
            template<typename T>
            bigNumber& operator*(const T&);
            //operator to divide (NECCESARY!)
            template<typename T>
            bigNumber& operator/(const T&);

        private:
            std::list<char> number_;

    };

    //function declaration for collatz-conjecture (takes out bigNumber as input, spits out on screen number of steps it takes to reach zero)
    //possibly print number at each step
    //possibly draw graph of the process (there is a library like in python for that)
    void collatz_conjecture(bigNumber&);
}
