#include <iostream>
using namespace std;

void remove_numbers(char *str)// str points to the first element of the char array
{
    char *s = str;// read pointer
    char *d = str;// write pointer

    while(*s != 0){// end the loop when first pointer reaches the null terminator

        if(!(*s >= '0' && *s <= '9'))// if *s is not a digit, do not execute line 11
        {
            *d++ = *s;// copy *s to *d and let d point to the next position
        }
    s++;//let s point to the next position
    }
    *d = 0;//place the null terminator at the new end of the string
}

string Test(char *str,char *strs)
{

    // Wrong approach:
    // char a[] = remove_numbers(A);   // remove_numbers modifies A directly, so no new array is needed
    // if (A == "AARe")                // this compares addresses, not string contents

    char *result = str;// pointer to the processed char array
    char *test = strs;//  pointer to the expected string

    while (*result != 0 && *test != 0)// end the loop when either pointer point to the null terminator
    { 
        if (*result != *test)// return FAIL if the characters do not match
        {
            return "FAIL";
        }
        result++;// let result point to the next position
        test++;// let test point to the next position
    }
    if (*result == *test)// both strings ended at the same time
    {
        return "PASS";
    }
    else{
        return "FAIL";
    }
}

int main()
{
    char A[] = "A011ARe";// orginal char array
    char B[] = "11eee1e1e1";
    char C[]= "Y0u are hands0me 0r beautifu1!";

    char a[] = "AARe";// test char array
    char b[] = "eeeee";
    char c[]= "Yu are handsme r beautifu!";

    
    remove_numbers(A);
    remove_numbers(B);
    remove_numbers(C);

    string result_A = Test(A,a);
    string result_B = Test(B,b);
    string result_C = Test(C,c);
    cout << result_A << endl;
    cout << result_B << endl;
    cout << result_C << endl;
    return 0;
    
}
