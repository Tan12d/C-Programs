#include <stdio.h>



double Bake_time(char,char,char);



void main()

{

        char type_of_bread,bread_size,process;

        double time;



        printf("W- White Bread\n");

        printf("S- Sweet Bread\n");



        printf("Enter the type of bread:");

        scanf(" %c",&type_of_bread);



	printf("\n");



        switch(type_of_bread)

        {

                case 'W':



			printf("Primary Kneading: %d\n",15);

			printf("Primary Rising: %d\n",60);

			printf("Secondary Kneading: %d\n",18);

			printf("Secondary Rising: %d\n",20);

			printf("Loaf shaping: %d\n",2);

			

			printf("\n");

		

                        printf("D- Double\n");

                        printf("N- Normal\n");

	

                        printf("Enter the bread size:");

	                scanf(" %c",&bread_size);

			

			printf("\n");

			

			printf("M- Manual\n");

                        printf("E- Machine\n");



                        printf("Enter the process:");

	                scanf(" %c",&process);

				

			printf("\n");



                        if(bread_size=='D')

                        {



                                if(process=='M')

                                {

                                        time=Bake_time(type_of_bread,bread_size,process);

                                        printf("Total Time= %lf\n",time);

                                }

                                else if(process=='E')

                                {

					printf("Final Rising: %d\n",75);

					printf("Baking: %lf\n",(45+(0.5*45)));

					printf("Cooling: %d\n",30);

                                        time=Bake_time(type_of_bread,bread_size,process);

                                        printf("Total Time= %lf\n",time);

                                }

                        }



                        else if(bread_size=='N')

                        {

                                if(process=='M')

                                {

                                        time=Bake_time(type_of_bread,bread_size,process);

                                        printf("Total Time= %lf\n",time);

                                }



                                else if(process=='E')

                                {

					printf("Final Rising: %d\n",75);

                                        printf("Cooling: %d\n",30);

                                        time=Bake_time(type_of_bread,bread_size,process);

                                        printf("Total Time= %lf\n",time);

                                }

                        }



                        break;



                case 'S':



			printf("Primary Kneading: %d\n",20);

                        printf("Primary Rising: %d\n",60);

                        printf("Secondary Kneading: %d\n",33);

                        printf("Secondary Rising: %d\n",30);

                        printf("Loaf shaping: %d\n",2);

			

			printf("\n");



                        printf("D- Double\n");

                        printf("N- Normal\n");



                        printf("Enter the bread size:");

                        scanf(" %c",&bread_size);

			

			printf("\n");



			printf("M- Manual\n");

                        printf("E- Machine\n");



                        printf("Enter the process:");

                        scanf(" %c",&process);

				

			printf("\n");



			if(bread_size=='D')

                        {



                                if(process=='M')

                                {

                                        time=Bake_time(type_of_bread,bread_size,process);

                                        printf("Total Time= %lf\n",time);

                                }



                                else if(process=='E')

                                {

					printf("Final Rising: %d\n",75);

					printf("Baking: %lf\n",(35+(0.5*35)));

                                        printf("Cooling: %d\n",30);

                                        time=Bake_time(type_of_bread,bread_size,process);

                                        printf("Total Time= %lf\n",time);

                                }

                        }



                       else if(bread_size=='N')

                       {

                                if(process=='M')

                                {

                                        time=Bake_time(type_of_bread,bread_size,process);

                                        printf("Total Time= %lf\n",time);

                                }



                                else if(process=='E')

                                {

					printf("Final Rising: %d\n",75);

                                        printf("Cooling: %d\n",30);

                                        time=Bake_time(type_of_bread,bread_size,process);

                                        printf("Total Time= %lf\n",time);

		                }

                        }



                        break;



                default:



                        printf("Invalid Input");



                        break;

        }

}



double Bake_time(char q,char d,char e)

{

        double p_k=15,p_r=60,s_k=18,s_r=20,l_s=2,f_r=75,b=45,c=30;

        double p_k1=20,p_r1=60,s_k1=33,s_r1=30,l_s1=2,f_r1=75,b1=35,c1=30;

        

        if(q=='W' && d=='D' && e=='M')

        {

        	return p_k+p_r+s_k+s_r+l_s;

        }

        

        else if(q=='W' && d=='D' && e=='E')

        {

        	return p_k+p_r+s_k+s_r+l_s+f_r+(b+(0.5*b))+c;

        }

        

        else if(q=='W' && d=='N' && e=='M')

        {

        	return p_k+p_r+s_k+s_r+l_s;

        }

        

        else if(q=='W' && d=='N' && e=='E')

        {

        	return p_k+p_r+s_k+s_r+l_s+f_r+(b+(0.5*b))+c;

        }

        

        else if(q=='S' && d=='D' && e=='M')

        {

        	return p_k1+p_r1+s_k1+s_r1+l_s1;

        }

        

        else if(q=='S' && d=='D' && e=='E')

        {

        	return p_k1+p_r1+s_k1+s_r1+l_s1+f_r1+(b1+(0.5*b1))+c1;

        }

        

        else if(q=='S' && d=='N' && e=='M')

        {

        	return p_k1+p_r1+s_k1+s_r1+l_s1;

        }

        

        else if(q=='S' && d=='N' && e=='E')

        {

        	return p_k1+p_r1+s_k1+s_r1+l_s1+f_r1+(b1+(0.5*b1))+c1;

        }

        

 }
