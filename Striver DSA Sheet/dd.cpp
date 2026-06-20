#include<iostream>
using namespace std;

int main()
{
    int i ;
    cin >> i;
    
    int product   =  1;
    
    int count  ;
   int  answer  = i *  product;

    while(answer <= 100)
    {
           answer  = i *  product; 
        
        
         cout << answer << endl;

         product++;
         answer = i * product;
    }
   
    return 0;
}