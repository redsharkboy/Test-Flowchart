#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int b;
	printf (" so buoi hoc \n");
	scanf ("%d",&n);
	
	printf (" so buoi nghi \n");
	scanf ("%d",&b);
	
	if (b<=n*0.25) {
	    printf (" du dieu kien \n"); }
	else {
	    printf (" hoc lai \n"); }    
	  
	int DLT;
	int DTH;
	int BTL;
	
	printf (" Diem Ly Thuyet \n");
	scanf("%d",&DLT);
	
	if (DLT<=20*0.4) {
		printf (" Khong dat \n"); }
	else {
	    printf (" Dat \n"); }	
	    
	printf (" Diem thuc hanh \n");
	scanf("%d",&DTH);
	
	if (DTH <=15*0.4) {
		printf (" Khong dat \n"); }
	else {
	    printf (" Dat \n"); }
	    
	printf (" Bai Tap Lon \n");
	scanf("%d",&BTL);    
	if (BTL <=10*0.4) {
		printf (" Khong dat \n"); }
	else {
	    printf (" Dat \n"); }	
	printf (" Ket thuc khoa hoc ");		
	return 0;
}
