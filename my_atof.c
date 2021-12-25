#include <ctype.h>

double my_atof(char s[]){
	double result;
	int i, sign, pow;

	for(i = 0; s[i] == ' ' || s[i] == '\t'; ++i)
		;

	sign = (s[i] == '-') ? -1 : 1;
	if(s[i] == '+' || s[i] == '-')
		++i;

	result = 0;
	pow = 1;
	while(isdigit(s[i++]))
		result = result * 10 + s[i] - '0';
	
	if(s[i] == '.')
		while(isdigit(s[i++])){
			result = result * 10 + s[i] - '0';
			pow *= 10;
		}

	result /= pow;

	return result;
}