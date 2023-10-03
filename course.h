#pragma once

#include<iostream>
#include<iomanip>
#include<fstream>
#include<format>

class course
{
    std::string name;
    std::string code;
    int credit;

    public:

        void get_course_details(int);
        int get_credit();
        void print_course_details();
};

void course::get_course_details(int e)
{
    if(e==1)
    {
        fstream r;
        r.open("student.txt",ios::out | ios::app);

        std::cout<<"\n\nCOURSE NAME  :";
        std::cin>>name;
        std::cout<<"\n\nCOURSE CODE :";
        std::cin>>code;
        std::cout<<"\n\nCOURSE CREDIT :";
        std::cin>>credit;

        r<<"\n\n"<<name<<"\t"<<code<<"\t"<<credit;
        r.close();
    }
    else if(e==2)
    {

        fstream r;
        r.open("faculty.txt",ios::out | ios::app);

        std::cout<<"\n\nCOURSE NAME  :";
        std::cin>>name;
        std::cout<<"\n\nCOURSE CODE :";
        std::cin>>code;
        std::cout<<"\n\nCOURSE CREDIT :";
        std::cin>>credit;

        r<<"\n\n"<<name<<"\t"<<code<<"\t"<<credit;
        r.close();
    }
}

int course::get_credit() const
{
    return credit;
}

void course::print_course_details() const
{
    std::cout<<std::format("\n NAME:{:>15}{0}\n\n", name);
    cout<<"\nCODE:"<<setw(15)<<code<<"\n\n";
    cout<<"\nCREDIT:"<<setw(15)<<credit<<"\n\n";
}


