#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n,i;
    char s[20][11];
    cout << "Enter an amount of words (up to 20) ";
    cin >> n;
    cout << "Enter your words (max symbols: 10)" << endl;
    for (i = 0;i < n;i++) cin >> s[i];
    cout << endl;
    for (i = 1;i < n;i += 2) cout << s[i] << endl;
}
