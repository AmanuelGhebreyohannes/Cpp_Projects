#include <iostream>
#include <string>

void max_str(const std::string& input1, const std::string& input2, std::string& output)
{
    if(input1 > input2)
    {
        output = input1;
    }
    else{
        output = input2;
    }

}

void max_int(int input1, int input2, int* output)
{
    if(input1 > input2)
    {
        *output = input1;
    }
    else{
        *output = input2;
    }
    //return output;
}   

int main()
{
    std::string input1 = "CAssablanca";
    std::string input2 = "believe";
    std::string output_str = "";

    max_str(input1,input2,output_str);
    std::cout << output_str << std::endl;


    int out_int;
    int in1=45;
    int in2 =345;
    //out_int = max_int(in1,in2,out_int);
    max_int(in1,in2,&out_int);
    std::cout << out_int<<std::endl;    

    return 0;
}