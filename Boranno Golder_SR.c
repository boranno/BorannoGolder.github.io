
//Boranno Golder
//Section : H ID:221-15-5860
//Department: CSE Project Name:Examiner


//This Project Work as a Virtual Examiner and help Students to practice.



#include<stdio.h>
int main ()
{
    int q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,marks;
    char player_name[200];
    marks=0;
    printf("Input player Name without space : ");
    scanf("%s",player_name);
    printf("\nWhare does the word computer comes from?\n1.Complete   2.Compute\n3.Comend  4.Close\n");
    scanf("%d",&q1);
    printf("What does GIGO mene?\n1.Global-input-global-output  2.Getting-input-getting-output\n3.Get-in-get-out  4.Garbage-in-garbage-out\n");
    scanf("%d",&q2);
    printf("Who invented the first mechanical adding machine in 1642?\n1.Blais Pascal  2.Thomas Joe\n3.James Charlie  4.David Danial\n");
    scanf("%d",&q3);
    printf("What was the first Electronic computer?\n1.The Mark I  2.The Edvac\n3.The Edsac  4.The Eniac\n");
    scanf("%d",&q4);
    printf("Who came up with the concept of panched cards?\n1.Xiang Quinn  2.Lopez Mason\n3.Herman Hollerith  4.Janes Klein\n");
    scanf("%d",&q5);
    if (q1==2)
    {
        marks+=20;
    }
    if (q2==4)
    {
        marks+=20;/* code */
    }
    if (q3==1)
    {
        marks+=20;/* code */
    }
    if (q4==4)
    {
        marks+=20;
    }
    if (q5==3)
    {
        marks+=20;
    }
     if (marks==20)
    {
        printf("What a shame %s you are failed you need to work more on your study",player_name);

    }
    if (marks==40)
    {
        printf("What a shame %s you are failed you need to work more on your study",player_name);

    }
    if (marks==60)
    {
        printf("You need to learn more %s",player_name);
    }
    if (marks==80)
    {
        printf("Good but you can improve %s",player_name);
    }
    if (marks==100)
    {
        printf("Excellent keep up the good work %s",player_name);
    }
    if (marks>100 || marks<20)
    {
        printf("You put wrong keyword");
    }


    return 0;


}
