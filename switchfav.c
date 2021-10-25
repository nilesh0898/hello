#include <stdio.h>

int main ()
{   
    char  fooditem ;
    
      printf("enter your order we are seving Burger, Pizza, French fries, Swandwich, Icecream.\n Use first letter(in capital) of food item ");
      scanf("%c",&fooditem);
      
      switch (fooditem)
      {
          case 'B':
          
            printf("you have chosen burger.\n Cost for 1 burger is 220rs.\n how many burger would you like to order");
            
            int n, m=220;
            scanf("%d",&n);
            printf("you need to pay %d, on the counter ",m*n);
            break;
          
         case 'P':
         
            printf("you have chosen pizza.\n Cost for 1 pizza is 300rs.\n how many pizza would you like to order");
            
            int x, y=300;
            scanf("%d",&x);
            printf("you need to pay %d, on the counter ",x*y);
            break;
         
         case 'F': 
         
            printf("you have chosen french fries.\n Cost for french fries is 50rs.\n how many french fries would you like to order");
            
            int c, d=50;
            scanf("%d",&c);
            printf("you need to pay %d, on the counter ",c*d);
            break;
     
         case 'S':
         
           printf("you have chosen Swandwich.\n Cost for 1 Swandwich is 150rs.\n how many Swandwiches would you like to order");
            
            int q, r=150;
            scanf("%d",&q);
            printf("you need to pay %d, on the counter ",q*r);
            break;
            
         case 'I':  

            printf("you have chosen Icecream.\n Cost for 1 Icecream is 90rs.\n how many Icecreams would you like to order");
            
            int g, h=90;
            scanf("%d",&g);
            printf("you need to pay %d, on the counter ",g*h);
            break;
            
        default :
        
          printf("enter B,P,F,S,I only");
          break;
      }    
    return 0;
}