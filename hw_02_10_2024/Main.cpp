#include "MyString.h"
#include <iostream>
using namespace std;

int main()
{
    MyString str1("Hello-");
    MyString str2("Goodbye");

    cout << "String 1 : ";
    str1.Print();

    cout << "String 2 : ";
    str2.Print();

    str1 += str2;
    cout << "After the merger : ";
    str1.Print();

    str1.MyDelChr('l');
    cout << "After removal 'l' : ";
    str1.Print();

    int cmp = str1.MyStrCmp(str2);
    cout << "Comparison result : " << cmp << endl;

    bool found = str1.MyStrStr("Hello");
    cout << "Substring 'Hello' found : " << (found ? "Yes" : "No") << endl;

    cout << "Number of objects : " << MyString::GetObjectCount() << endl;
    return 0;
}