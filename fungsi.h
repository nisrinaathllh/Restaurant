#ifndef FUNGSI_H_INCLUDED
#define FUNGSI_H_INCLUDED
#include <stdio.h>
#include <math.h>
#include <windows.h>

int menu(), main();
int y, x=0, inminum = 0, intotal = 0, hmakan = 0, hminum = 0, inmakan = 0;
int meja[20]={0};
int hm[4]={70000, 35000, 20000, 15000};
int hn[4]={20000, 14000, 10000, 8000};

 int dine(){
  system("cls");
  printf("Meja yang tersedia : ");
  for(y=0;y<20;y++){
   if(meja[y]==0){
    printf("%d ",(y+1));
   }
  }
   printf("\nSilahkan pilih meja 1-20\n");
   printf("MEJA ANDA : ");
   scanf("%d",&x);
   fflush(stdin);
    while(x<21 && x!=0){
     if(meja[(x-1)]==0){
      meja[(x-1)]+=1;
       printf("Meja kosong, silahkan menuju ke meja anda \n");
       system("pause");
       menu();
     }else{
      printf("Meja tersebut sudah penuh \nSilahkan pilih meja lain \n");
      system("pause");
      dine();
      } 
     } 
      printf("\nMeja hanya tersedia dari 1-20 saja\n");
      system("pause");
      system("cls");
      dine();
}

 int makan(){ 
      system("cls");
   printf("--------------------------------------------------\n");
      printf("                   MAKANANAN                      \n");
      printf("--------------------------------------------------\n");
      printf("     1. PIZZA                           70        \n");
      printf("     2. BURGER                          35        \n");
      printf("     3. CHICKEN WINGS                   20        \n");
      printf("     4. ROTI BAKAR                      15        \n");
      printf("     5. KEMBALI                                   \n");
      printf("\n");
      printf("==================================================\n");
      printf("PILIHAN ANDA : ");
      scanf("%d",&inmakan);
      fflush(stdin);
      switch(inmakan){
   case 1:
             printf("Pilihan anda adalah PIZZA\n");
             hmakan = hmakan+hm[(inmakan-1)];
             system ("pause");
             menu();
            
          case 2:
             printf("Pilihan anda adalah BURGER\n");
             hmakan = hmakan+hm[(inmakan-1)];
             system ("pause");
          menu();

   case 3:
             printf("Pilihan anda adalah CHICKEN WINGS\n");  
             hmakan = hmakan+hm[(inmakan-1)];
             system ("pause");
          menu();
            
         case 4:
             printf("Pilihan anda adalah ROTI BAKAR\n");
             hmakan = hmakan+hm[(inmakan-1)];
             system ("pause");
          menu();
         
         case 5:
             menu();
              break;
      
   default:
    printf("\nPilih nomor sesuai yang ada di menu\n");
    system("pause");
    makan();
          }
    }
    
 int minum(){
      system("cls");
         printf("--------------------------------------------------\n");
         printf("                   MINUMAN                        \n");
         printf("--------------------------------------------------\n");
         printf("     1. MILKSHAKE VANILLA               20        \n");
         printf("     2. ORANGE JUICE                    14        \n");
         printf("     3. ICE TEA                         10        \n");
         printf("     4. MINERAL WATER                    8        \n");
         printf("     5. KEMBALI                                   \n");
         printf("\n");
         printf("==================================================\n");
   printf("PILIHAN ANDA : ");
         scanf("%d",&inminum);
            fflush(stdin);
           switch(inminum){
           case 1:
             printf("Pilihan anda adalah MILKSHAKE VANILLA\n");
             hminum = hminum+hn[(inminum-1)];
             system ("pause");
             menu();
            
          case 2:
             printf("Pilihan anda adalah ORANGE JUICE\n");
             hminum = hminum+hn[(inminum-1)];
             system ("pause");
          menu();

   case 3:
             printf("Pilihan anda adalah ICE TEA\n");
            hminum = hminum+hn[(inminum-1)];
             system ("pause");
          menu();
            
         case 4:
            printf("Pilihan anda adalah MINERAL WATER\n");
            hminum = hminum+hn[(inminum-1)];
             system ("pause");
          menu();
         
         case 5:
             menu();
              break;
      
   default:
    printf("\nPilih nomor sesuai yang ada di menu\n");
    system("pause");
    minum();
          }
    }
         
 int bayar(){
  int htot = hmakan+hminum;
  int uang = 0;
  int kembali = 0;
         system("cls");
         printf("--------------------------------------------------\n");
         printf("                   BAYAR                          \n");
         printf("--------------------------------------------------\n");
         printf(" Total Harga Makanan %d\n",hmakan);
         printf(" Total Harga Minuman %d\n",hminum);
         printf(" Total Yang Harus Dibayar %d\n",htot);
   printf("--------------------------------------------------\n");
         printf("     1. TUNAI                                     \n");
         printf("     2. KREDIT                                    \n");
         printf("     3. KEMBALI                                   \n");
         printf("\n");
         printf("==================================================\n");
         printf("PILIHAN ANDA : ");
         scanf("%d",&intotal);
   printf("--------------------------------------------------\n");
         fflush(stdin);
            switch(intotal){
            case 1:
             if(htot==0){
              printf("Silahkan memesan terlebih dahulu\n");
              system("pause");
              return menu();
       }else{
             printf("Pilihan anda adalah TUNAI\n");
             printf("Masukkan jumlah uang anda : ");
             scanf("%d",&uang);
             printf("\nUang yang anda masukkan adalah : %d",uang);
             if(uang>htot){
              kembali = uang-htot;
               printf("\nKembalian anda adalah : %d\n",kembali);
               printf("Silahkan ambil uang anda di kasir\n");
               printf("Terima Kasih!!!\n");
               printf("\n");
            hmakan=0;
               hminum=0;
               kembali=0;
               system("Pause");
               main();
       }else if(uang==htot){
         printf("\nUang yang anda masukkan pas\n");
               printf("Terimakasih silahkan datang kembali!!\n");
               hmakan=0;
               hminum=0;
               system("Pause");
               main();
       }else{
        printf("\nUang yang anda masukkan kurang silahkan coba lagi\n");
        system("Pause");
       bayar();
        }
           }  
             case 2:
              if(htot==0){
               printf("Silahkan memesan terlebih dahulu\n");
               system("pause");
               return menu();
        }else{
              printf("Pilihan anda adalah KREDIT\n");
              printf("Harap agar segera dilunaskan\n");
              printf("Terima Kasih!!!\n");
              printf("\n");
              hmakan=0;
              hminum=0;
              system("Pause");
              main();
              }
             case 3:
              menu();
    default:
     printf("\nPilih nomor sesuai yang ada di menu\n");
     system("pause");
     bayar();
         }
  }
          
 int leave(){
            if (hmakan !=0 || hminum !=0){     
          printf("\nMohon dibayar terlebih dahulu\n");
          printf("\n");
             system("pause");
             return menu();
         }else{
             printf("\nTERIMA KASIH!!!\n");
             printf("Silakan datang kembali\n");
    exit(0);
    
           }
   }
#endif
