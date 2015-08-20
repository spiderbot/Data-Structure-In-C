/* Program for solution of Tower of Hanoi*/
#include<stdio.h>
#include<conio.h>
int toh(int ndisk, char source, char temp, char dest);
int main()
{
	char  source= 'S',temp= 'T ', dest= 'D';
	int ndisk;
	printf("Enter the number of disks : ");
	scanf ( "%d", &ndisk );
	printf ("Sequence is :\n");
	toh( ndisk, source, temp, dest );
	getch();
	return 0;
}
int toh( int ndisk, char source, char temp, char dest )
{
	if ( ndisk > 0 )
	{
		toh ( ndisk-1, source, dest, temp );
		printf ( "Move Disk %d  %c-->%c\n", ndisk, source,dest );
		toh( ndisk-1, temp, source, dest );
	}
	return 0;
}/*End of toh()*/
