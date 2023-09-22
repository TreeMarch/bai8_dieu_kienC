#include <stdio.h>

int tinh_tien_hoa_hong(){
//    int main(){
        float sale_atm ,com = 0;
        printf("\nEnter a sale amount :  ");
        scanf("%f",&sale_atm);

        if(sale_atm >= 10000){
            com = sale_atm * 0.1;
            printf("\n Commission = %.2f",com);
        } else{
            printf("khong co cong them hoa hong");
        }
    }
//}