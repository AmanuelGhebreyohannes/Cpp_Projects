#ifndef PARENT_H
#define PARENT_H
#include <iostream>

class Parent
{

    public:
        Parent(){};
        Parent(int member_var): m_member_var(member_var){

        }

        ~Parent(){};

        void print_var()const{
            std::cout <<" The value in parent is : "<< m_member_var<<std::endl;
        }
    protected:
        int m_member_var=100;    
};

#endif