#include <iostream>
#include <iomanip>
#include "average.h"
using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    float a, b, c;

    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;

    cout << "Average: " << find_average(a, b, c) << endl;

    return 0;
}
