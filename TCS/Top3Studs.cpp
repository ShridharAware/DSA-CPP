#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int k, s;
    cout << "Top students : ";
    cin >> k;
    cout << "Number of students : ";
    cin >> s;

    vector<pair<string, int>> students;
    for (int i = 0; i < s; i++)
    {
        pair<string, int> student;
        cout << "Enter name of " << i + 1 << " student : ";
        cin >> student.first;
        cout << "Enter score of " << i + 1 << " student : ";
        cin >> student.second;
        students.push_back(student);
    }

    sort(students.begin(), students.end(), [](const pair<string, int> &a, const pair<string, int> &b)
         { return a.second > b.second; });

    for (int i = 0; i < k; i++)
    {
        cout << students[i].first << "  " << students[i].second << endl;
    }
}