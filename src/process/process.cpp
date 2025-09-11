#include    "process.h"
#include<Eigen/Dense>
using Eigen::MatrixXd;
void Process::planProcess()
{
    std::cout << "This is Process class" << std::endl;
    my_map.map_info();

    MatrixXd m(2,2);
    m(0,0) = 3;
    std::cout<<"m:"<<m<<std::endl;

    std::cout << "Process plan completed!" << std::endl;
};