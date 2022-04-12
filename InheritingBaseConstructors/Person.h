#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
#include <string_view>


class Person{
    friend std::ostream& operator <<(std::ostream& out, const Person& person);
    public:
        Person();
        Person(std::string_view fullname, int age , const std::string address);
        Person(const Person& source);
        ~Person();

        //Getters
        std::string get_full_name() const{
            return m_full_name;
        }
        std::string get_address() const{
            return m_address;
        }
        int get_age() const{
            return m_age;
        }
        void set_full_name(std::string name)
        {
            m_full_name = name;
        }
        void set_age(int age)
        {
            m_age = age;
        }
        void set_address(std::string address)
        {
            m_address = address;
        }
        int add(int a, int b, int c) const{
            return a+b+c;
        }
        int add(int a, int b) const{
            return a+b;
        }
    public:
        std::string m_full_name = "None";
    protected: 
        int m_age = 0;
    private: 
        std::string m_address = "None";

};


#endif