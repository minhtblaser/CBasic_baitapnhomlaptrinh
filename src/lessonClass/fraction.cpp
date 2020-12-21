#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct Fraction {
    int numerator, denominator, fraction1, fraction2;
};
int UCLN (int a, int b);
int BCNN (int a, int b);
void printValue(Fraction a);
void printResult(Fraction a, Fraction b);
Fraction compact (Fraction a);
Fraction plus(Fraction a, Fraction b);
Fraction minus(Fraction a, Fraction b);
Fraction multi(Fraction a, Fraction b);
Fraction divide(Fraction a, Fraction b);
int compare(Fraction a, Fraction b);
int main(){
    Fraction a,b,c;
    printf("\nenter number fraction 1: ");
    scanf("%d%d", &a.numerator, &a.denominator);
    printf("\nenter number fraction 2: ");
    scanf("%d%d", &b.numerator, &b.denominator);
    printf("\nthe number fraction 1 after compact is ");
    a = compact(a);
    printValue(a);
    printf("\nthe number fraction 2 after compact is ");
    b = compact(b);
    printValue(b);
    printf("\nThe sum of fraction 1 and fraction 2:");
    c = plus(a,b);
    printValue(c);
    printf("\nThe minus of fraction 1 and fraction 2: ");
    c = minus(a,b);
    printValue(c);
    printf("\nThe multi of fraction 1 and fraction 2: ");
    c = multi(a,b);
    printValue(c);
    printf("\nThe divide of fraction 1 and fraction 2: ");
    c = divide(a,b);
    printValue(c);
    printf("\nThe compare of fraction 1 and fraction 2 is: ");
    printResult(a,b);
    return 0;
}
int UCLN (int a, int b){
    a = abs(a);
    b = abs(b);
    while(a*b != 0){
        if(a > b){
            a %= b;
        } else {
            b %= a;
        }
    }
    return a+b;
}
int BCNN (int a, int b){
    return a * b/UCLN(a,b);
}
Fraction compact (Fraction a){
    Fraction c;
    c.numerator=a.numerator/UCLN(a.numerator, a.denominator);
    c.denominator= a.denominator/UCLN(a.numerator, a.denominator);
    return c;
}   
Fraction plus(Fraction a, Fraction b){
    Fraction c;
    c.numerator = a.numerator*b.denominator + b.numerator*a.denominator;
    c.denominator = a.denominator * b.denominator;
    c = compact(c);
    return c;
}
Fraction minus(Fraction a, Fraction b){
    Fraction c;
    c.numerator = (a.numerator * b.denominator) - (b.numerator * a.denominator);
    c.denominator = a.denominator * b.denominator;
    c = compact(c);
    return c;
}
Fraction multi(Fraction a, Fraction b){
    Fraction c;
    c.numerator = a.numerator*b.numerator;
    c.denominator = a.denominator*b.denominator;
    c = compact(c);
    return c;
}
Fraction divide(Fraction a, Fraction b){
    Fraction c;
    c.numerator = a.numerator * b.denominator;
    c.denominator = a.denominator * b.numerator;
    c = compact(c);
    return c;
}
void printValue(Fraction a){
    printf("%d/%d", a.numerator, a.denominator);
}
int compare(Fraction a, Fraction b){
    Fraction c;
    c.fraction1 = a.numerator / a.denominator;
    c.fraction2 = b.numerator / b.denominator;
    if (c.fraction1 > c.fraction2){
        return 1;
    } else if (c.fraction1 == c.fraction2){
        return 0;
    } else {
        return -1;
    }
}
void printResult(Fraction a, Fraction b){
    int  result = compare(a,b);
    printf("%d", result);
}