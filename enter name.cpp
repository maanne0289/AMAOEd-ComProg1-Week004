#include <csdtio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main()
{

string str1, str2, str3;

cout << "Enter name: ";
getline (cin, str1);
cout << "Enter password: ";
getline (cin, str2);
cout << "Enter address: ";
getline (cin, str3);
cout << "Hi, I am " << str1 << ". I live at " << str3 << ".";

cout << endl;    

_pause();

return EXIT_SUCCESS;
}