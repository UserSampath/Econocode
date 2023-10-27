#include<stdio.h>
#include<math.h>
void main(){

    float da,db,sa,sb;
    printf("enter demand function:     *** QD=a-bP ***\n");
    printf("enter: a : ");
    scanf("%f",&da);
    printf("enter: b : ");
    scanf("%f",&db);

    printf("enter supply function:      *** QS=a+bP *** \n");
    printf("enter: a : ");
    scanf("%f",&sa);
    printf("enter: b : ");
    scanf("%f",&sb);

    float a,b,price,quantity;
    a=da+sa*-1;
    b=sb+db*-1;
    price=a/b;
    quantity=da+(db*(price));

    printf("\nequilibrium price is %.2f  \n",price);
    printf("equilibrium quantity is %.2f  \n",quantity);

    float maxprice,minprice;
    maxprice=da/(db*-1);
    printf("maximum demand price is %.2f  \n",maxprice);
    minprice=(sa*-1)/sb;
    printf("minimum supply price is %.2f  \n",minprice);

    float Consumer_surplus;
    Consumer_surplus=((maxprice-price)*quantity)/2;
    printf("\nConsumer_surplus is %.2f  \n",Consumer_surplus);

    float Producer_surplus;
    Producer_surplus=(price*quantity)-((minprice+price)/2)*quantity;
    printf("Producer_surplus is %.2f  \n",Producer_surplus);

    float Economic_surplus;
    Economic_surplus=Consumer_surplus+Producer_surplus;
    printf("Economic_surplus is %.2f  \n",Economic_surplus);


    printf("\n*** do you want to continue with tax or Subsidies ***  \n");
    printf("It is tax  --1-- ,It is Subsidies  --2--  exit  --0--  \n");
    int check;
    float TaxOrSub;
    scanf("%d",&check);

    switch(check) {
        case 1 :
            printf("enter tax :");
            scanf("%f",&TaxOrSub);
            a=da+(sa*(-1))+(sb*TaxOrSub);
            price=a/b;
            quantity=da+(db*(price));

            printf("\nNew equilibrium price is %.2f  \n",price);
            printf("New equilibrium quantity is %.2f  \n",quantity);

            Consumer_surplus=((maxprice-price)*quantity)/2;
            printf("Consumer_surplus is %.2f  \n",Consumer_surplus);

            Producer_surplus=((((quantity+(sa*(-1)))/sb)-minprice)*quantity)/2;
            printf("Producer_surplus is %.2f  \n",Producer_surplus);

            Economic_surplus=Consumer_surplus+Producer_surplus;
            printf("Economic_surplus is %.2f  \n",Economic_surplus);

            break;

        case 2 :

            printf("enter Subsidies :");
            scanf("%f",&TaxOrSub);
            a=da+(sa*(-1))+(sb*(TaxOrSub*(-1)));
            price=a/b;
            quantity=da+(db*(price));

            printf("New equilibrium price is %.2f  \n",price);
            printf("New equilibrium quantity is %.2f  \n",quantity);

            Consumer_surplus=((maxprice-price)*quantity)/2;
            printf("Consumer_surplus is %.2f  \n",Consumer_surplus);

            Producer_surplus=((((quantity+(sa*(-1)))/sb)-minprice)*quantity)/2;
            printf("Producer_surplus is %.2f  \n",Producer_surplus);

            Economic_surplus=Consumer_surplus+Producer_surplus;
            printf("Economic_surplus is %.2f  \n",Economic_surplus);

            break;

        case 0 :
        printf("thank You\n" );
            break;

        }

    }
