#include<iostream>

int main()
{
    // int elephant_count;
    // int lion_count{}; //0
    // int dog_count{10};
    // int cat_count{15};
    // int domesticated_animals(dog_count+cat_count);
    // //int narrowing_conversion {2.9};
    // std::cout<<elephant_count<<std::endl;

    // int dog_count(10);
    // int cat_count(15);
    // int domesticated_animals(dog_count+cat_count);
    // int narrowing_conversion (2.9);
    // std::cout<<narrowing_conversion<<std::endl;

    int narrowing_conversion = 2.9;
    std::cout<<narrowing_conversion<<std::endl;

    std::cout<<sizeof(int)<<std::endl;
    std::cout<<sizeof(narrowing_conversion)<<std::endl;

    return 0;

}