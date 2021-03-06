#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LENGTH 64

int i, loop[1000] = { 0, }, k;

void printWord(int a, int b) {
	if (i >= (b - a + 1)) {
			printf("All Words out!\n");
			i = 0;
			return;
	}
	int num = 0, line_count = 0;
	char buffer[MAX_LENGTH];
	FILE* p_file = NULL;

	num = rand() % (b - a + 1) + a;
	for (int j = 0; j < i; j++) {
		if (num == loop[a+j]) {
			printWord(a, b);
			return;
		}
	}
	
	if (0 == fopen_s(&p_file, "words.txt", "rt")) {
		while (fgets(buffer, MAX_LENGTH, p_file) != NULL) {
			line_count++;
			if (line_count == num) {
				printf("%s\n", buffer);
				break;
			}
		}
		fclose(p_file);
	}
		loop[i] = num;
		i++;
	
	return;
}

void dictory(char str) {
	switch (str) {
	case 'A':
		printWord(1, 22);
		break;
	case 'B':
		printWord(23, 35);
		break;
	case 'C':
		printWord(36, 55);
		break;
	case 'D':
		printWord(56, 84);
		break;
	case 'E':
		printWord(85, 112);
		break;
	case 'F':
		printWord(113, 123);
		break;
	case 'G':
		printWord(124, 147);
		break;
	case 'H':
		printWord(148, 160);
		break;
	case 'I':
		printWord(161, 167);
		break;
	case 'J':
		printWord(168, 177);
		break;
	case 'K':
		printWord(178, 194);
		break;
	case 'L':
		printWord(195, 227);
		break;
	case 'M':
		printWord(228, 266);
		break;
	case 'N':
		printWord(267, 312);
		break;
	case 'O':
		printWord(313, 342);
		break;
	case 'P':
		printWord(343, 373);
		break;
	case 'Q':
		printWord(374, 386);
		break;
	case 'R':
		printWord(387, 424);
		break;
	case 'S':
		printWord(425, 448);
		break;
	case 'T':
		printWord(449, 478);
		break;
	case 'U':
		printWord(479, 495);
		break;
	case 'V':
		printWord(496, 522);
		break;
	case 'W':
		printWord(523, 550);
		break;
	case 'X':
		printWord(551, 578);
		break;
	case 'Y':
		printWord(579, 608);
		break;
	case 'Z':
		printWord(609, 634);
		break;
	}
	return;
}

char scanSpell() {
	char str1;
	 do{
		rewind(stdin);
		printf("Enter Alpabet: ");
		scanf_s("%c", &str1, sizeof(str1));
		if (str1 == '0') {
			break;
		}
		else {
			if (str1 >= 'a' && str1 <= 'z') str1 -= 32;
			dictory(str1);
		}
	}while (1);
	return 0;
}

void printfirst() {
	printf("*****************************************************\n");
	printf("Welcome! This is KKeutu Long Dicionary for English\n");
	printf("It is Loop program. So if you want to exit, Enter 0\n");
	printf("*****************************************************\n");
	scanSpell();
	return;
}

int main() {
	printfirst();
	printf("\nIt's end! Thank you for use this program!\n");
	return 0;
}