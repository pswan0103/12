#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand((unsigned)time(NULL));
	
	//opening
	printf("==================================\n");
	printf("== 	    BINGO GAME   	==\n");
	printf("==================================\n");
	
	
	//game
	bingo_init();
	bingo_printBoard();
	bingo_inputNum(5);
	bingo_printBoard();
	
	//initialize boards
	
	//while (gamr id not end)
	/*
	{
		//print board
		//print completed lines
		//select a number
		//put the number on the board
	}
	*/
	
	
	//ending
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("==================================\n");
	printf("**********************************\n");
	printf("==	 BINGO! YOU WIN!	==\n");
	printf("**********************************\n");
	printf("==================================\n");
	
	
	return 0;
}
