#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    //menu
    int m;
    //case 1,2
    int i,j,n;
    //case 3
    int k;
    //menu
    int t[5];

    menu:
    printf("====================\n");
    puts("        Menu");
    printf("====================\n");
    puts("1. Level 1");
    puts("2. Level 2");
    puts("3. Level 3");
    puts("4. Exit");
    printf("\n");
    printf("Pilih Menu : ");
    scanf("%d",&m);

    switch(m){
        case 1:
            system("cls");
            level1:
            printf("Masukkan Angka : ");
            scanf("%d", &n);
            for(i=0;i<=n;i++){
                for(j=i;j<=i*2;j++){
                    printf("%d ", j);
                }
                printf("\n");
            }
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto level1;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto menu;
            }
            break;

        case 2 :
            system("cls");
            level2:
            printf("Masukkan Angka : ");
            scanf("%d", &n);
            for(i=0;i<=n;i++){
                for(j=1;j<=i;j++){
                    printf("%d ", i*j);
                }
                printf("\n");
            }
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto level2;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto menu;
            }
            break;

        case 3 :
            system("cls");
            level3:
            printf("Masukkan Angka(Max 9): ");
            scanf("%d", &n);
            if(n<=9){
                for(i=1;i<=n;i++){
                    for(j=i;j<n;j++){
                        printf(" ");
                    }
                    for(k=1;k<=2*i-1;k++){
                        printf("%d", (k>i)?2*i-k:k);
                    }
                    printf("\n");
                }
                for(i=n-1;i>=1;i--){
                    for(j=i;j<n;j++){
                        printf(" ");
                    }
                    for(k=1;k<=2*i-1;k++){
                        printf("%d", (k>i)?2*i-k:k);
                    }
                    printf("\n");
                }
            }else{
                printf("Kebanyakan");
            }
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto level3;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto menu;
            }
            break;

        case 4 :
            system("cls");
            selesai:
            gotoxy(35,9);
            printf("Terima Kasih");
            gotoxy(25,12);
            printf("Tetap Semangat,Demi WAIFU Tercinta");
            break;

        default :
            printf("Tidak ada di Menu. Pilih yang lain");
            printf("\n");
            printf("Ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto menu;
            }
            if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto selesai;
            }
    }

}
