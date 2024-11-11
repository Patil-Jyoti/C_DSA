#include <stdio.h>
int main()
{
    int num = 3;
    int sum=1+num;//O(1)
    if (num == 0 || num == 1 )//

    {
        printf("The num is not prime");
    }
    else if (num == 2)
    {
        printf("The num is prime");
    }

    else
    {
        for (int i = 3; i * i <= num; i++) //n

        //for(int j=0    ) O(n^2)=>O(nlogn)
        {
            if (num * i != 0)
            {
                printf("The number is prime");
            }
        }
    }

    return 0;
}