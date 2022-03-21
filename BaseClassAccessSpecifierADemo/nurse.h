#ifndef NURSE_H
#define NURSE_H

#include "Person.h"

class Nurse : protected Person{

    friend std::ostream& operator<< (std::ostream& , const Nurse& operand);

    public:
        Nurse();
        ~Nurse();
        void treat_unwell_person(){
            m_full_name = "John Snow";
            m_age = 23;

        }
    private :
        int practice_certificate_id = 0;
};

#endif