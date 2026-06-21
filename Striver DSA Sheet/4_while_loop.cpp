#include<iostream>
using namespace std;

int main()
{
    int d ;

    cin >> d ;
    int sum = 0 ;
    int b = 1 ;  

    while( b <= 50 ){

        sum = sum + d;
        b = b + 1;

        
        d = d + 10;
    }
    cout << sum ;

    

    return 0;
}