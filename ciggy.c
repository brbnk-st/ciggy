#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int show_frame(char *file_name){
    FILE *fp;
    char str[50];
    char directory[50];
 
    sprintf(directory, "frames/%s",file_name);
    
    fp = fopen(directory, "r");
    if (fp == NULL){
        printf("File can't be opened\n");
        }
    while(fgets(str, 50, fp) != NULL){
        printf("%s", str);
    }
    fclose(fp);
    return 0;
    
   
}

int main() {
    struct timespec request, remaining;
    request.tv_sec = 0;
    request.tv_nsec = 500000000;

    
    while(1){
    int counter=0;
    system("clear"); 
    show_frame("1.txt");
    nanosleep(&request, &remaining);
    system("clear");
    show_frame("2.txt");
    nanosleep(&request, &remaining);
    system("clear");
    while(counter < 6){
        show_frame("3-1.txt");
        nanosleep(&request, &remaining);
        system("clear");
        show_frame("3-2.txt");
        nanosleep(&request, &remaining);
        system("clear");
        counter = counter + 1;
    }
    while(counter < 12){
        show_frame("4-1.txt");
        nanosleep(&request, &remaining);
        system("clear");
        show_frame("4-2.txt");
        nanosleep(&request, &remaining);
        system("clear");
        counter = counter + 1;
    }
    while(counter < 18){
        show_frame("5-1.txt");
        nanosleep(&request, &remaining);
        system("clear");
        show_frame("5-2.txt");
        nanosleep(&request, &remaining);
        system("clear");
        counter = counter + 1;
    }
    while(counter < 24){
        show_frame("6-1.txt");
        nanosleep(&request, &remaining);
        system("clear");
        show_frame("6-2.txt");
        nanosleep(&request, &remaining);
        system("clear");
        counter = counter + 1;
    }
    }
    return 0;
}
