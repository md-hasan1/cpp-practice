#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    string section;
    int mark;
    Student(int id, string name, string section, int mark)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->mark = mark;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int id, mark;
        string name, section;

        cin >> id >> name >> section >> mark;
        Student s1(id, name, section, mark);
        cin >> id >> name >> section >> mark;
        Student s2(id, name, section, mark);
        cin >> id >> name >> section >> mark;
        Student s3(id, name, section, mark);

      
        if (s1.mark > s2.mark && s1.mark > s3.mark)
        {
            cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.mark << endl;
        }
        else if (s2.mark > s1.mark && s2.mark > s3.mark)
        {
            cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.mark << endl;
        }
        else if (s3.mark > s1.mark && s3.mark > s2.mark)
        {
            cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.mark << endl;
        }
     
        else if (s1.mark == s2.mark && s1.mark > s3.mark)
        {
            if (s1.id <= s2.id)
            {
                cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.mark << endl;
            }
            else
            {
                cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.mark << endl;
            }
        }

        else if (s1.mark == s3.mark && s1.mark > s2.mark)
        {
            if (s1.id <= s3.id)
            {
                cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.mark << endl;
            }
            else
            {
                cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.mark << endl;
            }
        }
       
        else if (s2.mark == s3.mark && s2.mark > s1.mark)
        {
            if (s2.id <= s3.id)
            {
                cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.mark << endl;
            }
            else
            {
                cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.mark << endl;
            }
        }
    
        else if (s1.mark == s2.mark && s1.mark == s3.mark)
        {
      
            if (s1.id <= s2.id && s1.id <= s3.id)
            {
                cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.mark << endl;
            }
            else if (s2.id <= s1.id && s2.id <= s3.id)
            {
                cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.mark << endl;
            }
            else
            {
                cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.mark << endl;
            }
        }
    }

    return 0;
}
