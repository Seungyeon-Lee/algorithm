#include <iostream>
using namespace std;

// 직사각형 별찍기

int main() {
    
    int a;
    int b;
    
    cin >> a >> b;
    
    for(int i = 0; i<b; i++)
    {
        for(int j = 0; j<a; j++)
            cout << "*";
        
        cout << endl;
    }
    
    return 0;
}
