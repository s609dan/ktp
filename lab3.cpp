#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

double arcctg(double x) {
    return M_PI_2 - atan(x);  // M_PI_2 - це π/2
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
        y = arcctg(x + sqrt(x) - 1.4);
    } else {
        cout << "the value does not meet the condition" << endl;
        goto exit;
    }


    cout << "Результат: y = " << y << endl;
    exit:
    return 0;
}
