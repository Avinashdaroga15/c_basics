#include<stdio.h>

int main(){
    int depoMoney,inRat=5,withdlMoney,p;
    float total,a;
    char ans;
//     A	= 	final amount
// P	= 	initial principal balance
// r	= 	interest rate
// n	= 	number of times interest applied per time period
// t	= 	number of time periods elapsed

    printf("Do you want to open bank account\nNote:y for yes and n for no\n");
    scanf("%c",&ans);
    if (ans == 'n'|| ans=='N')
    {
        printf("Thank you for giving opportunity to serve you\n");
    }else{

        printf("Welcome in Krsna's bank\nPlease deposit some money atleast 100rs and your account will be opened\nEnter ammount to be depsited:");
        scanf("%d",&depoMoney);
        if (depoMoney<100)
        {
            printf("Sorry, you can not open a/c with this amount\n");
        }else{
            total=p= depoMoney;
            printf("Enter withdrowal money if you want to withdrow otherwise enter -1:");
            scanf("%d",&withdlMoney);
            if (withdlMoney==-1)
            {
                printf("Thank you for opening a/c in krsna's bank\n");
            }else if(withdlMoney<=total)
            {   
                total-=withdlMoney;
                printf("withdrwal is successful and Your remaining ammount is %.2lf\n",total);
            }else{
                printf("Soory, you can not withrow entered money now because you have insuuficient money %.2lf\n",total);
            }
        }
    }
    
    return 0;
}