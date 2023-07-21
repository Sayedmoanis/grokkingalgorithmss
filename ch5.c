#include <stdio.h>
#include <stdlib.h>

#define num_product 3

struct product {
char name[30];
float salary;
};


int main()
{
    struct product products[num_product];

    strcpy(products[0].name,"apple");
    products[0].salary=0.67;

    strcpy(products[1].name,"milk");
    products[0].salary=1.49;

 strcpy(products[2].name,"avocado");
    products[0].salary=1.49;

char productname[20];
printf("enter the prouduct :");
scanf("%s",productname);
int i;
float salary=-1;
for(i=0;i<num_product;i++){
    if (strcmp(products[i].name,productname)==0){
        salary=products[i].salary;
        break;
    }
}
if (salary!=-1){
    printf("the salary of %s is %f :\n",productname,salary);
}
else{
    printf("product not found \n");
}





    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

#define max_person 3

int main() {
    char names[max_person][50];
    long long int phoneNumbers[max_person];
    for (int i = 0; i < max_person; i++) {
        printf("Enter the name of person %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter the phone number for person %d: ", i + 1);
        scanf("%lld", &phoneNumbers[i]);
    }

    printf("Available Phone Numbers:\n");
    for (int i = 0; i < max_person; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    int x;
    printf("Enter the number of the person you want to know the phone number for: ");
    scanf("%d", &x);

    if (x >= 1 && x <= max_person) {
        printf("Phone number for %s: %lld\n", names[x - 1], phoneNumbers[x - 1]);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
