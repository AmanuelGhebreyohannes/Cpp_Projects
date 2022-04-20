#ifndef BULL_DOG_H
#define BULL_DOG_H
#include "dog.h"

class BullDog : public Dog
{
    public :
        BullDog() = default;
        virtual ~BullDog(){

        };

        //will throw a compiler error
        // virtual void run() const override{
        //     std::cout << "Bulldog::run() called "<< std::endl;
        // }

};

#endif