#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;

class Whisky
{
    private:
        string Name;
        string Place;
        string Age[];
    public:
        void setName (string _Name);
        string getName();

        void setPlace (string _Place);
        string getPlace();

        void setAge (string _Age);
	    string getAge();
};

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
    Whisky RL;
    RL.setName ("Red Label");
    RL.setPlace ("Scotch");
    RL.setAge ("Unknow");

    Whisky BL;
    BL.setName ("Black Label");
    BL.setPlace ("Scotch");
    BL.setAge ("12 years");

    Whisky GL;
    GL.setName ("Grenn Label");
    GL.setPlace ("Scotch");
    GL.setAge ("15 years");
    
    Whisky GoL;
    GoL.setName ("Gold Label");
    GoL.setPlace ("Scotch");
    GoL.setAge ("18 years");

    Whisky BlL;
    BlL.setName ("Blue Label");
    BlL.setPlace ("Scotch");
    BlL.setAge ("Unknow");



    int z,opc;

    cout<<"welcome, that its the world of whisky, and here"<<endl; 
    cout<<"you gonna learn all what you want about whisky" <<endl;
    cout<<"type anything to continue" <<endl;

    system("pause");

    cout<<"what do you want know?" <<endl;
    cout<<"1 :history and beginning of everything"<<endl;
    cout<<"2 :tips of whisky"<<endl;
    cout<<"3 :rank of the best"<<endl;

    cin>>opc;

    switch (opc)
    {  
        case 1:
            opc1();
            break;
    

        case 2:
            opc2();
            break;

     

  //      case 3:
  //          opc3();
  //          break;    
    }        
}