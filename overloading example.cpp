#include <iostream>
using namespace std;

class A
{
public:
void sum(int a, int b)
{
cout << a + b << " ";
}
void sum(float a, float b)
{
cout << a + b;
}
};

int main()
{
A su;
int a, b;
float c, d;
cin >> a >> b >> c >> d;
su.sum(a, b);
su.sum(c, d);
}
