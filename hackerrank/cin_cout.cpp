#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int a , b ,c ;
    cin >> a >> b >> c ;
    
    if ( (a < 1 || a > 1000) || (b < 1 || b > 1000) || (c < 1 || c > 1000) )
    {
        cout << "The inputs is wrong , please modify your input to be correct " << endl;
    } 
    
    
    int sum = a+b+c;
    
    cout << sum << endl;

    return 0;
}
