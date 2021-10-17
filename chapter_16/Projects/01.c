/**
 * Date: 16-10-2021
 * by eddybruv
 **/

#include <stdio.h>

#define LENGTH(arr) (int) (sizeof(arr) / sizeof(arr[0])) 

struct dial_codes {
    char *country;
    int code;
};



int main(void){
    const struct dial_codes country_code[] = {
        {"Argentina",    54}, {"Bangladesh",     880}, 
        {"Brazil",       55}, {"Burma",           95},
        {"China",        86}, {"Colombia",        57},
        {"Congo",       243}, {"Egypt",           20},
        {"Ethopia",     251}, {"France",          33},
        {"Germany",      49}, {"India",           91},
        {"Indonesia",    62}, {"Iran",            98},
        {"Italy",        39}, {"Japan",           81},
        {"Mexico",       52}, {"Nigeria",        247},
        {"Pakistan",     92}, {"Philippenes",     63},
        {"Poland",       48}, {"Russia",           7},
        {"South Africa", 27}, {"South Korea",     82},
        {"Spain",        34}, {"Sudan",          249}, 
        {"Thailand",     66}, {"Turkey",          90},
        {"Ukraine",     380}, {"United Kingdom",  44},
        {"United States", 1}, {"vietnam",         84}
    };

    int your_code, check = 0;
    printf("Enter your code: ");
    scanf("%d", &your_code);

    for(int i = 0; i < LENGTH(country_code);i++){
        if(your_code == country_code[i].code){
            printf("Country is: %s", country_code[i].country);
            check = 1;
        }
    }

    if(check != 1)
        printf("Invalid Code.");

    return 0;
}