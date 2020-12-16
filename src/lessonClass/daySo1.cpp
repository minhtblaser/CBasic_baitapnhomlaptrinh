#include <stdio.h>
#include<math.h>
void input(int &n);
void output(int n);
void listNumberInFibo(int n);
void listReserveNumber(int n);
void listSquareNumber(int n);
void listPerfectNumber (int n);
void menu (int n);
bool checkNumber(int n);
bool checkReserveNumber(int n);
bool checkSquareNumber (int n);
bool checkPerfectNumber(int n);

int main(){
    int n;
    input(n);
    menu(n);
    return 0;
}


void input(int &n){
    printf("enter the number: ");
    scanf("%d", &n);
}
void output(int n){
    printf("\nyour number here: ");
    for(int i = 1; i <= n; i++){
        printf("%4d",i);
    }
}

bool checkNumber(int n){
    int checknumber = false;
    int a[100];
    a[0] = 1, a[1] =1;
    if (n == a[1] || n == a[0]){
        checknumber = true;
    } else {
        for (int i = 2; i <= n; i++){
            a[i] = a[i-2] + a[i-1];
                if (n==a[i]){
                    checknumber = true;
                    break;
            }
        }
    }
    return checknumber;
}
void listNumberInFibo(int n){
    printf("\nList of numbers in fibo: ");
    for(int i = 1; i < n; i++){
        if(checkNumber(i)){
        printf("%4d",i);
        }
    }
}

bool checkReserveNumber(int n){
    int checkreservenumber = true;
    int reservenumber = 0;
    int number;
    int temp = n;
    while(temp != 0){
        number = temp % 10;
        reservenumber = reservenumber*10 + number;
        temp /= 10;
    } return reservenumber == n;
};
void listReserveNumber(int n){
    printf("\nList of reserveNumbers: ");
    for (int i = 1; i <= n; i++){
        if(checkReserveNumber(i)){
            printf("%4d",i);
        }
    } 
}  

bool checkSquareNumber (int n){
    return sqrt(n) == (int) sqrt(n);
}
void listSquareNumber(int n){
    printf("\nList of squareNumber: ");
    for (int i = 1; i <= n; i++){        
        if(checkSquareNumber(i)){
            printf("%4d",i);
        }
    }
}

bool checkPerfectNumber(int n){
    bool perfectnumber = true;
    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    return sum == n;
}
void listPerfectNumber (int n){
    printf("\nList of perfectNumbers: ");
    for (int i = 1; i <= n; i++){
        if (checkPerfectNumber(i)){
            printf("%4d", i);
        }
    }
}

void menu(int n){
    int choice;
    do {
     printf("----------------------menu------------------\n");
        printf("\n1. list perfect numbers");
        printf("\n2. list square numbers");
        printf("\n3. list numbers in fibonanci");
        printf("\n4. list  reserve numners");
        printf("\n--------------------------------------------\n");
        fflush(stdin);
        printf("\nwhat is your choice? ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            listPerfectNumber (n);
            break;
        
        case 2:
            listSquareNumber(n);
            break;
        case 3:
            listNumberInFibo(n);
            break;
        case 4:
            listReserveNumber(n);
            break;
        default:
                printf("your choice is non-valid");
                break;
    }
        printf("\nBan co muon thoat ra khong(Nhan phim 0 de thoat!)?");
        scanf("%d",&choice);
    }
    while(choice);
}
    