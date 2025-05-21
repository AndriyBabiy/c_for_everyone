#include<stdio.h>
#include<math.h>

int main(void)
{
    /*
    This code implements and compares a custom sine value approximation using the Mclaurin series approach and the <math.h> implementation.

    The Mclaurin implementation takes the sum of the odd instances of exponents and facorials of the input value. The summation procedure alternates between addition and subtraction.

    Conclusion:
    The overall difference in accuracy between the <math.h> and custom implementation is around 1%.
    If there is an ability to use the package then you should do so, otherwise you should take into account the difference in potential accuracy.
    
    */

    // initialization and declaration for the input value
    double input_val = 0.0;

    // prompting the user for a value between 0 and 1
    do
    {
        printf("Input a value between 0 and 1: ");
        scanf("%lf", &input_val);
    } while (input_val < 0 || input_val >= 1);

    // initialization and declaration of the amount of iterations and resulting sine_val
    int degrees_in_calc = 10;
    long double sine_val = 0.0;

    // loop through the iterations
    for (int i = 0; i <= degrees_in_calc; i++)
    {
        // initializing and declaring a variable that keeps track of the sign used for accumulation
        int sign = 1;

        // checking for execution only on odd values
        if (i % 2 != 0)
        {
            // initialisation of the exponent variable and intializing it to the input value
            long double exponent = input_val;
            // conducting the exponent multiplication for the value of the exponent
            for (double j = 1; j < i; j++)
            {
                exponent *= input_val;
            }

            // initialization of the factorial variable
            long double factorial = 0;
            // executing the factorial calculation for the instance of the execution
            for (double j = i; j > 0; j--)
            {
                if (j == i)
                {
                    factorial = i;
                }
                else
                {
                    factorial *= j;
                }
            }
            // accumulating the computed values into the custom sine_val variable
            sine_val = sine_val + sign * (exponent / factorial);
            // setting the sign of the operation for the next iteration of the accumulation
            sign *= -1;
        }
    }

    printf("The value after passing through a sine function is: %lf (<math.h> module component)\n", sin(input_val));
    printf("The value after passing through a sine function is: %Lf (Custom implementation)\n\n", sine_val);
    printf("Difference in accuracy: %Lf %% \n\n", sine_val/sin(input_val));
    return 0;
}