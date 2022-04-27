#include <iostream>
#include <string_view>
class Dog{
    public:
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int p_age_param);
        ~Dog();
    
    private:
        std::string name;
        std::string breed;
        int * p_age = nullptr;

};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int p_age_param)
{
    name = name_param;
    breed=breed_param;
    p_age = new int;
    *p_age=p_age_param;
    std::cout <<"Dog constructor called"<<std::endl;
}

Dog::~Dog()
{
    delete p_age;
    std::cout <<"Dog destructor called"<<std::endl;
    p_age = nullptr;

    
}
void some_func2(Dog dog_param)
{

}

void some_func3()
{
    Dog* p_dog = new Dog("Fluffy","Shepherd",2);

    delete p_dog;
}

void some_func()
{
    Dog my_dog("Fluffy","She",2);
}

int main()
{
    Dog my_dog("Fluffy","Shepherd",2);
    //some_func();
    //some_func2(my_dog);
    some_func3();

    std::cout << "Done!"<<std::endl;
    return 0;
}