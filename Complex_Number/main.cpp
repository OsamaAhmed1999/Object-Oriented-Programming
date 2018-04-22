#include <iostream>
#include "Complex Number.h"
using namespace std;

int main()
{
    ComplexNum z1;
    z1.set(2 , 4);
    ComplexNum z3;
    ComplexNum z2(9 , -3);
    //ComplexNum z4(6,7);

    //z1.add(z2);
    
    //ComplexNum z3(z2);
    
    z3 = z2 * z1;
    z3 = z2 - z1;
    z3 = z2 + z1;

    cout << z3;
    
    //z1.display();
    //z3=z1.add(z4);
    //z3.display();
    system("pause");
}
