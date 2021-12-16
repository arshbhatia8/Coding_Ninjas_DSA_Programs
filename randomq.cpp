#include <iostream>>
using namespace std;
int main()
{
    int aravspeed, aaronspeed, speeddiff;
    cin >> aravspeed;
    cin >> aaronspeed;

    speeddiff = aravspeed - aaronspeed;
    if (aravspeed > aaronspeed)
    {
        cout << speeddiff;
    }
    else
    {
        printf("%d", aaronspeed - aravspeed);
    }
    return 0;
}