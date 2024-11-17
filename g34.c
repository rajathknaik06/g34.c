/*Anika is studying mathematical series in her class. She is interested in calculating the sum of a particular series consisting of alternating positive and negative terms. Write a program to calculate the sum of the series: 1 - 1/2 + 1/3 - 1/4 + ... up to N terms.

Input format :
The input consists of an integer value N, representing the number of terms in the series.

Output format :
The output displays "Sum: " followed by the floating point number, representing the calculated sum of the series.*/

#include <stdio.h>
/*This program calculates the sum of the series */

/*If i is even, subtract 
1/i to sum

​
  from sum.
If i is odd, add 
1/i to sum

​
  to sum.*/
int main() {
    int N;
    float sum = 0.0;
    scanf("%d", &N);
    int i = 1;
    do {
        if (i % 2 == 0) {
            sum -= 1.0 / i;
        } else {
            sum += 1.0 / i;
        }
        i++;
    } while (i <= N);
    printf("Sum: %.2f", sum);
    return 0;
}
