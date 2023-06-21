/*#include <stdio.h>
#define MAX_SIZE 1000 

int main()
{
    int arr[MAX_SIZE];
    int i, N;

    
    printf("Enter size of array: ");
    scanf("%d", &N);

    
    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }


   
    printf("\nElements in array are: ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}*/






/*#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, n, sum=0;

    
    printf("Enter size of the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

   
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }


    printf("Sum of all elements of array = %d", sum);

    return 0;
}*/





/*#include <stdio.h>

#define MAX_SIZE 100   

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, size;

    
    printf("Enter size of the array: ");
    scanf("%d", &size);

    
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }


    
    max = arr[0];
    min = arr[0];

   
    for(i=1; i<size; i++)
    {
        
        if(arr[i] > max)
        {
            max = arr[i];
        }

        
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

   
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
 
    return 0;
}*/


/**
 * C program to get memory address using address of operator
 */

/*#include <stdio.h>

int main()
{
    
    char character = 'y';
    int integer = 5;
    float real = 11.4f;
    
    
    printf("Value of character = %c, Address of character = %u\n", character, &character);
    printf("Value of integer = %d, Address of integer = %u\n", integer, &integer);
    printf("Value of real = %f, Address of real = %u\n", real, &real);
    

    return 0;
}*/


/**
 * C program to create, initialize and use pointers
 */

/*#include <stdio.h>

int main()
{
    int num = 11;
    int * ptr;

    
    ptr = &num;

    printf("Address of num = %d\n", &num);
    printf("Value of num = %d\n", num);

    printf("Address of ptr = %d\n", &ptr);
    printf("Value of ptr = %d\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

    return 0;
}*/


**
 * C program to add two number using pointers
 */

/*#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;

    ptr1 = &num1; 
    ptr2 = &num2; 

    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);

    sum = *ptr1 + *ptr2;

    printf("Sum = %d", sum);

    return 0;
}*/

/**
 * C program to perform all arithmetic operations using pointers
 */

/*#include <stdio.h>

int main()
{
    float num1, num2;    
    float *ptr1, *ptr2;  

    float sum, diff, mult, div;

    ptr1 = &num1; 
    ptr2 = &num2; 

    printf("Enter any two real numbers: ");
    scanf("%f%f", ptr1, ptr2);

    sum  = (*ptr1) + (*ptr2);
    diff = (*ptr1) - (*ptr2);
    mult = (*ptr1) * (*ptr2);
    div  = (*ptr1) / (*ptr2);

   
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", mult);
    printf("Quotient = %.2f\n", div);

    return 0;
}*/





/**
 * C program to swap two number using call by reference
 */

/*#include <stdio.h>
void swap(int * num1, int * num2);

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Before swapping in main n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);


    swap(&num1, &num2);

    
    printf("After swapping in main n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);

    return 0;
}


void swap(int * num1, int * num2)
{
    int temp;
    temp = *num1;
    *num1= *num2;
    *num2= temp;

    printf("After swapping in swap function n");
    printf("Value of num1 = %d \n", *num1);
    printf("Value of num2 = %d \n\n", *num2);
}*/


/*#include <stdio.h>
int max(int num1, int num2);
 
int main () {
   int a = 100;
   int b = 200;
   int ret;
   ret = max(a, b);
 
   printf( "Max value is : %d\n", ret );
 
   return 0;
}
int max(int num1, int num2) {

   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}*/



/* C program to check even or odd number using conditional operator
 */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);
    if(num%2 == 0) 
    {
         printf("The number is EVEN");
         }
         else
         {
printf("The number is ODD");
         }

    return 0;
}

/* C program to check alphabets using Conditional operator
 */

#include <stdio.h>

int main()
{
    char ch;
    

    printf("Enter any character: ");
    scanf("%c", &ch);
    
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? printf("It is ALPHABET")
        : printf("It is NOT ALPHABET");

    return 0;
}


#include <stdio.h>

int main(void) {
  char name[] = ("smruti akasmika");

  printf("%c", *name);     
  printf("%c", *(name+1));   
  printf("%c", *(name+7));   
  char *namePtr;

  namePtr = name;
  printf("%c", *namePtr);     
  printf("%c", *(namePtr+1));  
  printf("%c", *(namePtr+7));
}












