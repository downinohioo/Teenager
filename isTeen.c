#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int ifTeen = get_int("Type a number: ");
    if(ifTeen > 12) {
        printf("You are a teen\n");
    } else if(ifTeen < 12) {
        printf("You are not a teen\n");
    }
}