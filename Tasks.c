// Write a C program to multiply two numbers
#include <stdio.h>
int main()
{
    int x = 5;
    int y = 2;
    int Result = x * y;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("Result = %d", Result);

    return 0;
}

// Write a C program to count the vowels and consonants in a given string.
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {

        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z')
        {

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;  
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

// Write a C program to find the largest and smallest elements in an array.
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("The largest element is: %d\n", largest);
    printf("The smallest element is: %d\n", smallest);

    return 0;
}

// Write a program to calcuate the average of array elements
#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0, average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("The average of the array elements is: %.2f\n", average);

    return 0;
}

// Write a program to calculate the sum of elements in an array.
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}

// Write a program that checks if a given number is perfect number.
#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a positive integer:");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num)
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

// Write a C program to count how many times a specific element appears in an array using linear search
#include <stdio.h>

int main()
{
    int n, element, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }

    printf("The element %d appears %d times in the array.\n", element, count);

    return 0;
}
// Enter the number of elements in the array: 6
// Enter 6 elements:
// 1 2 3 2 4 2
// Enter the element to search for: 2

// Write a C program to implement Bubble Sort and count the number of swaps performed during the sorting process.
#include <stdio.h>

void bubbleSort(int arr[], int n, int *swapCount)
{
    int i, j, temp;
    *swapCount = 0;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                (*swapCount)++;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {10, 25, 15, 86, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swapCount;

    printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n, &swapCount);

    printf("Sorted array: ");
    printArray(arr, n);

    printf("Number of swaps: %d\n", swapCount);

    return 0;
}

// Write a profram to count the number of vowels, consonants and digits in a given string.
// Input : Hello123
// Output : Vowels:2, Consonants:3, Digits:3
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0, digits = 0;

    printf("Enter the word: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else if (isalpha(ch))
        {
            consonants++;
        }
        else if (isdigit(ch))
        {
            digits++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}

// Write a C program that takes two integers as input and checks if one of them is divisible by the other. if so, print "Divisible", otherwise print "Not Divisible".
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num2 != 0 && num1 % num2 == 0)
    {
        printf("Divisible\n"); // 10, 5
    }
    else if (num1 != 0 && num2 % num1 == 0)
    {
        printf("Divisible\n"); // 7, 3
    }
    else
    {
        printf("Not Divisible\n");
    }

    return 0;
}

// Write a C program that checks if a given number is divisible by both 4 and 6 using logical operators.
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 4 == 0 && num % 6 == 0)
    {
        printf("The number is divisible by both 4 and 6. \n"); // 12
    }
    else
    {
        printf("The number is not divisible by both 4 and 6. /n"); // 14
    }

    return 0;
}

// Write a C program to reverse a queue using two queues.
#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int *arr;
    int front, rear, size;
};

struct Queue *createQueue(int size)
{
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->size = size;
    queue->front = queue->rear = -1;
    queue->arr = (int *)malloc(size * sizeof(int));
    return queue;
}

int isEmpty(struct Queue *queue)
{
    return queue->front == -1;
}

int isFull(struct Queue *queue)
{
    return queue->rear == queue->size - 1;
}

void enqueue(struct Queue *queue, int value)
{
    if (isFull(queue))
    {
        printf("Queue is full!\n");
        return;
    }
    if (queue->front == -1)
    {
        queue->front = 0;
    }
    queue->arr[++queue->rear] = value;
}

int dequeue(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty!\n");
        return -1;
    }
    int value = queue->arr[queue->front++];
    if (queue->front > queue->rear)
    {
        queue->front = queue->rear = -1;
    }
    return value;
}

void reverseQueue(struct Queue *original)
{
    struct Queue *second = createQueue(original->size);

    while (!isEmpty(original))
    {
        int value = dequeue(original);
        enqueue(second, value);
    }

    while (!isEmpty(second))
    {
        int value = dequeue(second);
        enqueue(original, value);
    }

    free(second->arr);
    free(second);
}

void printQueue(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty!\n");
        return;
    }
    for (int i = queue->front; i <= queue->rear; i++)
    {
        printf("%d ", queue->arr[i]);
    }
    printf("\n");
}

int main()
{
    struct Queue *queue = createQueue(5);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);

    printf("Original queue: ");
    printQueue(queue);

    reverseQueue(queue);

    printf("Reversed queue: ");
    printQueue(queue);

    free(queue->arr);
    free(queue);

    return 0;
}

//LOGICAL TEST 
#include <stdio.h>/
#include <string.h>

#define MAX_CHAR 256

int main() {
    char str[100];
    int freq[MAX_CHAR] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';


    for (int i = 0; i < strlen(str); i++) {
        freq[str[i]]++;
    }


    int found = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (freq[str[i]] == 1) {
            print/f("The first non-repeating character is: %c\n", str[i]);
            found = 1;/
            break;
        }
    }

    if (!found) {
        printf("There are no non-repeating characters in the string.\n");
    }

    return 0;
}




