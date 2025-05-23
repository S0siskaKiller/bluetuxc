#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int bluetux() {
       char answer[256];
       char backg[50];
       char foreg[50];
       printf("Enter your text:");
       fgets(answer, sizeof(answer), stdin);
       printf("Select background color:");
       scanf("%s", &backg);
       printf("Select text color:");
       scanf("%s", &foreg);
       if (strcmp(backg, "blue") == 0) {
	       system("tput setab 4");
       }

       else if (strcmp(backg, "pink" ) == 0) {
	       system("tput setab 5");
       }

       else if (strcmp(backg, "yellow" ) == 0) {
	       system("tput setab 3");
       }

       else if (strcmp(backg, "red" ) == 0) {
	       system("tput setab 9");
       }

       else if (strcmp(backg, "green" ) == 0) {
	       system("tput setab 10");
       }

       else if (strcmp(backg, "aqua" ) == 0) {
	       system("tput setab 6");
       }
       else if (strcmp(backg, "black" ) == 0) {
	       system("tput setab 0");
       }

       else {
	       printf("Unsupported color scheme.\n");
	       printf("Use argument -l to check list of color schemes\n");
	       return 1;
       }

       if (strcmp(foreg, "red" ) == 0) {
	       system("tput setaf 1");
       }
       
       else if (strcmp(foreg, "green" ) == 0) {
	       system("tput setaf 2");
       }

       else if (strcmp(foreg, "yellow" ) == 0 ) {
	       system("tput setaf 3"); 
       }

       else if (strcmp(foreg, "blue" ) == 0 ) {
	       system("tput setaf 4");
       }

       else if (strcmp(foreg, "pink" ) == 0) {
	       system("tput setaf 5");
       }

       else if (strcmp(foreg, "aqua" ) == 0) {
	       system("tput setaf 6");
       }

       else if (strcmp(foreg, "white" ) == 0) {
	       system("tput setaf 7");
       }
       else if (strcmp(foreg, "black") == 0) {
	       system("tput setaf 8");
       }

       else {
	       printf("Unsupported color scheme.\n");
	       return 1;
       }

       char command[256];
       char pause;
       system("clear");
       sprintf(command, "cowsay -f tux %s", answer);
       system(command);
       scanf(" %c", &pause);
       if ( pause == 'q' ) {
	       system("tput sgr0");
	       system("clear");
	       exit(0);
       }

}

int main(int argc, char **argv) {
	if(strcmp(argv[0], "-l") == 0) {
		printf("Avaliable color schemes:\n");
		printf("pink\n");
		printf("yellow\n");
		printf("red\n");
		printf("green\n");
		printf("aqua\n");
		printf("black\n");
		exit(0);
	}
	else {
		bluetux();
	}
	return 0;
}
