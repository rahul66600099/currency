#include <stdio.h>
#include<conio.h>
int main()
{
	float amount,Result;
	int choice;
	printf("1. For Dollers\n");
	printf("2. For Yen\n");
    printf("3. For Euros\n");
  	printf("4. For Riyal\n");
    printf("5. For Dinar\n");
    printf("6. For SNG\n");
    printf("7. For CNY\n");
    printf("8. for NRP\n\n");
    printf("Enter amount in rupees\n");
    scanf("%f",&amount);
    printf("ENTER A CHOICE\n");
    scanf("%d",&choice);
  	switch(choice)
  	{
  	case 1:
                Result=amount/74.397;
  		printf("%f Amount equal to %f Doller",amount,Result);
  			break;  
		case 2:
                Result=amount/0.7105;
  		printf("%f Amount equal to %f Yen",amount,Result);
  			break;  		  			
       case 3:
                Result=amount/86.95;
  		printf("%f Amount equal to %f Euro",amount,Result);
  			break;  	
       case 4:
                Result=amount/19.82;
  		printf("%f Amount equal to %f Riyal",amount,Result);
  			break;  	
       case 5:
                Result=amount/242.80;
  		printf("%f Amount equal to %f Dinar",amount,Result);
  			break;  	
  
         case 6:
                Result=amount/54.6474;
  		printf("%f Amount equal to %f SNG",amount,Result);
  			break;  
	
	     case 7:
                Result=amount/11.134;
  		printf("%f Amount equal to %f CYN",amount,Result);
  			break; 
			   
  		 case 8:
                Result=amount/0.6249;
  		printf("%f Amount equal to %f NPR",amount,Result);
  			break;  
       default:     
                printf("Invalid Choice");
}
  	getch();
}

