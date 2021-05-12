#include<stdio.h>

int main()
{
    printf("This app has to call many other languages to excersize theyre embeddability\n\n");
    printf("First language is the basic -- C\n\n");

    int wholeNum = 7;
    float decNum = 4.9;
    char myTextC[] = "This is text from C";

    printf("Program results are as follows:\n\n");
    printf("Number value: %d, decimal number value: %f.2, and finally some text: %s.\n\n", wholeNum, decNum, myTextC);

    printf("Done.");

    return 0;
}
