#include <iostream>
#include <string>
#include "Clothing.cpp"

using namespace std;

class Shirt : public Clothing
{
    private: 
        string color;
        string sleevetype;

    public:
        Shirt()
        {
            this->color = "";
            this->sleevetype = "";
        }

        Shirt(string color, string sleevetype)
        {
            this->color = color;
            this->sleevetype = sleevetype;
        }

        string get_color() const
        {
            return this->color;
        }

        void set_color(string color)
        {
            this->color = color;
        }

        string get_sleevetype() const
        {
            return this->sleevetype;
        }

        void set_sleevetype(string sleevetype)
        {
            this->sleevetype = sleevetype;
        }


        ~Shirt()
        {

        }

};