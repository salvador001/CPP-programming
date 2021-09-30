#include <iostream>
using namespace std;

int main()
{
    
    int a , b ;

    cout << "Before swapping." << endl;
      cout<<"enter the number "<< endl;
    cin>> a >> b;
    cout << "a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}