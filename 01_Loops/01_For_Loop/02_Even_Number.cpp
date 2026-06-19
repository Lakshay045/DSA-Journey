#include<iostream>
using namespace std;

int main(){

int i ;

for(i = 2 ; i <= 10 ; i++)
{
    if (i % 2 == 0)
    {
    cout << i << endl;     // Even Number
    }
}
};



// Second Method


#include<iostream>
using namespace std;

int main(){

int i ;

for(i = 2 ; i <= 10 ; i += 2)
{
    
    
    cout << i << endl;     
    
}
};
