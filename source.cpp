int USCLN(int a, int b)
{
	while(a!=b)
		if(a>b)
			a=a-b;
		else
			b=b-a;
	cout << "cuong ";
	return a;
}