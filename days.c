/* Name: Temi
 * Section #: L03
 * Email: tososany@mtu.edu
 * Date: 09/19/2024
 * */

 #include <stdio.h>

int main()
{
	//Define the variables for user input and Zeller's algorithm
	int year, month, day;
	int Y,y,c,d,m,w;

	// Define the variable for the prompt and print it to the terminal
	char *prompt = "Please enter the day [YYYY/Month/Day]:";
	printf(prompt);

	// Scan for user input
	scanf("%d/%d/%d \n",&year,&month,&day);

	//Assign a value to Y according to Zeller's algorithm
	if (month <= 2)
	{
		Y = year -1;
	}
	else
	{
		Y = year;
	}

	// Assign the last 2 digits of Y to y
	if (Y > 99)
	{
		y = Y%100;
	}
	else
	{
		y =Y;
	}
	
	// Assign the first 2 digits of Y to c
	c = Y/100;

	// Assign the days amount to the month
	if (day > 31 )
	{
		printf("Invalid date");
		return 0;
	}
	else if ((month==9||month==6||month==4||month==11)&&day>30)
	{
		printf("Invalid date");
		return 0;
	}
	else if(month ==2 && day>29)
	{
		printf("Invalid date");
		return 0;
	}
	else
	{
		d = day;
	}

	// Assign shifted month numbers to m
	if (month == 1 )
	{
		m = 13;
	}
	else if (month == 2)
	{
		m = 14;
	}
	else
	{
		m= month;
	}

	// Assign Zeller's algorithm to w 
	w = (((13*(m+1))/5)+(y/4)+(c/4)+d+y-(2*c))%7;

	//Print the day of the week depending on the value of w
	if (w==0)
	{
		printf("Saturday\n");
	}
	else if (w==1)
	{
		printf("Sunday\n");
	}
	 else if (w==2)
        {
                printf("Monday\n");
        } 
	 else if (w==3)
        {
                printf("Tuesday\n");
        }
	 else if (w==4)
        {
                printf("Wednesday\n");
        }
	 else if (w==5)
        {
                printf("Thursday\n");
        }
	 else 
        {
                printf("Friday\n");
        }

	 return 0;
}
