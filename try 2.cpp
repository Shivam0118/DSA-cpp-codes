#include <iostream>
using namespace std;
int main()
{
int arr[4] = {1, 2, 3, 4};
int ind;
cin >> ind;
try
{
if (ind < 0)
{
throw string("-ve index is not allowed possible");
}
else
{
cout << "correct " << arr[ind];
}
}
catch (string str)
{
cout << str;
}
}
