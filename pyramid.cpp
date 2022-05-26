#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the number of height of pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << std::endl;
    }

    return 0;
}