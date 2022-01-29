#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

class calculator
{
public:
     void display1()
     {
          cout << "------------------------------------------------------------" << endl;
          cout << "|                                                          |" << endl
               << "|         ..:|>>> Calculator By Zakria <<<|:..             |" << endl;          
          cout << "|                                                          |" << endl
               << "------------------------------------------------------------" << endl;
          cout << endl
               << "Entre the Function Number that you want to perform." << endl;
          cout << endl
               << "0: Commands          ||" << endl
               << "1: Addition          ||    2: Subtraction" << endl;
          cout << "3: Multiplication    ||    4: Division" << endl;
          cout << "5: Power of Number   ||    6: Square Root" << endl;
          cout << "7: Remainder         ||    8: cos0" << endl;
          cout << "9: sin0              ||    10: tan0" << endl;
          cout << "11: log              ||    12: Area of circle" << endl;
          
     }
     void display()
     {
          cout << "------------------------------------------------------------" << endl;
          cout << "|                                                          |" << endl
               << "|         ..:|>>> Calculator By Zakria <<<|:..             |" << endl;          
          cout << "|                                                          |" << endl
               << "------------------------------------------------------------" << endl;
          cout<<endl<<"For commands type (/help) if not than type (0)"<<endl<<endl;         
     }
};

int main()
{

     int select;
     float ax, bx;     
     calculator display;
     display.display();
help:
{
     
     string help;
      
     cin >>help;
     if(help == "/help")
     {
          cout << "..:|>>> HELP <<<|:.."<<endl;
          cout << "1: "<<endl;
          cout<<endl<<"Type 'reset' to reset calculator."<<endl;
          goto clear;
     }
     else if (help == "0")
     {
          system("CLS");
          cout << flush;
          display.display1();
     }
     else if(help != "/help"|| help != "0")
     {
          system("CLS");
          cout << flush;
          cout<< endl<<"ERROR : Wrong Input"<< endl;
          display.display();
          goto help;
     }

}
Wrong:
     cin >> select;
     switch (select)
     {
     case 0:
          system("CLS");
          cout << flush;
          display.display();
          goto help;
     case 1:
          cout << endl
               << "..:|>>> Addition <<<|:.." << endl;
          cout << "Entre First Number : ";
          cin >> ax;
          cout << "Entre Secound Number : ";
          cin >> bx;
          cout << "Sum of your two numbers is : " << ax + bx << endl;
          cout << "Type 'reset' to reset calculator." << endl;
          goto clear;
          break;
     case 2:
          cout << endl
               << "..:|>>> Subtraction <<<|:.." << endl;
          cout << "Entre First Number : ";
          cin >> ax;
          cout << "Entre Secound Number : ";
          cin >> bx;
          cout << "Subraction of your two numbers is : " << ax - bx << endl;

          cout << "Type 'reset' to reset calculator." << endl;

          goto clear;
          break;
     case 3:
          cout << endl
               << "..:|>>> Multiplication <<<|:.." << endl;
          cout << "Entre First Number : ";
          cin >> ax;
          cout << "Entre Secound Number : ";
          cin >> bx;
          cout << "Multiplication of your two numbers is : " << ax * bx << endl;
          cout << "Type 'reset' to reset calculator." << endl;

          goto clear;
          break;
     case 4:
          cout << endl
               << "..:|>>> Division <<<|:.." << endl;
          cout << "Entre First Number : ";
          cin >> ax;
          cout << "Entre Secound Number : ";
          cin >> bx;
          cout << "Division of your two numbers is : " << ax / bx << endl;
          cout << "Type 'reset' to reset calculator." << endl;

          goto clear;
          break;
     case 5:
          cout << "..:|>>> Power of Number <<<|:.." << endl;
          cout << "Entre Number : "<< endl;
          cin >> ax;
          cout << "Entre Power of Number : "<< endl;
          cin >> bx;
          cout << "The Answer is : "<<pow(ax,bx) << endl;
          cout << "Type 'reset' to reset calculator." << endl;
          goto clear;    
     case 6:
          cout << "..:|>>> Square Root <<<|:.." << endl;
          cout << "Entre Number : "<< endl;
          cin >> ax;
          cout << "The Answer is : "<<sqrt(ax) << endl;
          cout << "Type 'reset' to reset calculator." << endl;
          goto clear;    
     case 7:
          cout << "..:|>>> Remainder <<<|:.." << endl;
          cout << "Entre First Number : "<< endl;
          cin >> ax;
          cout << "Entre Second Number : "<< endl;
          cin >> bx;
          cout << "The Answer is : "<<remainder(ax,bx) << endl;
          cout << "Type 'reset' to reset calculator." << endl;
          goto clear;    
     case 8:
          cout << "..:|>>> cos0 <<<|:.." << endl;
          cout << "Entre Number : "<< endl;
          cin >> ax;
          cout << "The cos0 is : "<<cos(ax) << endl;
          cout << "Type 'reset' to reset calculator." << endl;
          goto clear;    
     case 9:
          cout << "..:|>>> sin0 <<<|:.." << endl;
          cout << "Entre Number : "<< endl;
          cin >> ax;
          cout << "The sin0 is : "<<sin(ax) << endl;
          cout << "Type 'reset' to reset calculator." << endl;
          goto clear;    
     case 10:
          cout << "..:|>>> tan0 <<<|:.." << endl;
          cout << "Entre Number : "<< endl;
          cin >> ax;
          cout << "The tan0 is : "<<tan(ax) << endl;
          cout << "Type 'reset' to reset calculator." << endl;
          goto clear;    
     case 11:
          cout << "..:|>>> log <<<|:.." << endl;
          cout << "Entre Number : "<< endl;
          cin >> ax;
          cout << "The log is : "<<log(ax) << endl;
          cout << "Type 'reset' to reset calculator." << endl;
          goto clear;      
     case 12:
          cout << "..:|>>> Area of Circle <<<|:.." << endl;
          cout << "Entre Radius of Circle : "<< endl;
          cin >> ax;
          cout << "The Area of Circle is : "<<3.14*ax*ax << endl;
          cout << "Type 'reset' to reset calculator." << endl;
          goto clear;      
     default:
          if(select < 1||select > 12)
          {
               system("CLS");
               cout << flush;
               display.display1();
               cout <<endl << "ERROR : Wrong Input" << endl;
               goto Wrong;
          }
          break;
     }
clear:
{
     string reset;
     cin >> reset;
     while (reset == "reset")
     {
          system("CLS");
          cout << flush;
          display.display();
          goto help;
     }
     if (reset != "reset")
     {
          cout << "ERROR : Wrong Input" << endl;
          cout << "Please Type 'reset' to reset calculator." << endl;
          goto clear;
     }
}

     return 0;
}