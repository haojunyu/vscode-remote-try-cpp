#pragma once

#include <iostream>
#include <string>
#include "Gun.h"

class Solider
{
private:
    /* data */
    std::string _name;
    Gun *_ptr_gun;

public:
    Solider(std::string name);
    ~Solider();
    void addGun(Gun *ptr_gun);
    void addBulletToGun(int num);
    bool fire();

};
