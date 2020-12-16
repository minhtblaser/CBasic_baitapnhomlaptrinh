#include<stdio.h>
#include<math.h>
typedef struct Point{
    int x,y;
};
void input(Point &Point);
void menu(Point Point1, Point Point2);
void output(Point Point);
void outputDistance(Point Point1, Point Point2);
void outputCompareDistanceWithOrigin(Point Point1, Point Point2);
void outputSymmetryPoint(Point Point1, Point Point2 );
void outputSymmetryPointThroughX(Point Point1);
void outputPointDoixungQuaDuongPG1(Point Point1);
void outputcordinateInParts(Point Point1);
Point findCordinateThX(Point Point1);
Point findSymmetryPoint1(Point Point1); 
Point findSymmetryPoint2(Point Point2);
Point PointDoixungQuaDuongPG1 (Point Point1);
bool checkpartOf1(Point Point1);
bool checkpartOf2(Point Point1);
bool checkpartOf3(Point Point1);
bool checkpartOf4(Point Point1);
int isLongestDistance(Point Point1, Point Point2, Point khac);
float findOutputDistance(Point Point1, Point Point2);
int main(){
    Point Point1,Point2;
    input(Point1);
    input(Point2);
    menu(Point1, Point2);
    return 0;
}
void input(Point &Point){
    printf("\nenter x: ");
    scanf("%d", &Point.x);
    printf("\nenter y: ");
    scanf("%d", &Point.y);
}
void output(Point Point){
    printf("\n(%d, %d)", Point.x,Point.y);
}
float findOutputDistance(Point Point1, Point Point2){
    float distance = 0;
    distance += sqrt(((Point1.x*Point1.x)-(Point2.x*Point2.x))+((Point1.y*Point1.y)-(Point2.y*Point2.y)));
    return distance;
}
void outputDistance(Point Point1, Point Point2){
    float distanceofxandy = findOutputDistance(Point1, Point2);
    printf("the distance of two cordinate: %.2f ", distanceofxandy);
}
void outputCompareDistanceWithOrigin(Point Point1, Point Point2){
    Point Pointganhon,Pointxahon;
    Point goctoado;
    goctoado.x =0;
    goctoado.y= 0;
    if(isLongestDistance(Point1,Point2,goctoado)){
        Pointganhon = Point2;
        Pointxahon = Point1;
    } else{
        Pointganhon = Point1;
        Pointxahon = Point2;
    }
    printf("(%d,%d) near ((0,0) than (%d,%d)",Pointganhon.x, Pointganhon.y,Pointxahon.x,Pointxahon.y);
}
int isLongestDistance(Point Point1, Point Point2,Point khac){
    float distance1;
    float distance2; 
    distance1 = findOutputDistance(Point1,khac);
    distance2 = findOutputDistance(Point2,khac);
    return distance1 > distance2;
}
void outputSymmetryPoint(Point Point1, Point Point2){
    Point result1 =  findSymmetryPoint1(Point1);
    Point result2 =  findSymmetryPoint2(Point2);
    printf("(%d,%d) and (%d,%d) symmetry_point_ of_twoCordinate: (%d%d) (%d%d)",  Point1.x,  Point1.y, Point2.x, Point2.y,result1, result2);
}
Point findSymmetryPoint1(Point Point1){
    Point symmetrypoint1;
    symmetrypoint1.x = -1*Point1.x; 
    symmetrypoint1.y = -1*Point1.y; 
    return symmetrypoint1;
}
Point findSymmetryPoint2(Point Point2){
    Point symmetrypoint2;
    symmetrypoint2.x= -1*Point2.x; 
    symmetrypoint2.y= -1*Point2.y; 
    return symmetrypoint2;
}
void outputSymmetryPointThroughX(Point Point1){
    Point point = findCordinateThX(Point1);
    printf("your result: %d %d", point);
}
Point findCordinateThX(Point Point1){
    Point pointhroughx1;
    pointhroughx1.x = -1*Point1.x;
    pointhroughx1.y = Point1.y;
    return pointhroughx1;
}
void outputPointDoixungQuaDuongPG1(Point Point1){
    Point Pointquapg1 = PointDoixungQuaDuongPG1 (Point1);
    printf("your result %d %d", Pointquapg1);
}
Point PointDoixungQuaDuongPG1 (Point Point1){
    Point Pointdoixungquapg1;
    Pointdoixungquapg1.x = 1*Point1.y;
    Pointdoixungquapg1.y = 1*Point1.x;
    return Pointdoixungquapg1;
}
bool checkpartOf1(Point Point1){
    if(Point1.x > 0 && Point1.y > 0){
        return true;
    } return false;
}
bool checkpartOf2(Point Point1){
    if(Point1.x < 0 && Point1.y > 0){
        return true;
    } return false;
}
bool checkpartOf3(Point Point1){
    if(Point1.x < 0 && Point1.y < 0){
        return true;
    } return false;
}
bool checkpartOf4(Point Point1){
    if(Point1.x > 0 && Point1.y < 0){
        return true;
    } return false;
}
void outputcordinateInParts(Point Point1){
    if(checkpartOf1(Point1)){
        printf("\n Belong to part1");
    } else {
         printf("\n Not Belong to part1");
    }
    if(checkpartOf2(Point1)){
        printf("\n Belong to part2");
    } else {
         printf("\n Not Belong to part2");
    }
    if(checkpartOf3(Point1)){
        printf("\n Belong to part3");
    } else {
         printf("\n Not Belong to part3");
    }
    if(checkpartOf4(Point1)){
        printf("\n Belong to part4");
    } else {
         printf("\n Not Belong to part4");
    }
}




void menu(Point Point1, Point Point2){
    int choice;
    do {
        printf("----------------------menu------------------\n");
        printf("\n1. output x and y");
        printf("\n2. the distance of x and y");
        printf("\n3. cordinate near (0,0): ");
        printf("\n4. output symmetry point through origin: ");
        printf("\n5. output symmetry point through X: ");
        printf("\n6. output symmetry point through PG1: ");
        printf("\n7. check cordinate 1 belong to part?? ");
        fflush(stdin);
        printf("\nwhat is your choice? ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            output(Point1);
            break;
        case 2:
            outputDistance(Point1, Point2);
            break;
        case 3:
            outputCompareDistanceWithOrigin(Point1, Point2);
            break;
        case 4: 
            outputSymmetryPoint(Point1, Point2);           
            break;
        case 5: 
            outputSymmetryPointThroughX(Point1);           
            break;
        case 6: 
            outputPointDoixungQuaDuongPG1(Point1);           
            break;
        case 7: 
            outputcordinateInParts(Point1);           
            break;
        default: 
            printf("your choice is non-valid");
            break;
        }
        printf("\nBan co muon thoat ra khong(Nhan phim 0 de thoat!)?");
        scanf("%d",&choice);
    } while (choice);
}