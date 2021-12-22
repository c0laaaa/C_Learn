int my_atoi(char s[]){
	int i, n, sign;

	for(i = 0; s[i] == ' ' || s[i] == '\t'; ++i)
		;
	
	sign = (s[i] == '-') ? -1 : 1;

	if(s[i] == '-' || s[i] == '+')
		++i;

	for(n = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = n * 10 + s[i] - '0';
	
	return n * sign;
}