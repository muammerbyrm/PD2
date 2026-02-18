#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main(){
	int top=0,a,ram;
	srand(time(NULL));
	setlocale(LC_ALL,"Turkish");
	printf("ilk Zarý  atýnýz\n");
	system("pause");
	a=rand()%6+1;
	printf("Ýlk gelen zar :%d\n",a);
	top=a;
	printf("2. Zar  atýnýz\n");
	system("pause");
	a=rand()%6+1;
	printf("ikinci gelen zar :%d\n",a);
	top=top+a;
	ram=top;
	if(top==7||top==11)
		printf("Oyuncu Kazandý Tebrikler\n");
	else if(top==2||top==3||top==12)
	    printf("Oyuncu kaybetti \n");
    else
    printf("Toplam %d attýnýz tekrar %d atarsanýz kazanýrsýnýz 7 atarsanýz oyuncu kaybeder\n",ram,ram);
	while(top!=7){
	printf("ilk Zarý  atýnýz\n");
	system("pause");
	a=rand()%6+1;
	printf("Ýlk gelen zar :%d\n",a);
	top=a;
	printf("2. Zar  atýnýz\n");
	system("pause");
	a=rand()%6+1;
	printf("ikinci gelen zar :%d\n",a);
	top=top+a;
	if(top==ram){
		printf("Oyuncu Kazandý Tebrikler\n");
		break;
		}
	else if(top==7){
	    printf("Oyuncu kaybetti \n");
	    break;
		}
    else
    printf("%d attýnýz %d atarsanýz kazanýr 7 atarsanýz oyuncu kaybeder\n",top,ram);
}
	system("pause");
    return 0;
}
