#include <stdio.h>
#include <stdbool.h>

int main()
{
	int choice = 0;
	do{
		printf("\n----------\n[1] Add\n[2] Subtract\n[3] Multiply\n[4] Divide\n[5] Exit\n----------\n");
	    printf("Please select a number: ");
	    scanf("%d", &choice);
	    
	    switch(choice)
	    {
	    	case 1:
	    		printf("%d", addFunc());
	    		break;
	    	case 2:
	    		printf("%d", subFunc());
	    		break;
	    	case 3:
	    		printf("%d", multFunc());
	    		break;
	    	case 4:
	    		printf("%d", divFunc());
	    		break;
	    	case 5:
	    		break;
		}
	}while(choice != 5);
	
    
    return 9;
}

int addFunc()
{
	int x, total;
	while(true)
	{
		printf("Please enter a number: ");
		scanf("%d", &x);
		if(x = 0)
		{
			total += x;
			break;
		}
		total += x;
	}
	return total;
}

int subFunc()
{
	int x, total;
	while(true)
	{
		printf("Please enter a number: ");
		scanf("%d", &x);
		
		if(x <= 0)
		{
			total -= x;
			break;
		}
		total -= x;
	}
	return total;
}

int multFunc()
{
	int x, total = 1;
	while(true)
	{
		printf("Please enter a number: ");
		scanf("%d", &x);
		
		if(x <= 0)
		{
			break;
		}
		total *= x;
	}
	return total;
}

int divFunc()
{
	int x, total = 1;
	while(true)
	{
		printf("Please enter a number: ");
		scanf("%d", &x);
		
		if(x <= 0)
		{
			break;
		}
		total = x / total
	}
	return total;
}
