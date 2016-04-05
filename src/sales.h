#ifndef __SALES_H__
#define __SALES_H__

#include "generic.h"
#include "clients.h"
#include "products.h"

#define SALE_SIZE 7

#define N 0
#define P 1

typedef struct sale *SALE;

bool isSale(SALE sale, PRODUCTCAT prodCat, CLIENTCAT clientCat);
SALE toSale(PRODUCT p, CLIENT c, double price, int quant, int month, int branch, int mode);
SALE readSale(char *line);
PRODUCT getProduct(SALE s);
CLIENT getClient(SALE s);
double getPrice(SALE s);
int getQuant(SALE s);
int getMonth(SALE s);
int getBranch(SALE s);
int getMode(SALE s);

#endif