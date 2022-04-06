#ifndef ENGINEER_H
#define ENGINEER_H

#include "Person.h"

class Engineer : public Person{

    friend std::ostream& operator<< (std::ostream& , const Engineer& operand);

    public : 
        Engineer();
        ~Engineer();
        Engineer(std::string_view fullname, int age , const std::string address,int contract_count);

        void build_something(){
            m_full_name = "John Snow";
            m_age = 45;
            //m_address = "absdfsdf";

        }
        // public : 
        //     using Person::add;
        // protected : 
        //     using Person::get_full_name;
        //     using Person::get_age;
        //     using Person::get_address;

        int get_contract_count() const{
            return contract_count;
        }
    
    private :
        int contract_count = 0;


};

#endif 