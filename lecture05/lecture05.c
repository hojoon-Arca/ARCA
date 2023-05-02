#include <stdio.h>
#include <windows.h>

int print_title_screen()
{
	printf("#################################\n");
	printf("#				#\n");
	printf("#	     Dino Run		#\n");
	printf("#	      (V 1.0)		#\n");
	printf("#				#\n");
	printf("#	   1 = start Game	#\n");
	printf("#	   2 = How To Play 	#\n");
	printf("#	   3 = Quit		#\n");
	printf("#				#\n");
	printf("#				#\n");
	printf("#################################\n");

	return 0;

}

int print_rule_screen()
{
	printf("#################################\n");
	printf("#				#\n");
	printf("#        To avoid Enermy	#\n");
	printf("#				#\n");
	printf("#    Press Space Bar To jump	#\n");
	printf("#				#\n");
	printf("#				#\n");
	printf("#	 Return To Menu?	#\n");
	printf("#	      1. Yes		#\n");
	printf("#	      2. No		#\n");
	printf("#				#\n");
	printf("#################################\n");

	return 0;
}


int main ()
{

	int game_state = 1;
	
	while(game_state)
	{
		int input;
		if (game_state == 1)
		{
			print_title_screen();
			printf("input>");
			scanf("%d",&input);
			if (input == 1)
				continue;
			
			else if (input == 2)
			{
				game_state = 2;
				continue;
			}

			else if (input == 3)
			{
				game_state = 0;
			}

			else
				continue;
		}

		else if (game_state == 2)

		{
			print_rule_screen();
			printf("Return To Menu?");
			scanf("%d",&input);

			if (input == 1)
			{
				game_state =1;
				continue;
			}

			else if (input == 2)
				continue;
		}
		

	}	

	return 0;
}
