#include<stdio.h>
//a menu program for user to choose option 1 or 2.

int main(void){

    puts("This is a program have a function.");
    puts("Choose what you want.");

    int opt;//declare a variable fo option
    
    printf("Option 1 is a Buffet pricing calculator\n"); //guide for user
    printf("Option 2 is a prime number calculator\n");
    printf("Option 3 will exit\n");
    printf("Please input 1 or 2 or 3:");
    scanf("%d",&opt);

    if(opt == 1){ //when option is 1

        unsigned int time_per;
        unsigned int adu_num;
        unsigned int child_num;
        unsigned int price_tot;
        unsigned int price_ser;

        printf("please input 1-6 represents what time you want to go\n");
        scanf("%d",&time_per);
        printf("Please input how many adults\n");
        scanf("%d",&adu_num);
        printf("Please input childen number\n");
        scanf("%d",&child_num);
        switch(time_per){  //different case will use different price

            case 1:
            case'1':
                price_tot = adu_num*985 + (float)child_num*985*0.7;
                printf("Weekday Lunch is $985/person\n");
                break;

            case 2:
            case'2':
                price_tot = adu_num*795 + (float)child_num*795*0.7;
                printf("Weekday Afternoon Tea is $795/person\n");
                break;

            case 3:
            case'3':
                price_tot = adu_num*1085 + (float)child_num*1085*0.7;
                printf("Weekday Dinner is $1085/person\n");
                break;

            case 4:
            case'4':
                price_tot = adu_num*1085 + (float)child_num*1085*0.7;
                printf("Weekend Lunch is $1085/person\n");
                break;

            case 5:
            case'5':
                price_tot = adu_num*975 + (float)child_num*975*0.7;
                printf("Weekend Afternoon tea is $975/person\n");
                break;


            case 6:
            case'6':
                price_tot = adu_num*1195 + (float)child_num*1195*0.7;
                printf("Weekend dinner is $985/person\n"); 
                break;
            
            default://input wrong time
                printf("Incorrect time entered.\n");
                printf("Enter a new time.");
                break;
        }
        if ((adu_num+child_num) > 20){ //if total people number >20,then have 5% discount
            price_ser = (float)(price_tot+0.5)*0.95*1.1; //plus 0.5 to reach right number
        }
        else{
            price_ser = (float)(price_tot+0.5)*1.1;   //normal price
        }
        printf("Total amount to be paid is %d\n",price_ser);
    }
    
    else if(opt == 2){ //when option is 2
        
        int input_num;
        int num;
        unsigned int count_tot = 0;
        unsigned int counter = 0;

        printf("Please input how many number you want to input :");
        scanf("%d",&num);

        for(int i = 1; i<=num; i++){ //for loop to judge every number
            printf("please input a number greater than 0: ");
            scanf("%d",&input_num);
        //judge if is not a prime number
            if(input_num <=1){
                count_tot+=input_num;
            
            }
        
            else{

                for(int j=2; j*j<=input_num; j++){
                    if(input_num % j== 0);
                    counter++;
                }
                if(counter>0){
                    count_tot+=input_num;
                }
                else{
                    printf("is prime");
                }
            }
    
    
    
        }
        printf("Sum of non-prime number is: %d",count_tot);
        
    }
    else if(opt == 3){ //when option is 3 then exit
        printf("Exit\n");
    }
    else{//user input right number
        printf("please input right number\n");
    }

}