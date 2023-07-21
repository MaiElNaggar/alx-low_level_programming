Skip to content
Lordwill1
/
alx-low_level_programming

Code
Issues
Pull requests
Actions
Projects
Security
Insights
Breadcrumbsalx-low_level_programming/0x10-variadic_functions
/3-print_all.c
Go to file
t
Latest commit
Lordwill1
Lordwill1
Initial commit of project 0x10 .C
94328c1
 · 
9 months ago
History
Breadcrumbsalx-low_level_programming/0x10-variadic_functions
/3-print_all.c
File metadata and controls

Code

Blame
48 lines (43 loc) · 776 Bytes
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
alx-low_level_programming/0x10-variadic_functions/3-print_all.c at master · Lordwill1/alx-low_level_programming
