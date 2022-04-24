#include<stdio.h>
#include<math.h>
int con(int long a)
{
    int k=0,deci=0,d;
    while(a!=0)
    {
        d=a%10;
        deci=deci+(d*pow(2,k));
        k++;
        a=a/10;
    }
    return deci;
}
int long con2(int a)
{
    int d,i=1;
    int long bi=0;
    while(a!=0)
    {
        d=a%2;
        bi=bi+(d*i);
        i*=10;
        a=a/2;
    }
    return bi;
}
void main()
{
    int long a,b,s;
    int n,c;
    do
    {
        system("cls");
    printf("Enter the two Binary Numbers\n");
    scanf("%ld %ld",&a,&b);
    int A=con(a);
    int B=con(b);
    printf("To Add Press 1\n");
    printf("To Subtract Press 2\n");
    printf("To Mutliply Press 3\n");
    printf("To Divide Press 4\n");
    printf("Enter Your Choice\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
       s=con2(A+B);
       printf("%ld",s);
       break;
       case 2:
       s=con2(A-B);
       printf("%ld",s);
       break;
       case 3:
       s=con2(A*B);
       printf("%ld",s);
       break;
       case 4:
        s=con2(A/B);
        printf("Quotent=%ld\n",s);
        s=con2(A%B);
        printf("Remainder=%ld",s);
        break;
       default:
        printf("Wrong Input");
    }
    printf("\nDo Want To Exit Press 1\n To Repeat Press 0\n");
    scanf("%d",&c);
    }while(c!=1);
}
