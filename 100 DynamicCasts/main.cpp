#include <iostream> 
#include "dog.h"


int main()
{
    Animal * p_animal = new Feline("stripes","feline1");
    Feline* feline_ptr = dynamic_cast<Feline*> (p_animal);
    feline_ptr->do_some_feline_thingy();

    std::cout << "-----------"<<std::endl;
    Dog* feline_ptr2 = dynamic_cast<Dog*> (p_animal);
    if(feline_ptr2)
        feline_ptr2->do_some_dog_thingy();
    else
        std::cout << "Failed!"<<std::endl;

    Feline feline2("stripes","feline2");
    Animal & animal_ref = feline2;
    //std::cout << animal_ref << std::endl;
    Feline & feline_ref = dynamic_cast<Feline&> (animal_ref);
    feline_ref.do_some_feline_thingy();

    // Dog & feline_ref2 = dynamic_cast<Dog&> (animal_ref);
    // feline_ref2.do_some_dog_thingy();

    Feline* feline_ptr3= dynamic_cast<Feline*>(&animal_ref);
     if(feline_ptr3)
        feline_ptr3->do_some_feline_thingy();
    else
        std::cout << "Failed!"<<std::endl;

    Dog* feline_ptr4= dynamic_cast<Dog*>(&animal_ref);
    if(feline_ptr4)
        feline_ptr4->do_some_dog_thingy();
    else
        std::cout << "Failed!"<<std::endl;


    std::cout << "Done"<< std::endl;

    delete p_animal;

    return 0;
}