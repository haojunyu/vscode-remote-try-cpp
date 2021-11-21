#include "Gun.h"

void Gun::addBullet(int num)
{
    std::cout << "gun add bullet" << std::endl;
    this->_bullet_count += num;
}

bool Gun::shoot()
{
    std::cout << "gun shoot" << std::endl;
    if (this->_bullet_count <= 0)
    {
        std::cout << "There is no bullet" << std::endl;
        return false;
    }
    this->_bullet_count--;
    return true;
}
