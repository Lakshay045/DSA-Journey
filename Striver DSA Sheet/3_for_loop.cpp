#include<iostream>
using namespace std ;
int main (){

    int low , high ;
        cin >> low ;
        cin >> high ;
        int sum = 0 ;

        for(low ; low<=high ; low++)
        {
            sum = sum + low ;
           
        }
           cout << sum ;
    }
