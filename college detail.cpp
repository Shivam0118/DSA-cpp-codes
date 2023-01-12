#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
char name[100];
ofstream out("college.txt");
for(int i=1;i<=3;i++)
{
cout<<"Enter college name "<<i<<": ";
gets(name);
out<<name<<"\n";
}
out.close();
out.open("university.txt");
ifstream in("college.txt");
while(in)
{
in.getline(name,99);
out<<name<<"\n";
}
out.close();
in.close();
in.open("university.txt");
cout<<"\nColleges name from university.txt file:\n"<<endl;
while(in)
{
in.getline(name,99);
cout<<name<<"\n";
}
return 0;
}
