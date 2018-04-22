#include <iostream>
#include <string.h>

using namespace std;

class ComplexNum
{
    public:
        ComplexNum()
        {
            this->Real = 0;
            this->Imaginary = 0;
        }

        ComplexNum(float real, float img)
        {
            this->Real=real;
            this->Imaginary=img;
        }

        ComplexNum(ComplexNum& clone)
        {
            this->Real=clone.Real;
            this->Imaginary=clone.Imaginary;
        }

        void display()
        {
            cout << "(" << this->Real << "," << this->Imaginary << ")" << endl;
        }
        
        ComplexNum add(ComplexNum z)
        {
            ComplexNum result;
            result.Real=this->Real+z.Real;
            result.Imaginary=this->Imaginary+z.Imaginary;
            return result;
        }

        ComplexNum operator + (ComplexNum& z)
        {
            ComplexNum result;
            result.Real = this->Real + z.Real;
            result.Imaginary = this->Imaginary + z.Imaginary;
            return result;
        }

        ComplexNum operator - (ComplexNum& z)
        {
            ComplexNum result;
            result.Real = this->Real - z.Real;
            result.Imaginary = this->Imaginary - z.Imaginary;
            return result;
        }

        ComplexNum operator * (ComplexNum& z)
        {
            ComplexNum result;
            result.Real = this->Real * z.Real;
            result.Imaginary = this->Imaginary * z.Imaginary;
            return result;
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
        void set(float real , float img)
        {
            this->Real=real;
            this->Imaginary=img;
        }


    private:
        float Real;
        float Imaginary;
};

ostream& operator << (ostream& output , ComplexNum& object)
        {
            return output << "("  << object.getReal() << "," << object.getImaginary() << ")" << endl;
        }




