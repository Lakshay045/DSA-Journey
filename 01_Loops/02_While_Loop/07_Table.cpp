#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int product = 7 ;

    while(i <= 10)
    {
        int b = product * i;
        cout << "7 * " << i <<" : "<< b <<  endl;
        
        i++;
    }
    

    return 0;
}