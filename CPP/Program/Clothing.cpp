#include <iostream>
#include <string>
#include "Product.cpp"
using namespace std;

class Clothing : public Product
{
    private: 
        string size;
        string materials;
        string gender;

    public:
        Clothing()
        {
            this->size = "";
            this->materials = "";
            this->gender = "";
        }

        Clothing(string size, string materials, string gender)
        {
            this->size = size;
            this->materials = materials;
            this->gender = gender;
        }

        string get_size() const
        {
            return this->size;
        }

        void set_size(string size)
        {
            this->size = size;
        }

        string get_materials() const
        {
            return this->materials;
        }

        void set_materials(string materials)
        {
            this->materials = materials;
        }

        string get_gender() const
        {
            return this->gender;
        }

        void set_gender(string gender)
        {
            this->gender = gender;
        }

        ~Clothing()
        {

        }

};