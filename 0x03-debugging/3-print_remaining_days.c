void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	if ((year % 100 == 0) && (year % 400 == 0 || year % 4 != 0))
	{
		if (month >= 3 && day >= 60)
		if (month >= 2 && day >= 60)
		{
			day++;
		}
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);
	}
	else
else
	{
		if (month == 2 && day == 60)
		{
@@ -30,8 +30,7 @@ void print_remaining_days(int month, int day, int year)
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day)
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
