#include "Enemy.hpp"

Enemy::Enemy() {

}

Enemy::Enemy(int hp, std::string const & type) {
    _hp = hp;
    _type = type;
}

Enemy::~Enemy () {

}

Enemy::Enemy(Enemy const & toCopy) {
    this->operator = (toCopy);
}

Enemy & Enemy::operator = (Enemy const & toCopy) {
    this->_hp = toCopy._hp;
    this->_type = toCopy._type;
    return (*this);
}

std::string Enemy::getType() const {
    return (_type);
}

int         Enemy::getHP() const {
    return (_hp);
}

    void        Enemy::takeDamage(int damage) {
        if (_hp <= damage)
            _hp = 0;
        else 
            _hp -= damage;
    }
