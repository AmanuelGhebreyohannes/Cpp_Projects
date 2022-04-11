#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"

class CivilEngineer : public Engineer{

    friend std::ostream& operator<<(std::ostream&, const CivilEngineer& operand);
    public:
        CivilEngineer();
        ~CivilEngineer();
        
        void build_road(){

            add(10,20);
            add(12,1,2);
        }

    
    private : 
        std::string m_speciality = "None";
};

#endif // CIVIL_ENGINEER_H