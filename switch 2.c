//temperature conversion

#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedtemp;

    printf("Temperature conversion menu: \n");
    printf("1.Fahrenheit to Celsius: \n");
    printf("2.Celsius to Fahrenheit: \n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);

    switch(choice){
       case 1:
           {
             printf("Enter the Fahrenheit temperature: \n");
             scanf("%f",&temp);
             convertedtemp=(temp-32)/1.8;
             printf("The temperature in Celsius is: %f\n",convertedtemp);
             break;
           }
       case 2:
        {
            printf("Enter the Celsius temperature: \n");
             scanf("%f",&temp);
             convertedtemp=(temp*1.8)+32;
             printf("The temperature in Fahrenheit is: %f\n",convertedtemp);
             break;
        }
       default:
        {
            printf("not a correct option");
        }




    }
}
