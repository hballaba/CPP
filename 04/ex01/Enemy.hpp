#ifndef ENEMY_HPP

# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy {
private:

protected:
    std::string _type;
    int _hp;


public:
    Enemy(int hp, std::string const & type);
    virtual ~Enemy();
    Enemy();
    Enemy(Enemy const & toCopy);
    Enemy & operator = (Enemy const & toCopy);


    std::string virtual getType() const;
    int getHP() const;
    virtual void takeDamage(int damage);
};

#endif