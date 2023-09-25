#include <stdio.h>

//int BMI(){
    int main(){
    float weight, height ,bmi;
    printf("nhap so can nang cua ban : ");
    scanf("%f",&weight);
    printf("nhap chieu cao cua ban : ");
    scanf("%f",&height);
    bmi = weight / (height * height);
    printf("chi so BMI cua ban la : %f",bmi);

    if (bmi < 18){
        printf("\nban gay qua ");
    }
    else if( bmi < 24.9){
        printf("\nban binh thuong ");
    }
    else if( bmi < 29.9){
        printf("\nban hoi beo ");
    } else{
        printf("\nban bi beo phi");
    }

}
//}