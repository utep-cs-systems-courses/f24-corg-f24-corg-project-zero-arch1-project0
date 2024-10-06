#include <stdio.h>
#include "draw.h" // project-related declarations

int main() 
{
  puts("Welcome!");

  while (1) { // Infinite while loop

    fputs("Select which shape you want to print (Triangle = t, Square = s, Chars = c, FONT= C, Arrow = a) or 'q' to quit\n> ", stdout);
    
    fflush(stdout);		/* stdout only flushes automatically on \n */
    int c;
    while ((c = getchar()) == '\n'); /* ignore newlines */
    if (c == EOF)		     /* terminate on end-of-file */
      goto done;

    // Given the user answer, select which method to call
    switch (c) {
    case 't':
      puts("You selected triangle:");
      print_triangle(5, 7);
      break;
    case 's':
      puts("You selected square:");
      print_square(5, 5);
      break;
    case 'c':
      puts("You selected chars:");
      for (char c = 'a'; c < 'd'; c++)
	print_char_5x7(c);
      break;
      case 'C':
      puts("You selected chars (8x12):");
      for (char ch = 'a'; ch < 'd'; ch++)
        print_char_8x12(ch);
      break;
    case 'a':
            puts("You selected arrow:");
            print_arrow(5, 7); 
            break;
    case 'q':
      puts("Bye!");
      goto done; 		/* terminate */
    case '\n':
      break;
    default:
      printf("Unrecognized option '%c', please try again!\n", c);
    }
  }

 done: // To exit from program
  return 0;
}
