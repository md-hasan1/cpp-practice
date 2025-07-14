#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int jersey;
    string country;
    Student(int jersey, string country)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{

    Student *rakib = new Student(100, "RAKIB");
    Student *sakib = new Student(200, "SAKIB");
    sakib=rakib;
    cout << sakib->jersey<<" "<<rakib->jersey << endl;
    return 0;
}