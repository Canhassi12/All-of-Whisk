#ifndef Whisky_h
#define Whisky_h

#include <string>
using namespace std;

class Whisky
{
    private:
        string Name;
        string Place;
        string Age;
        int Volume;

    public:
        Whisky()
        {
            this->Volume=100;
        }

        void setName(string _Name)
        {
            this->Name = _Name;
        }
        string getName()
        {
            return this->Name;
        }

        void setPlace(string _Place)
        {
            this->Place = _Place;
        }
        string getPlace()
        {
            return this->Place;
        }

        void setAge(string _Age)
        {
            this->Age = _Age;
        }
        string getAge()
        {
            return this->Age;
        }

        void setVolume(int _Volume)
        {
            this->Volume = _Volume;
        }
        int getVolume()
        {
            return this->Volume;
        }
        void Bber(int Volume_a_ser_tomado)
        {
            this->Volume = this->Volume - Volume_a_ser_tomado;
        }


};
#endif