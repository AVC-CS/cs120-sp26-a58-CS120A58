#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // === Part 1: Write student data to students.txt ===
    int N;
    double score1, score2;
    string stuName;
    ofstream ofs;

    // TODO: open "students.txt" for writing

    cout << "Enter the total number of students:";
    // TODO: read N from cin, write N to ofs

    for (int i = 0; i < N; i++)
    {
        cout << "Enter the student name and two scores: ";
        // TODO: read stuName, score1, score2 from cin; write them to ofs
    }
    // TODO: close ofs

    // === Part 2: Read student data from students.txt and print stats ===
    int M;
    double sum, avg;
    ifstream ifs;

    // TODO: open "students.txt" for reading

    // TODO: read M (total students) from ifs, print "Total M students"

    for (int i = 0; i < M; i++)
    {
        // TODO: read stuName, score1, score2 from ifs
        // TODO: compute sum = score1 + score2, avg = sum / 2.0
        // TODO: print "Student Name: <name>  score1: <s1>  score2: <s2>  Sum: <sum>  Avg: <avg>"
    }
    ifs.close();

    return 0;
}
