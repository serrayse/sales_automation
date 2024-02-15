#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include "lib.h"

int main(){
	
    CustomerPtr bir=(Customer*)malloc(sizeof(Customer)); //CEM YILMAZ
	CustomerPtr iki=(Customer*)malloc(sizeof(Customer)); //ALÝ ATAY
	CustomerPtr uc=(Customer*)malloc(sizeof(Customer)); //BEREN SAAT
	CustomerPtr dort=(Customer*)malloc(sizeof(Customer)); //MEHMET GÜNSÜR

	
	bir->ID=1;
	strcpy(bir->name,"Cem Yilmaz");
	bir->type=0;
	bir->x_coord=5;
	bir->y_coord=10;
	bir->nextCusPtr=iki;
	
	iki->ID=2;
	strcpy(iki->name,"Ali Atay");
	iki->type=0;
	iki->x_coord=3;
	iki->y_coord=7.2;
	iki->nextCusPtr=uc;
	
	uc->ID=3;
	strcpy(uc->name,"Beren Saat");
	uc->type=1;
	uc->x_coord=9.42;
	uc->y_coord=12.3;
	uc->nextCusPtr=dort;
	
	dort->ID=4;
	strcpy(dort->name,"Mehmet Gunsur");
	dort->type=0;
	dort->x_coord=4.32;
	dort->y_coord=1.51;
	dort->nextCusPtr=NULL;
	
//---------------------------------------------------------------------------------------------------


    ProductPtr first=(Product*)malloc(sizeof(Product)); //SIKMA PORTAKAL
	ProductPtr second=(Product*)malloc(sizeof(Product)); //YERLÝ MUZ
	ProductPtr third=(Product*)malloc(sizeof(Product)); //SOÐAN
	ProductPtr fourth=(Product*)malloc(sizeof(Product)); //PIRASA
	ProductPtr fifth=(Product*)malloc(sizeof(Product)); //LAHANA
	
	first->ID=1;
	strcpy(first->name,"SIKMA PORTAKAL");        //ürün tipi sebze 1 meyve 2
	first->type=1;                            
	first->price=5.99;
	first->nextProPtr=second;
	
	second->ID=2;
	strcpy(second->name,"YERLI MUZ");
	second->type=1;
	second->price=12.95;
	second->nextProPtr=third;
	
	third->ID=3;
	strcpy(third->name,"SOGAN");
	third->type=2;
	third->price=7.45;
	third->nextProPtr=fourth;
	
	fourth->ID=4;
	strcpy(fourth->name,"PIRASA");
	fourth->type=2;
	fourth->price=3.95;
	fourth->nextProPtr=fifth;
	
	fifth->ID=5;
	strcpy(fifth->name,"LAHANA");
	fifth->type=2;
	fifth->price=5.95;
	fifth->nextProPtr=NULL;
	
	
//---------------------------------------------------------------------------------------------------

    
    PurchasedPtr birinci=(Purchased*)malloc(sizeof(Purchased)); //LAHANA
    PurchasedPtr ikinci=(Purchased*)malloc(sizeof(Purchased)); //YERLÝ MUZ
    PurchasedPtr ucuncu=(Purchased*)malloc(sizeof(Purchased)); //SOÐAN
    PurchasedPtr dorduncu=(Purchased*)malloc(sizeof(Purchased));//SOÐAN
    PurchasedPtr besinci=(Purchased*)malloc(sizeof(Purchased)); //SIKMA PORTAKAL
    PurchasedPtr altinci=(Purchased*)malloc(sizeof(Purchased)); //YERLÝ MUZ
    PurchasedPtr yedinci=(Purchased*)malloc(sizeof(Purchased)); //LAHANA
    PurchasedPtr sekizinci=(Purchased*)malloc(sizeof(Purchased)); //SIKMA PORTAKAL
    PurchasedPtr dokuzuncu=(Purchased*)malloc(sizeof(Purchased)); //YERLÝ MUZ
    PurchasedPtr onuncu=(Purchased*)malloc(sizeof(Purchased));   //PIRASA
    PurchasedPtr onbirinci=(Purchased*)malloc(sizeof(Purchased)); //SIKMA PORTAKAL
    PurchasedPtr onikinci=(Purchased*)malloc(sizeof(Purchased)); //LAHANA
    
    
    birinci->ID=1;
	birinci->invoice_ID=1;
	birinci->customer_ID=4;          //MEHMET
	birinci->product_ID=5;
	birinci->cost=32.30;
	birinci->nextPurchasedPtr=ikinci;

	
	ikinci->ID=2;
	ikinci->invoice_ID=1;
	ikinci->customer_ID=4;         //MEHMET
	ikinci->product_ID=2;
	ikinci->cost=25.50;
	ikinci->nextPurchasedPtr=ucuncu;
	
	ucuncu->ID=3;
	ucuncu->invoice_ID=1;
	ucuncu->customer_ID=4;          //MEHMET
	ucuncu->product_ID=3;
	ucuncu->cost=10.25;
	ucuncu->nextPurchasedPtr=dorduncu;
	
	
	dorduncu->ID=4;
	dorduncu->invoice_ID=2;
	dorduncu->customer_ID=1;           //CEM
	dorduncu->product_ID=3;
	dorduncu->cost=26.25;
	dorduncu->nextPurchasedPtr=besinci;
	
	besinci->ID=5;
	besinci->invoice_ID=2;
	besinci->customer_ID=1;              //CEM
	besinci->product_ID=1;
	besinci->cost=32.60;
	besinci->nextPurchasedPtr=altinci;
	
	altinci->ID=6;
	altinci->invoice_ID=3;
	altinci->customer_ID=3;               //BEREN
	altinci->product_ID=2;
	altinci->cost=44.10;
	altinci->nextPurchasedPtr=yedinci;
	
	yedinci->ID=7;
	yedinci->invoice_ID=3;
	yedinci->customer_ID=3;                //BEREN
	yedinci->product_ID=5;
	yedinci->cost=15.75;
	yedinci->nextPurchasedPtr=sekizinci;
	
	sekizinci->ID=8;
	sekizinci->invoice_ID=3;
	sekizinci->customer_ID=3;             //BEREN
	sekizinci->product_ID=1;
	sekizinci->cost=18.75;
	sekizinci->nextPurchasedPtr=dokuzuncu;
	
	dokuzuncu->ID=9;
	dokuzuncu->invoice_ID=4;
	dokuzuncu->customer_ID=2;            // ALI
	dokuzuncu->product_ID=2; 
	dokuzuncu->cost=26.15;
	dokuzuncu->nextPurchasedPtr=onuncu;
	
	onuncu->ID=10;
	onuncu->invoice_ID=4;
	onuncu->customer_ID=2;                //ALI
	onuncu->product_ID=4;                
	onuncu->cost=15.25;
	onuncu->nextPurchasedPtr=onbirinci;
	
	onbirinci->ID=11;
	onbirinci->invoice_ID=4;
	onbirinci->customer_ID=2;               //ALI
	onbirinci->product_ID=1;
	onbirinci->cost=22.50;
	onbirinci->nextPurchasedPtr=onikinci;
	
	onikinci->ID=12;
	onikinci->invoice_ID=4;
	onikinci->customer_ID=2;                 //ALI
	onikinci->product_ID=5;
	onikinci->cost=23.25;
	onikinci->nextPurchasedPtr=NULL;
	
	
	
//**************************************************************************************************************  
    
    
int secim,sonuc,customer_ID,product_ID;
char name[50];
unsigned int type;
double ucret_1,ucret_2,ucret_3,ucret_4;





printf("\t\t\t\t---------------------------------------\n");
printf("\t\t\t\t\tSatis Otomasyon Programi\n");
printf("\t\t\t\t---------------------------------------");
printf("\n\n\n--------------------\nLutfen islem seciniz\n1.Satis\n2.Musteri Bilgisi\n3.Urun Bilgisi\n4.Musteri Analizleri\n5.Urun Analizleri\n6.Bitir\n:");
scanf("%d",&secim);
	
while(secim != 6){
	
	switch(secim)
	{
	   	case 1:
			
			printf("\nMusteri numarasini giriniz:");
			scanf("%d",&customer_ID);
			sonuc=kayitKontrol(bir,customer_ID);
			double x1,y1;
			
			if(sonuc==1){
				printf("Kayit var.Musterinin ");
				musteri_ismi(&bir,customer_ID);
				
				printf("\nMusterinin faturasi:\n");
				kisinin_urunleri(&birinci,customer_ID);
				
				printf("\nMusterinin konum bilgisini giriniz:\n");
				scanf("%d %d",&x1,&y1);
				printf("\nMusterinin kargo ucreti:%.2lf TL",kargo(x1,y1));
				printf("\nMusterinin odeyecegi toplam tutar:%.2lf TL",musteri_tutar(&birinci,customer_ID));
				
			}
			else {
				printf("Musteri kaydiniz bulunmamaktadir.\n");	
			}
			printf("\n\n--------------------\nLutfen islem seciniz\n1.Satis\n2.Musteri Bilgisi\n3.Urun Bilgisi\n4.Musteri Analizleri\n5.Urun Analizleri\n6.Bitir\n:");
			scanf("%d",&secim);
			break;
			
		case 2:
			printf("\n2. islem secildi!\n");
			char a,b,c,choice;
			int biriki,ara;
		
			
			printf("Tum musteriler icin:a\nMusteri tipine gore:b\nBir musteri icin:c\t");
			scanf("%s",&choice);
			if(choice=='a'){
				printf("\nTum musteriler:\n\n");
				tum_musteriler(bir);
			}
			if(choice=='b'){
				printf("Kurumsal ise 1, Bireysel ise 0 girin:");
				scanf("%d",&biriki);
				kurumsal_bireysel(&bir,biriki);
			}
			if(choice=='c'){
				printf("Aradiginiz musterinin ID'sini giriniz:");
				scanf("%d",&ara);
	            musteri_ara(&bir,ara);
			}
		    printf("\n\n\n--------------------\nLutfen islem seciniz\n1.Satis\n2.Musteri Bilgisi\n3.Urun Bilgisi\n4.Musteri Analizleri\n5.Urun Analizleri\n6.Bitir\n:");
			scanf("%d",&secim);
			break;
			
		case 3:
			printf("\n3. islem secildi!\n");
			char d,e,f,sec;
			int sebzemeyve,bul;
			
			printf("Tum urunler icin: d\nUrun tipine gore: e\nBir urun icin: f\t");
			scanf("%s",&sec);
			if(sec=='d'){
				printf("\nTum urunler:\n\n");
				tum_urunler(first);
			}
			if(sec=='e'){
				printf("\nMeyve ise 1, Sebze ise 0 girin:");
				scanf("%d",&sebzemeyve);
				sebze_meyve(&first,sebzemeyve);
			}
			if(sec=='f'){
				printf("\nAradiginiz urunun ID'sini giriniz:");
				scanf("%d",&bul);
				urun_ara(&first,bul);
			}
			printf("\n\n\n--------------------\nLutfen islem seciniz\n1.Satis\n2.Musteri Bilgisi\n3.Urun Bilgisi\n4.Musteri Analizleri\n5.Urun Analizleri\n6.Bitir\n:");
			scanf("%d",&secim);
			break;
			
		case 4:
			printf("4. islem secildi!\n");
			int analiz,kimlik;
			printf("\nMusterinin satin aldigi urunlerin toplam tutarini goruntulemek icin 1,\nTum musterilerin aldigi toplam tutar icin 2,\nMusterilerin kargo ucreti icin 3:");
			scanf("%d",&analiz);
			if(analiz==1){
				printf("Musteri ID'sini giriniz:");
				scanf("%d",&kimlik);
				printf("%d nolu musterinin satin aldigi urunlerin toplam tutari= %.2lf TL",kimlik,musteri_tutar(&birinci,kimlik));
			}
			
			
			if(analiz==2){
				printf("Tum musterilerin aldigi toplam tutar:%.2lf TL",tum_top_tutar(&birinci));
				
			}
			
			if(analiz==3){
				printf("\nMusterilerin koordinat bilgileri:\n\n");
				koordinat_bilgisi(bir);
				double sum=kargo(5,10)+kargo(3,7.2)+kargo(9.42,12.3)+kargo(4.32,1.51);
				printf("\nToplam kargo tutari:%.2lf TL",sum);
				
			}
			
			

			printf("\n\n\n--------------------\nLutfen islem seciniz\n1.Satis\n2.Musteri Bilgisi\n3.Urun Bilgisi\n4.Musteri Analizleri\n5.Urun Analizleri\n6.Bitir\n:");
			scanf("%d",&secim);
			break;
		case 5:
			printf("5. islem secildi!\n");
			int Sec,mod,urunno;
			printf("\nBir urunun toplam satis tutari icin 1,\nBir urun tipinin toplam satis tutari icin 2,\nTum urunlerin toplam satis tutari icin 3:");
			scanf("%d",&Sec);
			
			if(Sec==1){
				printf("Goruntulemek istediginiz urun ID'sini girin:");
				scanf("%d",&urunno);
		        //FONKSÝYONUNU YAZAMADIM
				
			}
			
			if(Sec==2){
				printf("Goruntulemek istediginiz urun tipini(meyve:1 sebze:2) girin:");
				scanf("%d",&mod);
		        //BUNU DA YAZAMADIM
			}
			
			if(Sec==3){
				printf("\n\nTum urunlerin toplam satis tutari= %.2lf TL",tum_top_tutar(&birinci));
					
			}
		
		    printf("\n\n\n--------------------\nLutfen islem seciniz\n1.Satis\n2.Musteri Bilgisi\n3.Urun Bilgisi\n4.Musteri Analizleri\n5.Urun Analizleri\n6.Bitir\n:");
			scanf("%d",&secim);
			break;	
		default:
			printf("\nERROR!\a");
		    printf("\n\n\n--------------------\nLutfen islem seciniz\n1.Satis\n2.Musteri Bilgisi\n3.Urun Bilgisi\n4.Musteri Analizleri\n5.Urun Analizleri\n6.Bitir\n:");
			scanf("%d",&secim);
			break;
	}
	
}
       printf("\n\nIslem Tamamlandi.");
	
	
	
	return 0;
}
