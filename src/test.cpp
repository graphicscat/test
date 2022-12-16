#include<cstdio>
#include <add.h>
#include<minus.h>
#include<eigen3/Eigen/Eigen>
#include<iostream>
int main()
{
    //hello();
    printf("hello,cmake\n");
    int x = add(1,2);
    minus(6,1);
    printf("%d\n",x);
    Eigen::Vector3f vec(1.f,1.f,1.f);
    std::cout << vec << std::endl;
}