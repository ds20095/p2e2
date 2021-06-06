#include <stdio.h>
#include <string.h>

struct car
{
	char model[50];
	double price;
	int yearofproduction;
	
};
int main()
{
	int end = 0;
	struct car cars [100];
	
	for (int i= 0; i < 100; i ++)
	{
		printf("enter vehicle model: ");
		scanf("%s" , &cars[i].model);
		
		printf("enter price: ");
		scanf("%lf" , & cars[i].price);
		
		printf("enter yearofproduction: ");
		scanf("%d" , & cars[i].yearofproduction);
		
		if(cars[i].yearofproduction ==-1)
		
		{
			i = 100;
		}
		
	}
	while (end == 0)
	{
		printf("1. enter model:\n");
		printf("2.enter price:\n");
		printf("3.enter Quit:\n");
		int choice;
		
		scanf("%d" , &choice);
		if(choice == 1)
		{
			char model [50];
			printf("find model:");
			
			scanf("%s" , & model);
			
			for (int i = 0; i < 100; i++)
			
			{
				if(strcmp(model , "*")==0)
				{
					if(cars[i].price >0 && cars[i].yearofproduction > 0 )
					
					{
						printf("model: %s\n" , cars[i].model);
						printf("price: %lf\n" , cars[i].price);
					}
				}
			}
		}
	}
}

