#include <stdio.h>
#include <math.h>

	float Funct(float x) 
	{
	        return cos(x);       // any function can be given and to be entered here!  
	}

        void intermediate(float a,float b)
	{
		if(Funct(a)*Funct(b) >= 0)    
		{
			printf("\nYou have not assumed right a and b");
			return;
		}
		
		float c;
		
		while((b-a) >= 0.0001)
		{
			c = (a+b) / 2;   
			
			if(Funct(c) == 0.0000)  
			break;
			else if(Funct(c) * Funct(a) < 0)    
			b = c;  
			else
			a = c;  
		}
		printf("\nThe value of root is = %.4f",c);
		float ans;
		ans = Funct(c);
		printf("\nThe value of f(c) = %.4f",ans);
	}
	
	int main()
	{
		float a,b;
		printf("Enter the value of a = ");
		scanf("%f",&a);
		printf("\nEnter the value of b = ");
		scanf("%f",&b);
		intermediate(a,b);  
		return 0;
	}
	

