#include <stdio.h>

int isPalindrome(int num)
{
    int reversed = 0;
    int orginalNumber = num;
    // let reverse the number
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("The revers number is %d\n", reversed);
    if (orginalNumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()

{
    printf("Enter the number you want to chack for palindrome");
    int num;
    scanf("%d", &num);
    if(isPalindrome(num)){
        printf("The number %d is a palindrome",num);
    }
    else{
        printf("The number %d is not  a palindrome",num);

    }
    return 0;
}