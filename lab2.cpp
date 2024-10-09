#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

int main() {

  float w, u;
  char letter=0;
  myLabel_1: cout << "Enter w = ";
  cin >> w;

  if (w <= 0 ) {
    u = w - cos(w);
  } else if (w > 0) {
    u =  sqrt(w) + log10(w + sin(w));
  }

  cout << "When w = " << w << " the function u = " << u << endl;
  cout << endl;

  myLabel_2: cout << "Continue calculation? (Y/N) ";
  cin >> letter;
  switch (letter) {
    case 'Y':
    case 'y': goto myLabel_1;
    break;
    case 'N':
    case 'n': ;
    break;
    default: cout << endl << "Invalid input" << endl;
    goto myLabel_2;
  }
  cout << endl;
  return 0;
}
