int factorial( int number )
{
	if ( number >1 )
	{
		return (factorial(number-1)*number);
	}
	else 
	{
		return(1);
	}
	return ( number);
}

