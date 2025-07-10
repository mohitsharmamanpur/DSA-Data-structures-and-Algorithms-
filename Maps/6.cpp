// Map of Maps.
#include<iostream>
#include<map>
using namespace std;
int main()
{

map<string, map<string, int>> studentMarks;

studentMarks["Mohit"]["Math"] = 90;
studentMarks["Mohit"]["Physics"] = 85;
studentMarks["Manas"]["Math"] = 88;

for (auto& student : studentMarks) {
    cout << "Student: " << student.first << endl;
    for (auto& subject : student.second) {
        cout << "  " << subject.first << " -> " << subject.second << endl;
    }
}
}