#include <stdio.h>

#include <string.h>



int main()

{ 

   int i,j,i1;



   char a[9][10]= {"chair" ,"dairy" ,"boss" ,"circus" ,"fly" ,"dog" ,"church", "clue" ,"dish"};



   int j1=0;



   for(i=0;i<9;i++)

   {

       j1=strlen(a[i])-1;



       for(j=0;j<10;j++)

       {

           if(a[i][j1]=='y')

           {

                   a[i][j1]='i';

                   a[i][j1+1]='e';

                   a[i][j1+2]='s';

                   a[i][j1+3]='\0';

           }



          else if(a[i][j1]=='s' )

          {

                   a[i][j1+1]='e';

                   a[i][j1+2]='s';

                   a[i][j1+3]='\0';

          }



          else if(a[i][j1]=='h' && a[i][j1-1]=='c')

          {

                 a[i][j1+1]='e';

                 a[i][j1+2]='s';

                 a[i][j1+3]='\0';

          }



          else if(a[i][j1]=='h' && a[i][j1-1]=='s' )

          {

                  a[i][j1+1]='e';

                  a[i][j1+2]='s';

                  a[i][j1+3]='\0';

          }



      }                                      



   }

   

   for(i=0;i<9;i++)

   {

     	j1=strlen(a[i])-1;

      

      	for(j=0;j<10;j++)

     	{

        	  if(a[i][j1]!='s' && a[i][j1-1]!='e' && a[i][j1-2]!='i')

       		  {

               		a[i][j1+1]='s';

              		a[i][j1+2]='\0';

          	  }

      	}

   }



    for(i1=0;i1<9;i1++)

    {

       printf("%s\n",a[i1]);

    }



    return 0;

}
