#include <iostream>
using namespace std;

int main()
{
    int a , b , temp;

    cout << "Before swapping." << endl;
    cout<<"enter the number "<< endl;
    cin>> a >> b;

        cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}