#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    int equalOrNot = a.compare(b);

    if (equalOrNot == 0) {
      cout <<"0";
    } else if (equalOrNot > 0) {
      cout << "1";
    } else {
      cout << "-1";
    }

    return 0;
}
