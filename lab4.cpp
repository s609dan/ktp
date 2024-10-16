#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;


int main()
{

    int l, k, n, y;

    cout << "Please enter l = " ;
    cin >> l;

    cout << "Please enter k = " ;
    cin >> k;
    
    while (l <= k){
        n = l;
        if (((pow(n,2) - n - 6)) != 0) {
            y = (pow(n,2) - n) / (pow(n,2) - n -6);
        } else {
            cout << "y не може бути 0" << endl;
        }
        cout << "krok = " << l << endl;
        cout << "y = " << y << endl;
        l++;
    }

    return 0;
}
