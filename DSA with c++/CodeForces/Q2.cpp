#include <iostream>
using namespace std;

int main()
{
    short t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() > 10)
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << '\n';
        else
            cout << s << '\n';
    }
    return 0;
}
