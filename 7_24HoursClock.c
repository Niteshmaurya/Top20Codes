#include<stdio.h>
#include<string.h>

int main(){
    int hh, mm, ss;
    char a[3];
    
    printf("Enter hours 'hh': ");
    scanf("%d", &hh);
    printf("Enter mins 'mm': ");
    scanf("%d", &mm);
    printf("Enter seconds 'ss': ");
    scanf("%d", &ss);
    printf("Enter am or pm: ");
    scanf("%s", a);

    if ((hh >= 0 && hh < 12) && (mm >= 0 && mm < 60) && (ss >= 0 && ss < 60) &&
        ((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0) || (strcmp(a,"AM") == 0) || (strcmp(a,"am") == 0))) {

        if ((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0)) {
            if (hh != 12) {
                hh += 12;
                }
        } else if ((strcmp(a,"AM") == 0) || (strcmp(a,"am") == 0)) {
            if (hh == 12) {
                hh = 0;
            }
        }

        printf("the obtained format is\n");
        printf("%02d:%02d:%02d", hh, mm, ss);   
    } else {
        printf("Please give the correct input");
    }
    
    return 0;
}
