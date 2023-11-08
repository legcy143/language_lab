#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    string name = "", rollNo = "", course = "B.TECH", branch = "CSE", status = "Regular";
    int sem = 3;
    Student(string branch)
    {
        this->branch = branch;
        cout << "\n ! Please Enter Detail To Continue ! \n\n";
        cout << "Enter Your name  : ";
        // cin >> this->name;
        getline(cin, this->name);
        cout << "Enter Your Roll Number : ";
        getline(cin, this->rollNo);
    }
};

class TheorySubject
{
protected:
    string sub = "", subCode = "";
    int theory = 0, midSem = 0, tQ = 0, earnedCredit = 0 , totalCredit = 0;
    string theoryGrade = "F";

    void setTheoryGrade()
    {
        int totalMarks = theory + midSem + tQ;
        if (totalMarks >= 41 && earnedCredit)
        {
            if (totalMarks >= 91)
                this->theoryGrade = "A+";
            else if (totalMarks >= 81)
                this->theoryGrade = "A";
            else if (totalMarks >= 71)
                this->theoryGrade = "B+";
            else if (totalMarks >= 61)
                this->theoryGrade = "B";
            else if (totalMarks >= 51)
                this->theoryGrade = "C+";
            else
                this->theoryGrade = "C";
        }
    }

    void getMarks(int &marks, string format, int maxMarks)
    {
        cout << "In " << format << " : ";
        cin >> marks;
        while (marks < 0 || marks > maxMarks)
        {
            cout << " ! marks must be between 0 to " << maxMarks << "\n * plese re-enter " << format << " marks : ";
            cin >> marks;
        }
    }

public:
    TheorySubject(string sub, string subCode, int totalCredit = 4)
    {
        this->sub = sub;
        this->subCode = subCode;
        this->totalCredit = totalCredit;
        cout << "Enter your marks of " << this->sub << endl;

        // getmarks(subject variable , subject name , max marks);

        getMarks(theory, "theory", 70);
        getMarks(midSem, "mid sem", 20);
        getMarks(tQ, "tQ", 10);
        if (theory >= 18)
        {
            this->earnedCredit = this->totalCredit;
        }
        setTheoryGrade();
    }

    // showResult
    void showResult()
    {
        // TC = EC total credit and earned credit
        cout << "subject: " << subCode << " TC/EC : " << totalCredit << "/" << earnedCredit << " Grade : " << theoryGrade << endl;
    }
    int TotalMarks()
    {
        int totalmarks = theory + midSem + tQ;
        return totalmarks;
    }
};

class PracticleSubject
{
protected:
    string sub = "", subCode = "";
    int viva = 0, tw = 0, credit = 0;
    string PracticleGrade = "F";

    void setPracticleGrade()
    {
        int totalMarks = viva + tw;
        if (totalMarks >= 21 && credit)
        {
            if (totalMarks >= 46)
                this->PracticleGrade = "A+";
            else if (totalMarks >= 41)
                this->PracticleGrade = "A";
            else if (totalMarks >= 36)
                this->PracticleGrade = "B+";
            else if (totalMarks >= 31)
                this->PracticleGrade = "B";
            else if (totalMarks >= 26)
                this->PracticleGrade = "C+";
            else
                this->PracticleGrade = "C";
        }
    }

    void getMarks(int &marks, string format, int maxMarks)
    {
        cout << "In " << format << " : ";
        cin >> marks;
        while (marks < 0 || marks > maxMarks)
        {
            cout << " ! marks must be between 0 to " << maxMarks << "\n * plese re-enter " << format << " marks : ";
            cin >> marks;
        }
    }

    // constructer
    PracticleSubject(string sub, string subCode, int maxCredit = 1)
    {
        this->sub = sub;
        this->subCode = subCode;
        this->credit = maxCredit;
        cout << "Enter your marks in practicle exams formats \n";

        // getmarks(subject variable , subject name , max marks);

        getMarks(viva, "viva", 30);
        getMarks(tw, "tw", 20);
        if (viva + tw >= 18)
        {
            this->credit = maxCredit;
        }
        setPracticleGrade();
    }
};

int createCgpa()
{
    // code ............
}

int main()
{
    cout << "\nProject - by Arjun sir November-2023 \n ***** Marks calculater *****\n";

    Student stu("CSE");
    TheorySubject eee("Energy & Environmental Engineering", "ES301[T]");
    TheorySubject ds("Discrete Structure", "CS302[T]");
    TheorySubject dsa("Data Structure", "CS303[T]");
    TheorySubject dse("Digital Systems", "CS304[T]");
    TheorySubject oopm("Object Oriented Programming & Methodology", "CS305[T]");

    cout << "\n\n ***** Result *****\n\n";
    // student detail
    cout <<"Name : " << stu.name<<"  Roll.no : " << stu.rollNo << "\n"
         <<"Course :"<< stu.course<<"  Branch : "<<stu.branch<<"\n\n";
        // marks
        eee.showResult();
    ds.showResult();
    dsa.showResult();
    dse.showResult();
    oopm.showResult();

    cout << "\n\nTC = total credit , EC = earned credit";
    cout << "\n ***** Thank you *****\n\n";
}