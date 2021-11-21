#include "Gun.h"
#include "Solider.h"

using namespace std;

void test(){
    Solider sandu("xusandu");
    sandu.addGun(new Gun("AK47"));
    sandu.addBulletToGun(20);
    sandu.fire();
}

int main()
{
    std::cout<<"first !!"<<std::endl;
    test();
    return 0;
}