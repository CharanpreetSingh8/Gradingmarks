#include <stdio.h>

int main()
{
    int m;
    printf("Enter marks: ");
    scanf("%d", &m);

    if(m>0)
    {   
        if(m>=40)
        {
            if(m>54)
            {
                if(m>69)
                {
                    if(m>84)
                    {
                        if(m>100)
                        { 
                            printf("The marks are not correct!!");
                        }
                        else
                        {
                            printf("Your grade is A");
                        }
                    }
                    else
                    {
                        printf("Your grade is B");
                    }
                }
                else
                {
                    printf("Your grade is C");
                }
            }
            else
            {
                printf("Your grade is D");
            }
        }
        else
        {
            printf("Your grade is F");
        }
    }
    else
    {
        printf("The marks are not correct!!");
    }

    return 0;
}
