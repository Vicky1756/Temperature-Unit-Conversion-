#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
float fc(float in)
{
    return (5.00/9.00)*(in-32.00);
}
float cf(float in)
{
    return(9.00/5.00)*(in+32.00);
}
float fk(float in)
{
    return (in+459.69)/1.8;
}
float kf(float in)
{
    return (1.8*in)-459.69;
}
float ck(float in)
{
    return in+273.15;
}
float kc(float in)
{
    return in-273.15;
}
int main()
{
    float input,output1,output2;
    char unit,unit1,unit2;
    printf("Please Enter Temperature:\n");
    scanf("%f %c",&input,&unit);

    switch(unit)
    {
        case 'c':
            output1 = ck(input);
            unit1 ='K';
            output2 = cf(input);
            unit2 = 'F';
            break;
        case 'C':

            output1 = ck(input);
            unit1 ='K';
            output2 = cf(input);
            unit2 = 'F';
            break;

        case'f':
            output1 = fc(input);
            unit1 ='C';
            output2=fk(input);
            unit2='K';
            break;
        case'F':

            output1 = fc(input);
            unit1 ='C';
            output2=fk(input);
            unit2='K';
            break;

        case'k':
            output1=kc(input);
            unit1='C';
            output2=kf(input);
            unit2='F';
            break;
        case'K':

            output1=kc(input);
            unit1='C';
            output2=kf(input);
            unit2='F';
            break;


    }
     printf("%.2f %c = %.2f %c = %.2f %c",input,unit,output1,unit1,output2,unit2);
    return 0;
}
