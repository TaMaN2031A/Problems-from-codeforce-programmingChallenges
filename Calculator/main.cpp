#include <iostream>

using namespace std;

int main()
{
    double x1, x2, res, ount = 0;
    int operation;
    bool b = true;
    cout << "Dear GYgY, Please Enter: \n"
            "1 for addition\n"
            "2 for substraction\n"
            "3 for multipilcation\n"
            "4 for division\n";
    cin >> operation;

    while(cin.fail())
        {
            if(ount != 0)
                cout << "Please insert a right input!";
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Dear GYgY, Please Enter: \n"
            "1 for addition\n"
            "2 for substraction\n"
            "3 for multipilcation\n"
            "4 for division\n"
            "5 for end program\n";
            cin >> operation;
        }
        cout << "Please insert the numbers\n";
        cin >> x1 >> x2;
        while(cin.fail())
        {
            if(ount != 0)
                cout << "Please insert a right input!";
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Dear GYgY, Please Enter: numbers\n";
            cin >> x1 >> x2;
        }
    switch(operation)
    {
    case 1:
        res = x1 + x2;
        break;
    case 2:
        res = x1 - x2;
        break;
    case 3:
        res = x1 * x2;
        break;
    case 4:
        if(x2 == 0)
            cout << "Can't divide by zero\n";
        else
            res = x1 / x2;
        break;
    case 5:
        cout << "Thank you, bye\n";
        b = false;
        break;
    default:
        cout << "Stop Jocking !!!!!\n";
        break;
    cout << "The result is:" << res << "\n";
    }

    return 0;
}
