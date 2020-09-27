#include <csdtio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main()
{

int x;

cout << "Enter daily budget: ";
cin >> x;
cout << "The product of the dailly budget and itself is " << x*x << ".";

cout << endl;    

system("PAUSE");

return EXIT_SUCCESS;
}