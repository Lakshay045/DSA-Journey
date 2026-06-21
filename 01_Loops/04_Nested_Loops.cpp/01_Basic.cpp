#include<iostream>
using namespace std;
int main() {

for(int i = 1; i <= 7; i++){      // outer rows 
     for(int j = 1; j <= 7; j++){  // inner columns
        cout << "*";
    }
    cout << endl;
}
}