//
// Created by admin on 2023/2/15.
//
#include <iostream>

#include <string>

using namespace std;

class Cube{
public:
    void setl(int a){
        m_L = a;
    }
    int getl(){
        return  m_L;
    }

    void setw(int a){
        m_W = a;
    }
    int getw(){
        return m_W;
    }
    void seth(int a){
        m_H = a;
    }
int geth(){
    return m_H;
    }
int getmianji(){
    return 2*m_L*m_W+2*m_W*m_H+2*m_L*m_H;
    }
private:

    int m_L;
    int m_W;
    int m_H;

};

int main(){
    Cube c1;
    c1.setl(10);
    c1.setw(10);
    c1.seth(10);
    cout<<"Ãæ»ıÊÇ"<<c1.getmianji()<<endl;




}