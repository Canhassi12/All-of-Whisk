#include <iostream>
#include <fstream>
#include <string>
#include "Whisky.h"
using namespace std;

void opc1()
{
    ifstream arquivoE;
    string linha;

    arquivoE.open("aa.txt");
    if(arquivoE.is_open())
    {
        while(getline(arquivoE,linha))
        {
            cout<<linha<<endl;
        }
    }    
    
} 

void opc2()
{
    ifstream arquivoE2;
    string linha2;

    arquivoE2.open("bb.txt");
    if(arquivoE2.is_open())
    {
        while(getline(arquivoE2,linha2))
        {
            cout<<linha2<<endl;
        }
    }     
}

int main()
{ 
    int z,opc,qntbb, result;
    Whisky Chanceler;
    Chanceler.setName("Chanceler");
    Chanceler.setPlace("ngm sabe");
    Chanceler.setAge("ngm sabe");
    

    cout<<"olar sulista merda, quantos por cento tu vai tomar?" <<endl;
    cin>>qntbb;

    Chanceler.Bber(qntbb);
    
    cout <<"parabens sulista merda, tu ainda pode beber " <<Chanceler.getVolume()<< " da garrafa" <<endl;



    













 /*   cout<<"welcome, that its the world of whisky, and here"<<endl; 
    cout<<"you gonna learn all what you want about whisky" <<endl;
    cout<<"type anything to continue" <<endl;

    system("pause");

    cout<<"what do you want know?" <<endl;
    cout<<"1 :history and beginning of everything"<<endl;
    cout<<"2 :tips of whisky"<<endl;
    cout<<"3 :rank of the best"<<endl;

    cin>>opc;

    switch(opc)
    {  
        case 1:
            opc1();
            break;
    

        case 2:
            opc2();
            break;

 */    

  //      case 3:
  //          opc3();
  //          break;    
       return 0;    
}