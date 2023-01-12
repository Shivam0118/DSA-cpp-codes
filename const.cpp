/*3. WRITE A PROGRAM TO FIX SOME VALUE USING CONST KEYWORD?*/
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    const int i=3;
    
   cout <<"hello"<< i << endl;
    
    i = i + 10 ;  //This is an attempt to alter value of a constant variable i
    
   // cout << "hi"<<i;
    
  //  getch();
    
    return 0;
}

