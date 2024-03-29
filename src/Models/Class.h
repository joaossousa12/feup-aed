#ifndef PROJETOAED_CLASS_H
#define PROJETOAED_CLASS_H
#include <string>
#include <list>
#include <vector>
#include "Models/Student.h"
#include "Models/Schedule.h"

using namespace std;

class Class {
    private:
        string code;
        list<Student> students;
        vector<Schedule> schedule;
    public:
        Class(string code);

        string getCode();
        list<Student> getStudents();
        vector<Schedule> getSchedule();

        void addStudent(Student student);
        void addSchedule(Schedule schedule1);
        void removeStudent(Student student);
        void removeStudent(unsigned long studentCode);
        void setStudents(list<Student> students);
};


#endif
