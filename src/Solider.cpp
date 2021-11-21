#include "Solider.h"

Solider::Solider(std::string name)
{
    this->_name = name;
    this->_ptr_gun = nullptr;
}

Solider::~Solider()
{
    std::cout << "free solider" << std::endl;
    if (this->_ptr_gun == nullptr)
    {
        return;
    }
    delete this->_ptr_gun;
    this->_ptr_gun = nullptr;
}

void Solider::addGun(Gun *ptr_gun)
{
    std::cout << "add gun" << std::endl;
    this->_ptr_gun = ptr_gun;
}

void Solider::addBulletToGun(int num)
{
    std::cout << "add bullet to gun" << std::endl;
    this->_ptr_gun->addBullet(num);
}

bool Solider::fire()
{
    std::cout << "solider fire" << std::endl;
    return this->_ptr_gun->shoot();
}