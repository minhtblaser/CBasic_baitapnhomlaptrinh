#include<stdio.h>
#define MAX_SIZE  100
typedef struct Array{
    int numbers[MAX_SIZE];
    int size;
};
void enter(Array &input);
void printValue(Array output);
void printEvenNumbers(Array source);
void printPrimeNumber(Array source);
Array findEvenNumbers(Array source);
Array findPrimeNumbers(Array source);
int main(){
    Array list;
    enter(list);
    printValue(list);
    printEvenNumbers(list);
    return 0;
}
void enter(Array &input){
    int temp;
    printf("Enter the size of array: ");
    scanf("%d", &input.size); 
    for(int index = 0; index < input.size; index++){
        printf("enter number a[%d]: ",index);
        scanf("%d", &temp);
        input.numbers[index] = temp;
    }
}
void printValue(Array output){
    for(int index = 0; index < output.size; index++){
        printf("%4d ",output.numbers[index]);
    }
}
Array findEvenNumbers(Array source){
    Array even_numbers;
    even_numbers.size = 0;
    for(int index = 0; index < source.size; index++){
        if(source.numbers[index] % 2 == 0){
            even_numbers.size++;
            even_numbers.numbers[even_numbers.size-1] = source.numbers[index]; 
        }
    }
    return even_numbers;     
}
void printEvenNumbers(Array source){
    Array even_numbers = findEvenNumbers(source);
    printf("\nyour result: ");
    printValue(even_numbers);
}
// -------
bool findPrimeNumbers(Array source){
    Array prime_numbers;
    prime_numbers.size = 0;
    for(int index = 0; index < source.size; index++){
        if(source.numbers[index] % index ==0){
            prime_numbers.size++;
        }
    }
    if(prime_numbers.size == 0){
        return true;
    } else{
        return false;
    }
}
void printPrimeNumber(Array source){
    if (findPrimeNumbers(source)){
        printf("\nthe prime numbers in array: ");
        printValue(findPrimeNumbers(source));
    }
}
