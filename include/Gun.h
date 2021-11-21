#pragma once

#include <iostream>
#include <string>

class Gun
{
private:
    /* data */
    std::string _type;
    int _bullet_count;

public:
    Gun(std::string type)
    {
        this->_type = type;
        this->_bullet_count = 0;
    }
    ~Gun(){
        std::cout << "free Gun" << std::endl;
    }
    void addBullet(int num);
    bool shoot();
};
