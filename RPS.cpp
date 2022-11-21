#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char player,char bot)
{
 if (player == bot) {
  return -1;
} 
else if (player == 'r' && bot == 's') {
  return 1;
} 
else if (player == 's' && bot == 'p') {
  return 1;
} 
else if (player == 'p' && bot == 'r') {
  return 1;
} 
else {
  return 0;
}
}

int main()
{
  int c;

  char player, bot, result;

  srand(time(NULL));

  c = rand() % 100;

  if (c < 33){
        bot = 'r';
  }
  else if (c > 33 && c < 66){
        bot = 'p';
  }
  else{
        bot = 's';
  }

printf("Enter r for ROCK, p for PAPER and s for SCISSOR\n");
 
    
    scanf("%c", &player);
 
    
    result = game(player, bot);
 
    if (result == -1) {
        printf("Game Draw\n");
    }
    else if (result == 1) {
        printf("You Won\n");
    }
    else {
        printf("You Lost\n");
    }
        printf("You choosed : %c and Bot choosed : %c\n",player, bot);

    system("pause");
    return 0;
}
