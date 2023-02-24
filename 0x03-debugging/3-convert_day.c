#include "main.h"

/**
 * convert_day - converts day of month to day of year, without accounting
@@ -12,7 +12,7 @@ int convert_day(int month, int day)
{
       	switch (month)
	{
		case 2;
		case 2:
	       	day = 31 + day;
	       	break;
	       	case 3:
@@ -36,6 +36,7 @@ int convert_day(int month, int day)
		case 9:
		day = 243 + day;
		break;

		case 10:
		day = 273 + day;
		break;
