#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int choose;
    float number1,number2;

menu:printf("Which transaction will you enter\n");
    printf("1.Sum\n2.Exraction\n3.Multiplication\n4.Division\n5.Square Root\n6.Coefficient\n\n");
    printf("If you exit this calculator please enter 11 \n\n");
    scanf("%d",&choose);

    if(choose==11){
        goto exit;

    }


    if(choose > 0&& choose <7){
        printf("Please enter 2 number.\n");
        scanf("%f%f",&number1,&number2);
    }


    switch(choose){

        case 1:
            printf("Sum: %f\n",number1+number2);
            break;

        case 2:
            printf("Exraction: %f\n",number1-number2);
            break;

        case 3:
            printf("Multiplication: %f\n",number1*number2);
            break;

        case 4:
            printf("Division: %f\n",number1/number2);
            break;

        case 5:
            printf("Square root 1: %f=%f\nSquare root 2: %f=%f\n",number1,sqrt(number1),number2,sqrt(number2));
            break;

        case 6:
            printf("%f above %f = %f \n",number1,number2,pow(number1,number2));
            break;

        default:
            printf("Please enter 1-6 between number\n");
            break;
    }
    goto menu;
    exit:
        printf("Fatality.Calculator is down.You Win.");

    return 0;
}
