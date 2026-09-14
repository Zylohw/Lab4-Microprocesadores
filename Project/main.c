#include "RTE_Components.h"
#include CMSIS_device_header
#include "extern.h"
static const char a[] = "Progamar";
static const char z[] = "Comer";
static const char f[] = "Casa";
static char b[16];
static char c[16];
static char s[16];
int main(void){
 my_strcpy(a, b);
 my_strcpy(z, c);
 my_strcpy(f, s);
 my_capitalize(b);
 my_capitalize(c);
 my_capitalize(s);
    for(;;){

 }
}