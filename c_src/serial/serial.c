//int count = 1;

int getSerialNumber(void)
{
	static int count = 1;
	
	return count++;
	//++count;
}
