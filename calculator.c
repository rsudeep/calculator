#include<stdio.h>
#include<math.h>
int main()
{   
    float a,b,result,q,function,t,comp,C,d,r1,r2;
    char op,c;
    printf("for simple calculator press 1 \n for trignometric calculator press 2 \n for complex number calculator press 3 \n for solving quadratic equation press 4 \n");
    scanf("%f",&function);
    if(function==1)
    {
        printf("Enter a number \n");
        scanf("%f",&a);
        result=a;
        while(1)
        {

        
            scanf("%c",&c);
            printf("Enter the operator \n");
            scanf("%c",&op);
        
                printf("Enter 2nd number\n ");
                scanf("%f",&b);
                if( op=='+')
                {
                result=result+b;
                printf("%f \n",result);
                }
                if( op=='-')
                {
                result=result-b;    
                printf("%f \n",result);
                }    
                if( op=='*')
                {   result=result*b;
                printf("%f \n",result);
                }
                if( op=='/')
                {   result=result/b;
                printf("%f \n",result);
                }
            printf("press 1 to exit or 2 to continue \n");
            scanf("%f",&q);
            if(q==1)
            break;
        
            
        }
        
    } 
    
    if(function==2)
    while(1)
    {
    
        {
            printf("Enter 1 to use sin function \n Enter 2 to use cos function \n Enter 3 to use tan function \n");
            scanf("%f",&t);
            if(t==1)
            {
                printf("Enter the argument in radians \n");
                scanf("%f",&a);
                printf("%f \n", sin(a) );
            }
            if(t==2)
            {
                    printf("Enter the argument in radinas \n ");
                    scanf("%f",&a);
                    printf("%f", cos(a) );
            }
        if(t==3)
            {
                    printf("Enter the arguments in radians \n");
                    scanf("%f",&a);
                    printf("%f",tan(a) );
            }
        }
        printf("Enter 1 to quit or 2 to continue \n");
        scanf("%f",&q);
        if(q==1)
        break;
    } 
    if(function==3)
    {
        while(1)
        {
            printf("Enter real part of your complex number \n");
            scanf("%f",&a);
            printf("Enter imaginary part of comlex number \n");
            scanf("%f",&b);
            printf("Enter 1 for modulus \n Enter 2  for argument \n");
            scanf("%f",&comp);
            if(comp==1)
            {
                result=sqrt( (a*a)+(b*b) );
                printf("Modulus is %f",result);
            }
            if(comp==2)
            {
                result=atan(b/a);
                printf("Argument in rad is %f \n",result);
            }
         printf("Enter 1 to quit or enter 2 to continue \n");
         scanf("%f",&q);
         if(q==1)
         break;
            
        }
    }
    if( function==4)
    {
        while(1)
        {
            printf("Enter the value of a \n");
            scanf("%f",&a);
            printf("Enter the value of b \n");
            scanf("%f",&b);
            printf("Enter the value of c \n");
            scanf("%f",&C);
            d=(b*b)-(4*a*C);
            if(d>=0)
            {
                r1=( -b+sqrt(d) )/( 2*a);
                r2=( -b-sqrt(d) )/( 2*a);
                printf("Roots are real \n");
                if(d>0)
                printf("Roots are %f%f \n",r1,r2);
                else
                printf("Root is %f \n",r2);
            
            }
            if(d<0)
            {
                d=(-1)*d;
                printf("Roots are complex and conjugate of each other \n");
                printf("Real part is %f",(-b)/2*a);
                printf("imaginary part is + %f",sqrt(d)/(2*a) );
                printf("and - %f \n",sqrt(d)/(2*a) ); 
            }
        printf("Enter 1 to quit or 2 to continue \n");
        scanf("%f",&q);
        if(q==1)
        break;
        }
    }
    
    
}