#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int product = 1 ;

    while(i <= 5)
    {
        product = product * i;
        
        i++;
    }
    cout << product << endl;

    return 0;
}