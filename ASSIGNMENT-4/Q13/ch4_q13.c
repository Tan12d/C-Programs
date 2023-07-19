#include <stdio.h>



void main()

{

	int player;



	char c=' ';



	while(scanf("%d",&player)!= EOF)

	{

		double hits=0,bats=0;



		printf("Player %d's record: ",player);



		scanf("%c",&c);



		if(c != '\n')

		{

			if((c == 'O') || (c == 'H'))

				bats++;



			if(c == 'H')

				hits++;



			while(c!= '\n')

			{

				if(c=='O' || c=='H')

				{

					bats++;

				}

				

				scanf("%c",&c);

				if(c== 'H')

				{

					hits++;

				}



				printf("%c", c);

			}

		}	

		printf("Player %d's batting average: %.3lf\n",player,(hits/bats));

	}

	

}

