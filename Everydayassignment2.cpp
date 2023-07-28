#include<iostream> 
#include<cstdlib> // haeder file :->ran  
using namespace std;
char convert_int_char(int num)  
{
    if( 0<= num  && num<=9)
    {
        return  '0' + num;  //ascii code concept is used  
    }

    else if( num <=15)
    {
        return 'A' + (num -10 ); 
    }

    else{
            cout<<"Not a valid number ";
        }
}

    


int main()
{

    
    //int num = rand() %  15  ; // 0 to 15
int num;
    int length;  
    printf("Enter the length of string what you want : ");
        scanf("%d", &length); 

    char temp[length+1]; 

    for(int i =0 ; i< length ; i++) 
    {
     num = rand() % 15; 
    temp[i] = convert_int_char(num); 
     
    }

    temp[length] = '\0'; //string is a special character array  which stores the null character

int j = 0;
    while(temp[j]!= '\0')
    {
        cout<<temp[j];
        j++;
    }

    return 0;
}

// //approach 2   
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// char* generateRandomHexadecimal(int length) {
//     const char hexChars[] = "0123456789ABCDEF"; // store all possible charcatrs in array
//     char* result = (char*)malloc((length + 1) * sizeof(char)); // +1 for the null terminator at the end of the string

//     // Seed the random number generator with the current time
   

//     for (int i = 0; i < length; ++i) {                               
//         result[i] = hexChars[rand() % (sizeof(hexChars) - 1)]; //call rand() in index box :-> which return random value :->random index :->acccess random chacter from hexchars and store it inresult
//     }

//     result[length] = '\0'; // Add null terminator to the end of the string

//     return result;
// }

// int main() {
//     int num;
//     scanf("%d", &num);

//     char* temp = generateRandomHexadecimal(num);

//     printf("%s\n", temp);

//     // Don't forget to free the dynamically allocated memory when you're done using it
//     free(temp);

//     return 0;
// }

