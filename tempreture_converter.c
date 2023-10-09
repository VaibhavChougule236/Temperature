#include<stdio.h>

#include<conio.h>

float convertTemp(float celsius);
float convertTempre(float faran);

int main() {
    float celsius;
    float faran;
    printf("enter a tempreture in  celsius: ");
    scanf("%f",&celsius);
    printf("\n");

    faran=convertTemp(celsius);
    printf("conversion of celsius to fahranhiet: %0.4f\n\n\n", faran);
    
    printf("enter a tempreture in  fahranhiet:");
    scanf("%f",&faran);
    printf("\n");

    celsius=convertTempre(faran);
    
    printf("conversion of faheanhiet to celsius: %0.4f\n", celsius);
    return 0;
}

float convertTemp(float celsius) {
   float faran = celsius * (9.0/5.0) + 32.0;
   
   return faran; 
}
float convertTempre(float faran){
float celsius = (faran-32)/1.8;
return celsius;
}