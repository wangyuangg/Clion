#include <iostream>
using namespace std;


class person
{

public:
    person()
    {
        cout<<"Person默认构造函数调用"<<endl;

    }
    person(int age)
    {
        age = age;
        cout<<"有参构造函数"<<endl;
    }
    person(person &p)
    {
        age = p.age;
        cout<<"拷贝函数"<<endl;

    }
    ~person()
    {
        cout<<"Person析构函数调用"<<endl;
    }
    int age;

};

void test01()
{
    person p1(20);
    person p2(p1);
}

int main(){


    test01();
    system("pause");
    return 0;
}
