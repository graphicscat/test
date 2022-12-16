#include<cstdio>
#include <add.h>
#include<minus.h>
#include<eigen3/Eigen/Eigen>
#include<iostream>
int main()
{
    //hello();
    using vec3f = Eigen::Vector3f;

    printf("hello,cmake\n");
    int x = add(1,2);
    minus(6,1);
    printf("%d\n",x);
    vec3f vec(1.f,1.f,1.f);
    std::cout << vec << std::endl;
}