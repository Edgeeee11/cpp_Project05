#include <iostream>
#include <stdio.h>

int main() 
{
int day, month, year;
printf("Enter day ");
scanf("%i", &day);
printf("Enter month ");
scanf("%i", &month);
printf("Enter year ");
scanf("%i", &year);

	if (year%4==0)
		{
		printf("Leapyear, ");
		}
		else
		{
		printf("Not a Leapyear, ");
		}
		
	switch(year%12)
	{
		case 0:
			{
				printf("Monkey, ");
			}
			break;
		case 1:
			{
				printf("Rooster, ");
			}
			break;
		case 2:
			{
				printf("Dog, ");
			}
			break;
		case 3:
			{
				printf("Pig, ");
			}
			break;
		case 4:
			{
				printf("Rat, ");
			}
			break;
		case 5:
			{
				printf("Bull, ");
			}
			break;
		case 6:
			{
				printf("Tiger, ");
			}
			break;
		case 7:
			{
				printf("Rabbit, ");
			}
			break;
		case 8:
			{
				printf("Dragon, ");
			}
			break;
		case 9:
			{
				printf("Snake, ");
			}
			break;
		case 10:
			{
				printf("Horse, ");
			}
			break;
		case 11:
			{
				printf("Goat, ");
			}
			break;
		default: 
		{
			printf("Error");
		}
	}
	
	if ((month==12&&day>22)||(month==1&&day<21))
	{
		printf("Capricorn");
	}
	if ((month==1&&day>20)||(month==2&&day<20))
	{
		printf("Aquarius");
	}
	if ((month==2&&day>19)||(month==3&&day<21))
	{
		printf("Pisces");
	}
	if ((month==3&&day>20)||(month==4&&day<21))
	{
		printf("Aries");
	}
	if ((month==4&&day>20)||(month==5&&day<22))
	{
		printf("Taurus");
	}
	if ((month==5&&day>21)||(month==6&&day<22))
	{
		printf("Gemini");
	}
	if ((month==6&&day>21)||(month==7&&day<23))
	{
		printf("Cancer");
	}
	if ((month==7&&day>22)||(month==8&&day<24))
	{
		printf("Leo");
	}
	if ((month==8&&day>23)||(month==9&&day<24))
	{
		printf("Virgo");
	}
	if ((month==9&&day>23)||(month==10&&day<24))
	{
		printf("Libra");
	}
	if ((month==10&&day>23)||(month==11&&day<23))
	{
		printf("Scorpio");
	}	
	if ((month==11&&day>22)||(month==12&&day<23))
	{
		printf("Sagittarius");
	}
	
}
