# include "Human.hpp"

Human::Human() {
    
}

Human::~Human() {

}

std::string Human::identify() {
    
    return (_myBrain.identify());
}

Brain   &Human::getBrain() {

    Brain &link = _myBrain;
    return (link);
}