#include <iostream>
#include <iomanip>
#include <ios>
int main()
{
    std::cout << "Hello World"<<std::endl;
    std::cout <<"----------"<<std::endl;
    std::cout <<"This is a nice message...."<<std::endl<<std::flush;
    std::cout << std::setw(10)<<"Lastname "<<std::setw(10)<<"First name"<<std::endl;
    std::cout <<std::setw(10)<<"a"<<std::setw(10)<<"b"<<std::endl;
    std::cout <<std::left;
    std::cout << std::setw(10)<<"Lastname "<<std::setw(10)<<"First name"<<std::endl;
    std::cout <<std::setw(10)<<"a"<<std::setw(10)<<"b"<<std::endl;
    std::cout<<std::internal;
    std::cout <<std::setw(10)<<-123.45<<std::setw(10)<<"b"<<std::endl;
    std::cout<<std::setfill('-');
    std::cout <<std::setw(10)<<-123.45<<std::setw(10)<<"b"<<std::endl;
    int pos_num = 34;
    int neg_num = -45;
    std::cout << std::showpos;
    std::cout << pos_num<< " " << neg_num<<std::endl;
    std::cout<<std::noshowpos;
    std::cout << pos_num<< " " << neg_num<<std::endl;
    std::cout << std::dec<<neg_num<<std::endl;
    std::cout<<std::hex<<neg_num<<std::endl;
    std::cout<<std::oct<<neg_num<<std::endl;
    std::cout << std::uppercase;
    std::cout << std::dec<<neg_num<<std::endl;
    std::cout<<std::hex<<neg_num<<std::endl;
    std::cout<<std::oct<<neg_num<<std::endl;
    float num = 123.45;

    std::cout <<std::fixed<<num <<std::endl;
    std::cout << std::scientific<<num <<std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::scientific);

    std::cout << (1&&1)<<std::endl;
    std::cout <<(1&1)<<std::endl;

    return 0;
}