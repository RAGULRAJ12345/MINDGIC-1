#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
void sound(){
	printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
		printf("\a");
	sleep(1);
	printf("\a");
	sleep(1);
	
	
}
void pg2(){
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
		cout<<"STEP10=> Now ask him to tell the number he get.\n";
		SetConsoleTextAttribute(h,2);
		cout<<"STEP11=> Now take the papers you fold before and open it and\n\tthere will be two numers formed.\n";
		SetConsoleTextAttribute(h,3);
		cout<<"BOOOOOOOM! \n\tThe number formed by the paper is the number he told";
}
void pg1()
{
		HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
		cout<<"STEP1=> This magic works in the formula of [(YFN*2)+2]*5-(YN-10).\n";
	SetConsoleTextAttribute(h,4);
	printf("YFN=> Your friends number\n\nYN=> your number\n\n");
		SetConsoleTextAttribute(h,2);
	cout<<"STEP2=> Ask your friend to think a number 1-10 in a paper pice 1\n\t and tell him not to show that number to you\n";
		SetConsoleTextAttribute(h,12);
	cout<<"STEP3=> You write a number in between 1-10 and write number in a\n\t of paper and show the number you written in the paper.\n";
		SetConsoleTextAttribute(h,13);
	cout<<"STEP4=> Now take the both of your papers and fold it and keep int\n\tand keep itin one side\n";
		SetConsoleTextAttribute(h,7);
	cout<<"STEP5=> Now tell your friend to multiply \n\tthe number they wrote with 2.\n";
		SetConsoleTextAttribute(h,6);
	cout<<"STEP6=> Now tell your friend to add the\n\t number he get with 2.\n";
		SetConsoleTextAttribute(h,8);
	cout<<"STEP7=> Now tell him to \n\tmultiply with 5.\n";
		SetConsoleTextAttribute(h,9);
	cout<<"STEP8=> This want to be done in your mind.you want to \n\tsubract the number you written 10 and remember the number you get.\n";
			SetConsoleTextAttribute(h,10);
	cout<<"STEP9=> Now tell the number you get by subracting to your friend now ask him\n\t to subracted the number he get before with the number you tell him.\n";
	char o[32];
}
int main(){
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	char name[32];
	SetConsoleTextAttribute(h,3);

	cout<<"please enter your name:";
	cin>>name;
	SetConsoleTextAttribute(h,5);
	printf("Welcome to  GINDGIC game %s\n\n",name);
	cout<<"Fist concept in GINDGIC game is you want to follow the following steps\n\n";
	cout<<"STEP1=> This magic works in the formula of [(YFN*2)+2]*5-(YN-10).\n";
	SetConsoleTextAttribute(h,4);
	printf("YFN=> Your friends number\n\nYN=> your number\n\n");
		SetConsoleTextAttribute(h,2);
	cout<<"STEP2=> Ask your friend to think a number 1-10 in a paper pice 1\n\t and tell him not to show that number to you\n";
		SetConsoleTextAttribute(h,12);
	cout<<"STEP3=> You write a number in between 1-10 and write number in a\n\t of paper and show the number you written in the paper.\n";
		SetConsoleTextAttribute(h,13);
	cout<<"STEP4=> Now take the both of your papers and fold it and keep int\n\tand keep itin one side\n";
		SetConsoleTextAttribute(h,7);
	cout<<"STEP5=> Now tell your friend to multiply \n\tthe number they wrote with 2.\n";
		SetConsoleTextAttribute(h,6);
	cout<<"STEP6=> Now tell your friend to add the\n\t number he get with 2.\n";
		SetConsoleTextAttribute(h,8);
	cout<<"STEP7=> Now tell him to \n\tmultiply with 5.\n";
		SetConsoleTextAttribute(h,9);
	cout<<"STEP8=> This want to be done in your mind.you want to \n\tsubract the number you written 10 and remember the number you get.\n";
			SetConsoleTextAttribute(h,10);
	cout<<"STEP9=> Now tell the number you get by subracting to your friend now ask him\n\t to subracted the number he get before with the number you tell him.\n";
	char o[32];
	printf("goto pg 2(yes/no):");
	cin>>o;
	if(strcmp(o,"yes")==0){
		cout<<"STEP10=> Now ask him to tell the number he get.\n";
		SetConsoleTextAttribute(h,2);
		cout<<"STEP11=> Now take the papers you fold before and open it and\n\tthere will be two numers formed.\n";
		SetConsoleTextAttribute(h,3);
		cout<<"BOOOOOOOM! \n\tThe number formed by the paper is the number he told\n";
		cout<<"DEVELOPER NAME:R.RAGUL RAJ\nCHANNEL:@RAJPROGRAMING";
	}
	else{
		pg1();
		
		
}
	char M[23];
	printf("if you want to continue the app or not(yes/no):");
	cin>>M;
	if(strcmp(M,"yes")==0){
		pg1();
		pg2();
	}
	else{
		return 0;
	}
	
	
	
	
	
}