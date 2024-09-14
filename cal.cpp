#include <iostream>
using namespace std;

int main()
{
    int math, hindi, english, physics, chemistry;
    cout << "Math: ";
    cin >> math;

    cout << "Hindi: ";
    cin >> hindi;

    cout << "English: ";
    cin >> english;

    cout << "Physics: ";
    cin >> physics;

    cout << "Chemistry: ";
    cin >> chemistry;

    int total = math + hindi + english + physics + chemistry;
    float percentage = (total / 500.0) * 100;
    cout << "Percentage: " << percentage <<"%" <<endl;

    return 0;
}