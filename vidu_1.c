#include <stdio.h>
#include <stdlib.h>

//int vidu_1(){
        int atm_basic(int argc, char *argv[])
//        int main(int argc , char*argv[])
{
    printf("ban da dang nhap thanh cong . Xin chuc mung ban \n");
    printf("ban muon su dung chuc nang nao ? \n");
    printf("1 . rut tien \n");
    printf("2 . kiem tra so du \n");
    printf("3 . chuyen khoan \n");
    printf("4 . kiem tra lich su giao dich \n");
    printf("Moi ban nha cac lua chon 1-4 \n");

    int choose = 0;
    printf("lua chon cua ban la : ");
    scanf("%d",&choose);
    if (choose >= 1 && choose <= 4){
        switch (choose)  {
            case 1:
                printf("giao dich thanh cong. So tien con lai la 4 trieu USD\n");
                break;
            case 2:
                printf("So du trong tai khoan cua ban la 5 trieu USD\n");
                break;
            case 3:
                printf("ban hay nhap so tai khoan can chuyen khoan \n");
                break;
            case 4:
                printf("danh sach cac giao dich gan day cua ban \n");
                break;
            default:
                printf("ban chon chua chinh xac \n");

        }
    } else{
        printf("lua chon cua ban khong co phu hop , moi ban nhap cac se trong pham vi se tu 1 toi 4");
    }
    printf("\n");
    return 0;
}
//}