#include <stdio.h>
int main()
{
    int i, t, d, s;
    for(i=1; i<=500; i++)   //outer loop
    {
        t=i;
        s=0;
        while(t>0)          //inner loop
        {
            d = t%10;       //Extracting digit
            s += (d*d*d);   //Calculating the sum of cubes of digits
            t /= 10;        //Preparing/Reducing the number for next iteration
        }
        if(i == s)          //comparing original number with the sum of the cubes of its digits
        {
            printf("%d\n", i);
        }
    }
    return 0;
}