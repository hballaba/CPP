#ifndef RADSCORPION_HPP

# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy {
    private:
       
    
    public:
        RadScorpion();
        virtual ~RadScorpion();
        RadScorpion(RadScorpion const & toCopy);
        RadScorpion &operator = (RadScorpion const & toCopy);

};

#endif