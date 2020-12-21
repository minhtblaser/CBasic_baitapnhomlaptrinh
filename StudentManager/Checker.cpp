// #include "Datetime.h"
bool isLeapYear(int year){
    return year%4 == 0;
}
bool isValid(Datetime date){
    bool is_valid = true;
    if((date.month < 1 || date.month > 12) || (date.day < 1)){
        is_valid = false;
    } else {
        switch(date.month){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if(date.day > 31){
                    is_valid = false;
                }
                break;
            case 4: case 6: case 9: case 11:
                if(date.day > 30){
                    is_valid = false;
                }
            break;
            case 2: 
                if(isLeapYear(date.year)&& date.day >29){
                    is_valid = false;
                } else if (!isLeapYear(date.year) && date.day > 28){
                    is_valid =false;
                }
            break;
        }
    }
    return is_valid;
}