/*3. WRITE A C++ PROGRAM USING ASSIGNMENT OPERATOR AND MAKE A ADDITION, SUBTRACTION,MULTIPLICATION AND DIVISION P\OF TWO NUMBER.*/
#include<iostream>
using namespace std;
int main(){
int a,b;
int sum,sub,multi;
float div,mod;
cout<<"ENTER A: "<<endl;
cin>>a;
cout<<"ENTER B: "<<endl;	
cin>>b;
sum=a+b;
sub=a-b;
multi=a*b;
mod=a%b;
div=a/b;
cout<<"SUM IS =: "<<sum<<endl;
cout<<"SUBTRACTION IS =: "<<sub<<endl;
cout<<"MULTIPLICATION IS =: "<<multi<<endl;
cout<<"DIVISION IS =: "<<double(div)<<endl;
cout<<"MODULUS IS =: "<<double(mod)<<endl;
return 0;



}
