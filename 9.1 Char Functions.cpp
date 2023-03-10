#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    const char* str1 = "Hello World!";
    const char* str2 = "Banana bread";
    int l = strlen(str1);
    int c = strcmp(str1, str2);
    int i;
    char* str3;
    str3 = new char[10];
    strcpy_s(str3, 10, "Words");
    cout << "First string: " << str1 << endl << "Second string: " << str2 << endl;
    cout << "strlen " << str1 << " " << l << endl;
    cout << "strcmp " << str1 << " " << str2 << " " << c << endl;
    cout << "strcpy " << str3 << endl;
}