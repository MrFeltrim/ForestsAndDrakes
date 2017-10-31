#include <stdio.h>

int main ()
{
  char player_name[32];
  char weapon;

  int choice_1, choice_2;
  int weapon_choice;
  int x = 0;


  printf("\nWelcome! You must be a new wanderer. What is your name?: ");
  scanf(" %s", player_name);
  printf("\n%s...hmmm...%s...I've heard stranger, I guess. Anyway, welcome to the forest.\n", player_name, player_name);
  sleep(x);
  printf("If you're going to last a minute in this forest, you're going to have to choose a weapon!\n");
  sleep(x);
  printf("\n  1. Sword.");
  printf("\n    This is not a bad choice. I'd suggest you take this if it's your first time.");
  printf("\n  2. Staff.");
  printf("\n    This is great for keeping away from your enemies.");
  printf("\n  3. Axe.");
  printf("\n    If you're strong and fit, this is for you.");
  printf("\n  4. Twig.");
  printf("\n    Ahhhh, brave one.\n");
  sleep(x);
  printf("\nWhich one would you like?: ");
  scanf("%d", &weapon_choice);

  if (weapon_choice == 1)
    {
      weapon = "sword";
    }
  else if (weapon_choice == 2)
    {
      weapon = "staff";
    }
  else if (weapon_choice == 2)
    {
      weapon = "axe";
    }
  else if (weapon_choice == 2)
    {
      weapon = "twig";
    }
  else
    {
      return 0;
    }

  printf("Now that you have chosen your weapon, it's time to choose a path!\n");
  sleep(x);
  printf("\n  1. The trees. ");
  printf("\n    I would recommened this route.");
  printf("\n  2. The cave. ");
  printf("\n    I would recommened this route if you're good.");
  printf("\n  3. The mountians. ");
  printf("\n    I would recommened this route if you're bad ass.");
  printf("\n  4. The cliff.");
  printf("\n    I would NOT recommend this way.\n");

  printf("\nWhich one would you like?: ");
  scanf("%d", &choice_1);



  switch (choice_1)
  {
    case 1:
      printf("\nThe trees are huge, about 50 times taller than you. They create a dark, cold atmosphere.\n");
      sleep(x);
      printf("The trees are thick with bush, it makes walking quite slow.\n");
      sleep(x);
      printf("You don't see anything moving but you begin to hear sounds, as if something is following you.\n");
      sleep(x);
      printf("Out comes a tree ent running towards you. He's got long, dark green branches!\n");
      printf("He's running towards you breaking trees and anything in his path.\n");
      sleep(x);
      printf("1.  Use your %s.\n", weapon);
      printf("2.  Roll into a ball and hope he doesn't see you.\n");
      printf("3.  Start to run in the oppposite direction.\n");
      printf("4.  Find some inner magic and throw a fire ball at him.\n");
      printf("What do you do?: ");

        switch (choice_2)
        {
          case 1:

                if (weapon_choice == 1)
                {
                  printf("You swing your sword furiously in the direction of the ent. Your close your eyes hoping for the best.\n");
                  printf("--2 minutes later--\n");
                  printf("You look down to see nothing in front of you but a pile of fire wood.\n");
                }
                else
                {
                  return 0;
                }

            break;

          case 2:
            break;

          case 3:
            break;

          case 4:
            break;

          default:
            return 0;
            break;

        }



        break;
    case 2:
      printf("The trees are huge, about 50 times taller than you. They create a dark, cold atmosphere.\n");
        break;
    case 3:
      printf("The trees are huge, about 50 times taller than you. They create a dark, cold atmosphere.\n");
        break;
    case 4:
      printf("The trees are huge, about 50 times taller than you. They create a dark, cold atmosphere.\n");
        break;
    default:
      return 0;
        break;

  }

}
