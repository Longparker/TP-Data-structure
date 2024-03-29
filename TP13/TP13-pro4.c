#include<stdio.h>
struct product{
    char name[20];
    int code;
    int quantity;
    float price;
};
int addproduct(struct product b){
    printf("Name\t\tCode\t\tQuantity\t\tprice\n");
    printf("%s\t\t%d\t\t%d\t\t%f\n",b.name,b.code,b.quantity,b.price);
}
int deleteproduct(struct product c,int code){
    int product;
    product =c.code-code;
    printf("Name\t\tCode\t\tQuantity\tprice\n");
    printf("%s\t\t%d\t\t%d\t\t%f\n",c.name,c.code,c.quantity,c.price);
    printf("product delete successfully\n");
    return product;
}
int updateproduct(struct product d,int quantity,int price){
    int product;
    product=quantity+d.quantity;
    product=price+d.price;
    printf("Name\t\tCode\t\tQuantity\tprice\n");
    printf("%s\t\t%d\t\t%d\t\t%f\n",d.name,d.code,d.quantity,d.price);
    printf("Product update successfully\n");
    return product;
}
int main(){
    struct product a;
    int choice;
    while(1){
        printf("\nEnter choice:");scanf("%d",&choice);
        if(choice==1){
            printf("Add New product\n");
            printf("Enter product name:");scanf("%s",&a.name);
            printf("Enter code:");scanf("%d",&a.code);
            printf("Enter Quantity:");scanf("%d",&a.quantity);
            printf("Enter price:");scanf("%f",&a.price);
        addproduct(a);
        }else if(choice==2){
            printf("Delete product\n");
            printf("Enter code:");scanf("%d",&a.code);
         deleteproduct(a,a.code);
        }else if(choice==3){
            printf("Updating product\n");
            printf("Enter product name:");scanf("%s",&a.name);
            printf("Enter code:");scanf("%d",&a.code);
            printf("Enter Quantity:");scanf("%d",&a.quantity);
            printf("Enter price:");scanf("%f",&a.price);
         updateproduct(a,a.quantity,a.price);
        }else{
            printf("Invalid\n");
        }
    }
}