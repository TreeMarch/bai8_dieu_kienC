#include <stdio.h>
#include <stdlib.h>

int atmifelse(int argc, char*argv[]){
//    int main (int argc , char * argv[]){
        printf("ban da nhap thanh cong .Xin chuc mung quy khach \n");
        printf("ban muon su dung chuc nang nao ? \n");
        printf("1. rut tien \n");
        printf("2. kiem tra so du \n");
        printf("3. chuyen khoan \n");
        printf("4. kiem tra lich su giao dich \n");
        printf("moi ban nhap cac lua chon 1 - 4\n");

        int choose = 0;
        printf("lua chon cua ban la : ");
        scanf("%d",&choose);

        if(choose >= 1 && choose <= 4){
            if  (choose == 1 ){
                printf("giao dich thanh cong , so tien con lai cua ban la 4m USD");
            }
            else if (choose == 2){
                printf("so du trong tai khoan cua ban la 5m USD");
            }
            else if (choose == 3){
                printf("ban hay nhap so tai khoan can chuyen khoan ");
            }
            else if (choose == 4 ){
                printf("danh sach cac giao dich gan day cua ban ");
            }
            else {
                printf("lua chon cua ban khong phu hop, moi ban nhap cac so trong pham vi tu 1 den 4");
            }
            printf("\n");
            return 0;
        }

    }
//}