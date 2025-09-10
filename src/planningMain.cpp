#include<iostream>
#include"process.h"

int main()
{
    std::cout<<"This is main function"<<std::endl;
    Process my_process;
    my_process.planProcess();
    std::cout<<"Main function completed!"<<std::endl;
    return 0;
};