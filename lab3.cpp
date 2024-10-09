#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

double arccot(double x) {
    return M_PI / 2 - atan(x);
}

int main()
{
    float t, x, y;
    cout << "Please enter t = ";
    cin >> t;
    x = t + 0.7;
    cout << "x = " << x << endl;

    
    if (x < 0) {
        y = x - exp(x);
    } 
    else if (x >= 2 && x < 5 && x != 3) {
        y = arccot(x + sqrt(x - 1.4));
    } 
    else {
        cout << "Значення x не підпадає під задані умови." << endl;
        return 1;
    }

    cout << "Результат: y = " << y << endl;
    return 0;
}
