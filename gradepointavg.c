
#include<stdio.h>
int main(int argc, char const *argv[]) 
{
    int num_A, num_B, num_C, num_D , num_F ;
    int total_subject;
    int total_point ;
    float GPA ;

    do
    {
        printf ("\tThis is for calculate your GPA \n");
        printf("Enter number of grade A :");
        scanf("%d", &num_A);
        printf("Enter number of grade B :"); 
        scanf("%d", &num_B);
        printf("Enter number of grade C :"); 
        scanf("%d", &num_C);
        printf("Enter number of grade D :"); 
        scanf("%d", &num_D);
        printf("Enter number of grade F :"); 
        scanf("%d", &num_F);

        total_subject = num_A+num_B+num_C+num_D+num_F ;
          if (((num_A<0)||(num_B<0)||(num_C<0)||(num_D<0)||(num_F<0))||(total_subject<=0))
          
          {
            printf("you should enter your number that you having take a gain\n");
          }


    } while (((num_A<0)|| (num_B<0)||(num_C<0)||(num_D<0)||(num_F<0)||total_subject<=0));
     
     total_point =num_A*4+num_B*3+num_C*2+num_D*1+num_F*0;
     GPA = (float)(total_point /total_subject);
     printf("Yout grade point average is %.2f\n",GPA);

     if(GPA<2)
     printf("Your acedemic standing is Probation\n\n");
      else
         if (GPA <3)
         printf("Your acedemic standing is satisfactory\n\n");
           else
              if(GPA<=4)
              printf("Your acedemic standing is Honors\n\n");
                else 
                    if(GPA<=5.00)
                    printf ("your acedemic standing is excellent\n\n");
                
    return 0;
}
