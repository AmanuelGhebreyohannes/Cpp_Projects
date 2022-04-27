#ifndef ENGINEER_H
#define ENGINEER_H

#include "Person.h"

class Engineer : private Person{

    friend std::ostream& operator<< (std::ostream& , const Engineer& operand);

    public : 
        Engineer();
        ~Engineer();

        void build_something(){
            m_full_name = "John Snow";
            m_age = 45;
            //m_address = "absdfsdf";

        }
    
    private :
        int contract_count = 0;


};

#endif 