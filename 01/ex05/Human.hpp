#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {

public:
    Human();
    ~Human();
    Brain _myBrain;
    std::string identify();
    Brain &getBrain();

};

#endif

