#include <iostream>
#include <string.h>

using namespace std;

class ComplexNum
{
    public:
        ComplexNum(){}

        ComplexNum(float real, float img)
        {
            this->Real=real;
            this->Imaginary=img;
        }

        ComplexNum(ComplexNum& z1clone)
        {
            this->Real=z1clone.Real;
            this->Imaginary=z1clone.Imaginary;
        }

        ComplexNum add(ComplexNum z)
        {
            ComplexNum result;
            result.Real=this->Real+z.Real;
            result.Imaginary=this->Imaginary+z.Imaginary;
            return result;
        }

        void display()
        {
            cout<<"("<<this->Real<<","<<this->Imaginary<<")"<<endl;
        }

        float getReal()
        {
            return this->Real;
        }
        float getImaginary()
        {
            return this->Imaginary;
        }

        void setReal(float real)
        {
            this->Real=real;
        }
        void setImaginary(float img)
        {
            this->Imaginary=img;
        }

    private:
        float Real;
        float Imaginary;
};

int main()
{
    ComplexNum z1(4,5);
    ComplexNum z2(z1);
    ComplexNum z3;
    ComplexNum z4(6,7);

    z1.display();
    z3=z1.add(z4);
    z3.display();
}
