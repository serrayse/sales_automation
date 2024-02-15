#ifndef lib_h_
#define lib_h_


struct customer {
	int ID;
	char name[50];
	unsigned int type: 1;
	double x_coord;
	double y_coord;
	struct customer *nextCusPtr;
};
typedef struct customer Customer;
typedef Customer *CustomerPtr;


struct product {
	int ID;
	char name[50];
	unsigned int type: 4;
	double price;
	struct product *nextProPtr;
};
typedef struct product Product;
typedef Product *ProductPtr;


struct purchased {
	int ID;
	int invoice_ID;
	int customer_ID;
	int product_ID;
	double cost;
	struct purchased *nextPurchasedPtr;
};
typedef struct purchased Purchased;
typedef Purchased *PurchasedPtr;


int kayitKontrol(CustomerPtr p,int ID);

void tum_musteriler();
void kurumsal_bireysel(Customer **s ,int a);
void musteri_ara(Customer **f, int musteri);
void musteri_ismi(Customer **fe, int musteri_id);


void tum_urunler();
void sebze_meyve(Product **e,int n);
void urun_ara(Product **a,int urun);

void kisinin_urunleri(Purchased **pur,int kisi);
double musteri_tutar(Purchased **m, int n);
double tum_top_tutar(Purchased **f);


void koordinat_bilgisi(Customer *a);
double kargo(double x_coord, double y_coord);



#endif
