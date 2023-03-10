#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n,i;
    char* s[20][11];
    cout << "Enter an amount of words (up to 20) ";
    cin >> n;
    cout << "Enter your words (max symbols: 10)" << endl;
    for (i = 0;i < n;i++) scanf("%s", *s[i]);
    for (i = 1;i < n;i += 2) cout << s[i] << endl;
    cout << s[1] << endl;
}
