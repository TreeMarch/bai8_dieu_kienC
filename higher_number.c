#include <stdio.h>

int higher_number(){
//    int main() {
    int num1, num2;
    num1 = 600;
    num2 = 550;
    if (num1 == num2){
        printf("\nnumber are equal");
    } else if (num1 > num2){
        printf("\n the higher number is : %d",num1);
    } else{
        printf("\n the higher number is : %d",num2);
    }

}
//}