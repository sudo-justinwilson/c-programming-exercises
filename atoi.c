/* atoi:  convert s to integer */    
int atoi(char s[])    
{        
	int i, n;
	n = 0;        
	
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)            
		n = 10 * n + (s[i] - '0');        
	return n;    
}

int main()
{
	char string[999];
	int number = 0;

	string = "12345";
	number = atoi(string);
	printf("string is: \t %s \n", string);
	printf("number is: \t %d \n", number);
	return 0;
}
