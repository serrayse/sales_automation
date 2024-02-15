#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include "lib.h"

void tum_musteriler(Customer *p){

	Customer *temp;
	temp=p;
	while(temp->nextCusPtr != NULL){
		puts(temp->name);
		printf("Musteri no:%d\t",temp->ID);
		printf("Musteri tipi:%d\t",temp->type);
		printf("X koordinati:%.2lf\t",temp->x_coord);
		printf("Y koordinati:%.2lf\n\n",temp->y_coord);
		temp=temp->nextCusPtr;
	}
	puts(temp->name);
	printf("Musteri no:%d\t",temp->ID);
	printf("Musteri tipi:%d\t",temp->type);
	printf("X koordinati:%.2lf\t",temp->x_coord);
	printf("Y koordinati:%.2lf\n\n",temp->y_coord);
	temp=temp->nextCusPtr;
		
	
}




void kurumsal_bireysel(Customer **s ,int a){
	
	Customer *temp = *s;
	
	printf("\n%-5s %-15s %-15s %-8s %-8s\n","No","Isim", "Tip", "X", "Y");
	while(temp != NULL)
	{
		if(temp->type == a)
		{
			printf("%-5d ", temp->ID);
			printf("%-15s ", temp->name);
			printf("%-15u ", temp->type);
			printf("%-8.2f ", temp->x_coord);
			printf("%-8.2f ", temp->y_coord);
			printf("\n");
		}
		temp = temp->nextCusPtr;	
	}
}



void musteri_ara(Customer **f, int musteri){
	
	Customer *temp= *f;
	printf("%-5s %-15s %-15s %-8s %-8s\n","No:","Isim:","Tip:","X:","Y:");
	while(temp->ID != musteri){
		temp=temp->nextCusPtr;
	}
	printf("%-5d",temp->ID);
	printf("%-15s",temp->name);
	printf("%-15u",temp->type);
	printf("%-8.2f",temp->x_coord);
	printf("%-8.2f",temp->y_coord);
	
	printf("\n");
	
}


void musteri_ismi(Customer **fe, int musteri_id){
	
	Customer *temp= *fe;
	printf("%-5s","ismi:");
	while(temp->ID != musteri_id){
		temp=temp->nextCusPtr;
	}
	
	printf("%-15s",temp->name);
	
	
}


void tum_urunler(Product *f){

	Product *gecici;
	gecici=f;
	while(gecici->nextProPtr != NULL){
		puts(gecici->name);
		printf("Urun no:%d\t",gecici->ID);
		printf("Urun tipi:%d\t",gecici->type);
		printf("Fiyat:%.2lf\n\n",gecici->price);
	    gecici=gecici->nextProPtr;
	}
	puts(gecici->name);
	printf("Urun no:%d\t",gecici->ID);
	printf("Urun tipi:%d\t",gecici->type);
	printf("Fiyat:%.2lf\n\n",gecici->price);
	gecici=gecici->nextProPtr;
		
}


void sebze_meyve(Product **e,int n){
	
	Product *temp = *e;
	
	printf("\n%-5s %-15s %-15s %-8s %-8s\n","No","Isim", "Tip", "X", "Y");
	while(temp != NULL)
	{
		if(temp->type == n)
		{
			printf("%-5d ", temp->ID);
			printf("%-15s ", temp->name);
			printf("%-15u ", temp->type);
			printf("%-8.2f ", temp->price);
			printf("\n");
		}
		temp = temp->nextProPtr;	
	}
	
}




void urun_ara(Product **a,int urun){
	Product *tut= *a;
	printf("%-5s %-15s %-15s %-8s\n","\nNo:","Isim:","Tip:","Fiyat:");
	
	while(tut->ID != urun){
		tut=tut->nextProPtr;
	}
	printf("%-5d",tut->ID);
	printf("%-15s",tut->name);
	printf("%-15u",tut->type);
	printf("%-8.2f",tut->price);

	printf("\n");
	
}








void kisinin_urunleri(Purchased **pur,int kisi){
	Purchased *temp = *pur;
	
	printf("\n%-5s %-15s %-15s %-15s %-8s\n","No","Fatura no", "Musteri no", "Urun no", "Tutar");
	while(temp != NULL)
	{
		if(temp->customer_ID == kisi)
		{
			printf("%-5d ", temp->ID);
			printf("%-15d ", temp->invoice_ID);
			printf("%-15d ", temp->customer_ID);
			printf("%-15d ", temp->product_ID);
			printf("%-8.2f",temp->cost);
			printf("\n");
		}
		temp = temp->nextPurchasedPtr;	
	}
}




double musteri_tutar(Purchased **m, int n){
	Purchased *temp = *m;
	double sum = 0;
	
	while(temp != NULL)
	{
		if (temp->customer_ID == n)
		{
			sum += temp->cost;
		}
		temp = temp->nextPurchasedPtr;
	}
	return sum;
}





double tum_top_tutar(Purchased **f){
	Purchased *temp = *f;
	double tutar = 0;
	
	while (temp != NULL)
	{
		tutar += temp->cost;
		temp = temp->nextPurchasedPtr;
	}
	return tutar;


	
}







int kayitKontrol(CustomerPtr p,int ID){
	CustomerPtr temp;
	int check;
	temp=p;
	while (temp != NULL) {
            if (ID == temp->ID) {
                check = 1;
            }
            temp=temp->nextCusPtr;
        }
	if(check==1){
		return 1;
	}
	else	
	  return 0;
}




void koordinat_bilgisi(Customer *a){
	
	Customer *yedek;
	yedek=a;
	while(yedek->nextCusPtr != NULL){
		puts(yedek->name);
		printf("X koordinati:%.2lf\t",yedek->x_coord);
		printf("Y koordinati:%.2lf\n\n",yedek->y_coord);
		yedek=yedek->nextCusPtr;
	}
	puts(yedek->name);
    printf("X koordinati:%.2lf\t",yedek->x_coord);
	printf("Y koordinati:%.2lf\n\n",yedek->y_coord);
	yedek=yedek->nextCusPtr;

}









double kargo(double x_coord, double y_coord){
	double sayi=pow(x_coord-2,2) + pow(y_coord-2,2);
	double mesafe=sqrt(sayi); //maðaza koordinatý=(2,2) olsun
	double kargo=mesafe*1.75;
	return kargo;
}









