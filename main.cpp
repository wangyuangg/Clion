//
// Created by admin on 2023/2/14.
//
#include<iostream>
#include<string>
using namespace std;

class Phone{
public:
     Phone(string name)
    {
        branch = name;
    }
    string branch;

};

class Person
{
public:
    //Phone m¡ª¡ªPhone = pName;
    Person(string name,string pName): m_name(name), m_phone(pName)
    {

    }
    string m_name;

    Phone m_phone;


};

void test01()
{
    Person p("ÕÅÈý","Æ»¹ûmax");
    cout <<p.m_name<<p.m_phone.branch;

}
int main2() {

    test01();
    system("pause");
    return 0;

}

