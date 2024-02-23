#include <iostream>
#include <string>

using namespace std;

class Product
{
    private: 
        int id;
        string name;
        string brand;
        string price;

    public:
        Product()
        {
            this->id = 0;
            this->name = "";
            this->brand = "";
            this->price = "";
        }

        Product(int id, string name, string brand, string price)
        {
            this->id = id;
            this->name = name;
            this->brand = brand;
            this->price = price;
        }

        int get_id() const
        {
            return this->id;
        }

        void set_id(int id)
        {
            this->id = id;
        }

        string get_name() const
        {
            return this->name;
        }

        void set_name(string name)
        {
            this->name = name;
        }

        string get_brand() const
        {
            return this->brand;
        }

        void set_brand(string brand)
        {
            this->brand = brand;
        }

        string get_price() const
        {
            return this->price;
        }

        void set_price(string price)
        {
            this->price = price;
        }

        ~Product()
        {

        }

};