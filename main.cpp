#include <iostream>
using namespace std;
int main()
{
    double weight_kg;
    double weight_pd;
    cout << "Please enter your weight in kilograms : ";
    cin >> weight_kg;

    weight_pd = weight_kg * 2.2;
    cout << "your weight in pounds is : " << weight_pd << endl;
    return 0;
}