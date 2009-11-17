#include <iostream>
#include <math.h>

using namespace std;

int
is_prime(long x)
{
    int i;

    if (x < 2)
        return 1;

    for(i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
            return 0;
    }
    
    return 1;
}

int
main()
{
    long x;

    while(cin >> x)
    {
        if (is_prime(x))
            cout << "���" << endl;
        else
            cout << "�D���" << endl; 
    }
    
    return 0;
}
