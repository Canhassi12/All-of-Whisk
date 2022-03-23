#include <iostream>
using namespace std;

 void opc1()
 {
    cout<<"opa" <<endl; 
 }

int main()
{
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
    }
        
    
    
    
    
    
    
    
    
    
    
    return 0;
}