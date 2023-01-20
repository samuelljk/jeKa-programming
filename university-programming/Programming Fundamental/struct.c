#include <stdio.h>

struct meatAdditional{
	char meatType;
	int dayPack, monthPack, yearPack;
	int dayExp, monthExp, yearExp;
}

struct product_cat_t{
	struct meatAdditional meatItem;
	struct produceAdditional produceItem;
	struct dairyAdditional dairyItem;
	struct cannedAdditional cannedItem;
	struct nonFoodAdditional nonFoodItem;
}

struct product{
	char item_name[20];
	int unit_cost;
	char product_cat;
	
	struct product_cat_t item;
}

void scan(){
	struct product item;
	
	scanf("%s", item.item_name);
	scanf("%d", &item.unit_cost);
	scanf("%c", &item.product_cat);
	
	if (item.product_cat == 'M'){
		struct meatAdditional meatItem;
		scanf("%c", &meatItem.meatType);
		scanf("%d %d %d", &meatItem.dayPack, &meatItem.monthPack, &meatItem.yearPack);
		scanf("%d %d %d", &meatItem.dayExp, &meatItem.monthExp, &meatItem.yearExp);
	}
}

void print(){
	
}

int main(){
	scan();
	print();
	
	return 0;
}