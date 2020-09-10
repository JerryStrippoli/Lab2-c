// Author: Jeremiah Strippoli jjs7255@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 
// Breakout: 
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char* input = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(input);
  if(grade >= 93.0) {
    printf("Your letter grade for CMPSC 131 is A\n");
  }
  else if(grade >= 90.0) {
    printf("Your letter grade for CMPSC 131 is A-\n");
  }
  else if(grade >= 87.0) {
    printf("Your letter grade for CMPSC 131 is B+\n");
  }
  else if(grade >= 83.0) {
    printf("Your letter grade for CMPSC 131 is B\n");
  }
  else if(grade >= 80.0) {
    printf("Your letter grade for CMPSC 131 is B-\n");
  }
  else if(grade >= 77.0) {
    printf("Your letter grade for CMPSC 131 is C+\n");
  }
  else if(grade >= 73.0) {
    printf("Your letter grade for CMPSC 131 is C\n");
  }
  else if(grade >= 70.0) {
    printf("Your letter grade for CMPSC 131 is C-\n");
  }
  else if(grade >= 60.0) {
    printf("Your letter grade for CMPSC 131 is D\n");
  }
  else if(grade < 60.0) {
    printf("Your letter grade for CMPSC 131 is F\n");
  }
  return 0;
}