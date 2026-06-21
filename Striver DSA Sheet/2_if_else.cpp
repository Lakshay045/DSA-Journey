#include<iostream>
using namespace std;
int main()
{

int x ;
cin >> x ;

        if(x >= 90)
        {
            cout << "Grade A";
        }
        else if ( x >= 70){
            cout << "Grade B ";
        }
        else if ( x >= 50 ){
            cout << "Grade C";
        }
        else if ( x >= 35){
            cout << "Grade D";

        }
        else{
            cout<< "fail";
        }

    }