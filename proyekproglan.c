#include <stdio.h>
#include <math.h>
#include <windows.h>
#include "fungsi.h"
  
 int place(int a){
     switch(a){
       case 1:
       dine();
       case 2: 
       menu();
      case 3:
       exit(0);
      default:
    printf("\nPilih nomor sesuai yang ada di menu\n");
    system("pause");
    system("cls");
    main();
  }  
  }
  
  int main(){
  int tempat;
  system("COLOR 9E");
  system("cls");
  printf("\t\t\t==================================================\n");
     printf("\t\t\t          SELAMAT DATANG DI RESTO ARCHI           \n");
     printf("\t\t\t             MADE by DARIO & NISRINA              \n");
     printf("\t\t\t==================================================\n\n\n");
  printf("1. Dine-in \n");
  printf("2. Takeaway \n");
  printf("3. Exit \n");
  printf("-------------------------------------------\n");
     printf("PILIHAN ANDA : ");
     scanf("%d",&tempat);
     fflush(stdin);
  place(tempat);
  }
   
 int menu(){
     int pilih;
  system("cls");
     printf("--------------------------------------------------\n");
     printf("                   MENU RESTAURANT                \n");
     printf("--------------------------------------------------\n");
     printf("     1. MAKANAN                                   \n");
     printf("     2. MINUMAN                                   \n");
     printf("     3. BAYAR                                     \n");
     printf("     4. KEMBALI                                   \n");
     printf("     5. EXIT                                      \n");
     printf("\n");
  printf("-------------------------------------------\n");
     printf("PILIHAN ANDA : ");
     scanf("%d",&pilih);
     fflush(stdin);
     switch(pilih){
      case 1:
    makan();
    break;
   case 2:
    minum();
    break;
   case 3:
    bayar();
    break;
   case 4:
    main();
    break;
   case 5:
    leave();
    return 0;
    break;
   default: 
    printf("\nPilih nomor sesuai yang ada di menu\n");
    system("pause");
    menu();
   }
 }
