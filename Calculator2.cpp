#include <iostream>

using namespace std;

int main()
{

    float islem;
    float num1;
    float num2;

    while (true)
    {

        cout << "1.toplama +" << endl;
        cout << "2.cýkarma -" << endl;
        cout << "3.carpma *" << endl;
        cout << "4.bolme /" << endl;
        cout << "0.cýkýs" << endl;

        cin >> islem;

        if (islem == 0)
            break;

        cout << "Birinci sayi:" << endl;
        cin >> num1;
        cout << "Ýkinci sayi" << endl;
        cin >> num2;

        switch (islem)
        {
        case 1:
            cout << num1 << "+" << num2 << "=" << num1 + num2;
            break;
        case 2:
            cout << num1 << "-" << num2 << "=" << num1 - num2;
            break;
        case 3:
            cout << num1 << "*" << num2 << "=" << num1 * num2;
            break;
        case 4:
            cout << num1 << "/" << num2 << "=" << num1 / num2;
            break;
        default:

            break;
        }
    }

    return 0;
}