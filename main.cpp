#include <iostream>
using namespace std;


class person
{

public:
    person()
    {
        cout<<"PersonĬ�Ϲ��캯������"<<endl;

    }
    person(int age)
    {
        age = age;
        cout<<"�вι��캯��"<<endl;
    }
    person(person &p)
    {
        age = p.age;
        cout<<"��������"<<endl;

    }
    ~person()
    {
        cout<<"Person������������"<<endl;
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
