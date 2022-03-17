#include <iostream>
#include <string_view>
class Dog{
    public:
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int p_age_param);
        ~Dog();
        // Dog* set_dog_name(std::string_view name){
        //     this->name = name;
        //     return this;
        // }

        // Dog* set_dog_breed(std::string_view breed)
        // {
        //     this->breed = breed;
        //     return this;
        // }
        // Dog* set_dog_age(int age)
        // {
        //     *(this->p_age) = age;
        //     return this;
        // }
        Dog& set_dog_name(std::string_view name){
            this->name = name;
            return *this;
        }

        Dog& set_dog_breed(std::string_view breed)
        {
            this->breed = breed;
            return *this;
        }
        Dog& set_dog_age(int age)
        {
            *(this->p_age) = age;
            return *this;
        }
        void print_info(){
            std::cout << this << " name "<< name << std::endl;
        }

        
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
    std::cout <<"Dog constructor called "<<name<<" at "<< this<<std::endl;
}

Dog::~Dog()
{
    delete p_age;
    std::cout <<"Dog destructor called "<<name<<" at "<< this<<std::endl;
    p_age = nullptr;

    
}


int main()
{
    Dog dog1("Fluffy","Shepherd",2);
    dog1.print_info();
    // dog1.set_dog_name("mine")->set_dog_breed("wire fox");
    dog1.set_dog_name("mine").set_dog_breed("wire fox");
    dog1.print_info();


    std::cout << "done!"<<std::endl;
    
    return 0;
}