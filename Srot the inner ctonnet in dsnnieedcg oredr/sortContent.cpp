#include <iostream> // cout
#include <string>   // string
#include <cstring>  // strlen
#include <algorithm> // sort

// function that implements sort the inner content in descending order
std::string sortTheInnerContent(const char* words, const int length)
{
    // create the string with which we will work
    std::string result(words);
    // choose the second character of word
    int start = (result[0]==' ')?(2):(1);

    for(int i=start; i<length; i++){
        // if we come across with the whitespace or with the end of our string we will check next conditions
        if(result[i]==' ' || i == length-1){
            // set up the end value
            int end = (result[i]==' ')?(i-1):(i);\
            // check, do we have to sort the word or not
            if(start < end)
                std::sort(result.begin()+start, result.begin()+end, std::greater<char>());
            // change the value Start to the next second character of next word
            start = i+2;
        }
    }
    return result;
}

int main()
{
    const char* content = "sort the inner content in descending order";
    std::cout << content << std::endl;
    std::cout << sortTheInnerContent(content, strlen(content)) << std::endl;

    return 0;
}
