#include<stdio.h>
#include"interface.h"
int main(){
   inter();
   int choice;
   while(choice!=6){
   printf("\nWhat you would like to do???\n");
   printf("1.Add Patient Record\n");
   printf("2.Delete Patient Record\n");
   printf("3.Update Patient Record\n");
   printf("4.Search Patient Record\n");
   printf("5.Display All Patients\n");
   printf("6.Exit\n");
   printf("Enter your choice(1-6): ");
   scanf("%d",&choice);
}
}
