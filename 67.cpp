//20ucs141
//N2 Batch
//06-09-2021

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

string studentNameArr[10], studentBranchArr[10], studentRecord[10];

void fileRead()
{
    ifstream in("students.txt");
    string content;
    for (int i = 0; i <= 10; i++)
    {
        getline(in, content);
        studentRecord[i] = content;
    }
    in.close();
}

void fileWrite()
{
    ofstream out("students.txt");
    out << "Student ID";
    out << "\t";
    out << "Student Name";
    out << "\t";
    out << "Student Branch\n";

    for (int i = 0; i < 10; i++)
    {
        out << "LNM" << i + 1;
        out << "\t\t";
        out << studentNameArr[i];
        out << "\t\t\t\t";
        out << studentBranchArr[i];
        out << "\n";
    }
    out.close();
}

// inserting students name and branch data
void insertion()
{
    string studentName, studentBranch;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Student Name " << i + 1 << ": ";
        cin >> studentName;
        studentNameArr[i] = studentName;
        cout << "Enter Student Branch" << i + 1 << ": ";

        cin >> studentBranch;
        studentBranchArr[i] = studentBranch;
    }
    fileWrite();
    cout << "\nStudents Inserted!\n\n";
}

//modifying data
void modification()
{
    string userChoice;
    int studentId;
    cout << "Enter Student ID: ";
    cin >> studentId;
    cout << "Select Name or Branch: ";
    cin >> userChoice;
    transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::tolower);
    if (userChoice == "name")
    {
        string newName;
        cout << "Enter New Name: ";
        cin >> newName;
        studentNameArr[studentId - 1] = newName;
        fileWrite();
        cout << "\nName Modified!\n\n";
    }
    else
    {
        string newBranch;
        cout << "Enter new Branch: ";
        cin >> newBranch;
        studentBranchArr[studentId - 1] = newBranch;
        fileWrite();
        cout << "\nBranch Modified!\n\n";
    }
}

//deleting data
void deletion()
{
    int studentID;
    cout << "Enter the Student ID to be deleted: ";
    cin >> studentID;
    studentNameArr[studentID - 1] = "NULL";
    studentBranchArr[studentID - 1] = "NULL";
    fileWrite();
    cout << "\nStudent Deleted!\n\n";
}

//searching data by branch
void searchByBranch()
{
    string studentBranch;
    cout << "Enter Branch to filter: ";
    cin >> studentBranch;
    fileRead();
    cout << "Student ID \t\t Student Name \t\t\t\t Student Branch\n";
    for (int i = 0; i < 10; i++)
    {
        if (studentBranchArr[i] == studentBranch)
        {
            cout << studentRecord[i + 1] << "\n";
        }
    }
    cout << "\nFiltering finished\n\n";
}

//searching data by name
void searchByName()
{
    string studentName;
    cout << "Enter Branch to filter: ";
    cin >> studentName;
    fileRead();
    cout << "Student ID \t\t Student Name \t\t\t\t Student Branch\n";
    for (int i = 0; i < 10; i++)
    {
        if (studentNameArr[i] == studentName)
        {
            cout << studentRecord[i + 1] << "\n";
        }
    }
    cout << "\nFiltering finished\n\n";
}

//menu options
void menuDriver()
{
    int choice;
    do
    {
        cout << "*******MENU*******\n";
        cout << "1. Insertion\n";
        cout << "2. Modification\n";
        cout << "3. Deletion\n";
        cout << "4. Search by Branch\n";
        cout << "5. Search by Name\n";
        cout << "6. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insertion();
            break;

        case 2:
            modification();
            break;

        case 3:
            deletion();
            break;

        case 4:
            searchByBranch();
            break;

        case 5:
            searchByName();
            break;

        default:
            exit(0);
        }
    } while (1);
}

//main function
int main()
{
    while (1)
    {
        menuDriver();
    }
    return 0;
}
