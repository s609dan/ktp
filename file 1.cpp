#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
    cout <<"line1 Hello World " << endl ; // віртуальний ентер(перенос рядка)
    std::cout <<"line2 Hello World "; // можна std::cout або просто cout якщо ми додали using std::cout;

    return 0;
}


int main()
{ 
    int age;
    cout <<"Hello, enter your age " << endl ; // віртуальний ендер(перенос рядка)
    cin >> age;
    cout << "Your age is" << " " << age;
    return 0;
}

// опис IF
    // варіант 1 - тільки якщо одна команда
    if (age >= 18) cout << "you old"; // 

    // варіант 2 - якщо більше однієї команди
    if (age >= 18) {
        cout << "you old";
        age = age + 10;
    }

// якщо перша умова не спрацювала то завжди спрацює друга, там що в else
    if (age >= 18) {
        cout << "you old";
    } else {
        cout << "you young";
    }

// else - це та умова яка виконаєтсья завджи якщо не виконались попередні

// програма 2

int main()
{ 
    int age;
    cout <<"Hello, enter your age " << endl ; // віртуальний ендер(перенос рядка)
    cin >> age;
    cout << "Your age is" << " " << age << endl;

    if (age >= 18) {
        cout << "you old";
    } else if ((age < 18) && (age > 0)) {
        cout << "you young";
    } else {
        cout << "incorect age";
    }

    return 0;
}



// switch - це конструкція яка замінює декілька IF
    // приклад коду
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

    // це можна замінити на 
      if ((letter == 'Y') || (letter == 'y')) {
          goto myLabel_1;
      } else if ((letter == 'N') || (letter == 'n')) {
          exit;
      } else {
          cout << endl << "Invalid input" << endl;
          goto myLabel_2;
      }
