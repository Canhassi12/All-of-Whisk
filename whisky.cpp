#include "whisky.h"
#include <string>
using namespace std;

void Whisky::setName(string _Name)
{
   this->Name = _Name;
}
string Whisky::getName()
{
    return this->Name;
}

void Whisky::setPlace(string _Place)
{
    this->Place = _Place;
}
string Whisky::getPlace()
{
    return this->Place;
}

void Whisky::setAge(string _Age)
{
    this->Age = _Age;
}
string Whisky::getAge()
{
    return this->Age;
}

void Whisky::setVolume(int _Volume)
{
    this->Volume = _Volume;
}
int Whisky::getVolume()
{
    return this->Volume;
}
void Whisky::Bber(int Volume_a_ser_tomado)
{
    this->Volume = this->Volume - Volume_a_ser_tomado;
}

