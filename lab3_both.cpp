#include <iostream>
using namespace std;
int main()
{
    int array[5][5]=
    {
        {1,1,1,1,1},
        {1,2,2,2,2},
        {1,2,3,3,3},
        {1,2,3,4,4},
        {1,2,3,4,5},
    };
    int sum_cpp=0;
    int sum_as=0;
    for (int j = 0; j < 5; j++)
        {
            sum_cpp+=array[j][j];
        }
    for (int i = 0; i < 5; i++)
        {
            asm
            (
            "mov %1, %%eax  \n\t"
            "mov %2, %%ebx \n\t"
            "add %%ebx, %%eax \n\t" 
            "mov %%eax, %0 \n\t"
            : "=r" (sum_as)
            : "r" (array[i][i]), "r" (sum_as)
            );
        }
    cout<<"Sum by cpp equals: "<<sum_cpp<<"\n";
    cout<<"Sum by assembly equals: "<<sum_as<<"\n";
    return 0;
}
