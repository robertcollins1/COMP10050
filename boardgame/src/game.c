#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
	char c[19][16];//players
	char s[10][16];//slots
	char sorted[7][16];
	struct players
		{	char type[20];
			char name[20];
			int lifepoints;
			int smartness;
			int strength;
			int magic;
			int luck;
			int dexterity;
		};
int main(void){
	int i=0,f,j,q,k,z=0,b,a=6,t,g,d,e[10],w,n[10];//declaring variables//
	char tmp[20],swap[20],copy[20];
	char x = 'x';
	FILE *fp;
	fp = fopen("players.txt","r");  //opening players file//
	if (fp==NULL){      /* check does players file exist etc */
		perror ("Error opening file");
		/* use this as a file not found code */
	}
else {
		while ( fgets(c[i], 16, fp) !=NULL) {
				i++;
		}
printf("To sort the player list press 1, to shuffle the player list press 2");
scanf("%d",&f);//seeing if the user would like to shuffle or sort the player list//
if(f==1){
	for(j=0;j<19;j+=2){
		for(k=(j+2);k<19;k+=2){
			int cmp = strcmp(c[j],c[k]);//using strcmp to sort the players//
			if(cmp>0){
			                strcpy(tmp,c[k]);
			                strcpy(c[k],c[j]);
			                strcpy(c[j],tmp);
			            }
		}
	}
}
if(f==2){
	srand( time(NULL) );		//shuffle
	for(int o=18;o>0;o-=2){
	int r = rand()%(o/2)*2;//generating a random number out of o //
	strcpy(swap,c[r]);//swap c[o] with a random c string//
	strcpy(c[r],c[o]);
	strcpy(c[o],swap);
}
}
	for(int l=0;l<20;l+=2){//printing players using a for loop//
	puts(c[l]);}
	fclose (fp);//closing fp//
	FILE *ptr;
	ptr = fopen("slots.txt","r");
	if (ptr==NULL){      /* check does slots file exist  */
		perror ("Error opening file");
		/* use this as a file not found code */
	}
	while(fgets(s[z], 14, ptr)!= NULL)
	{
	z++;
	}
	printf("press 1 to sort the slots");
	scanf("%d",&q);
	strcpy(copy,s[8]);
				            strcpy(s[8],s[0]);
				            strcpy(s[0],copy);
	if(q==1){
while (a>0){
	  for(b=12; b>-1; b-=2)
	  {
		  if(s[b][12] == x){ //x represents the number at the end of the string that we are looking for//
			  strcpy(sorted[a],s[b]);//copying the slots to a new string to sort them//
			  x = s[b][0];//x changes to the next number we are looking for
	      a=a-1;
		  }
		  }
	}
}
}
	for(t=0;t<7;t++){
		for(int e=2; e<10;e++){
		sorted[t][1]=',';//adding a comma to the string//
		sorted[t][e]=sorted[t][e+2];//taking the space and '-' out of the string//
		}
	}
	printf("-------Sorted List of Slots-------");
	for(int y=0;y<7;y++){
		printf("(%s)",sorted[y]);}
	printf("how many players are playing (max of 6)");
	scanf("%d",&g);
	char tchoice[g][20],pchoice[g][20],attack[g][20];

	struct players p0;  						//declaring structs//
	struct players p1;
	struct players p2;
	struct players p3;
	struct players p4;
	struct players p5;
	struct players p6;
	struct players p7;
	struct players p8;
	struct players p9;


	strcpy(p0.type,"wizard");				   //assigning the characters attributes//
	strcpy(p0.name,"Robert");
	p0.lifepoints = 100;
	p0.smartness = 100;
	p0.strength = 15;
	p0.magic = 85;
	p0.dexterity = 70;
	p0.luck = 60;

	strcpy(p1.type,"ogre");
	strcpy(p1.name,"Barack");
	p1.lifepoints = 100;
	p1.smartness = 10;
	p1.strength = 85;
	p1.magic = 0;
	p1.dexterity = 90;
	p1.luck = 15;

	strcpy(p2.type,"elf");
	strcpy(p2.name, "Alexis");
	p2.lifepoints = 100;
	p2.smartness = 90;
	p2.strength = 35;
	p2.magic = 70;
	p2.dexterity = 65;
	p2.luck = 75;

	strcpy(p3.type, "human");
	strcpy(p3.name, "Samuel");
	p3.lifepoints = 100;
	p3.smartness = 65;
	p3.strength = 50;
	p3.magic = 35;
	p3.dexterity = 70;
	p3.luck = 75;

	strcpy(p4.type, "human");
	strcpy(p4.name, "Andrew");
	p4.lifepoints = 100;
	p4.smartness = 70;
	p4.strength = 40;
	p4.magic = 30;
	p4.dexterity = 75;
	p4.luck = 80;

	strcpy(p5.type, "elf");
	strcpy(p5.name, "Joseph");
	p5.lifepoints = 100;
	p5.smartness = 85;
	p5.strength = 45;
	p5.magic = 70;
	p5.dexterity = 25;
	p5.luck = 70;

	strcpy(p6.type, "ogre");
	strcpy(p6.name, "George");
	p6.lifepoints = 100;
	p6.smartness = 5;
	p6.strength = 90;
	p6.magic = 0;
	p6.dexterity = 80;
	p6.luck = 40;

	strcpy(p7.type, "wizard");
	strcpy(p7.name, "Hannah");
	p7.lifepoints = 100;
	p7.smartness = 90;
	p7.strength = 5;
	p7.magic = 90;
	p7.dexterity = 60;
	p7.luck = 70;

	strcpy(p8.type, "ogre");
	strcpy(p8.name, "Hilary");
	p8.lifepoints = 100;
	p8.smartness = 15;
	p8.strength = 85;
	p8.magic = 0;
	p8.dexterity = 100;
	p8.luck = 10;

	strcpy(p9.type, "ogre");
	strcpy(p9.name, "Donald");
	p9.lifepoints = 100;
	p9.smartness = 10;
	p9.strength = 95;
	p9.magic = 0;
	p9.dexterity = 90;
	p9.luck = 40;
	for(d=0;d<g;d++){
	printf("enter in the type of player you want to be");		//asking user to choose character type//
	scanf("%s",tchoice[d]);
	if(tchoice[d] == p9.type||tchoice[d] == p0.type||tchoice[d] == p5.type||tchoice[d] == p4.type){
		printf("would is the name of the player you want to be");		//asking user to choose
			scanf("%s",pchoice[d]);
	}
	for(int t=0;t<g;t++){								//asking players if they would like to attack//
	printf("if you would like to attack press 1");
	scanf("%d",&e[t]);
	if(e[t]==1){
printf("enter the name of the character you would like to attack");     //asks player who they want to attack//
	scanf("%s",attack[t]);
		if(attack[t]==p0.name){
	if(p0.strength<70){										//damage to attcked opponent//
		p0.lifepoints=p0.lifepoints-(.3*p0.strength);
	}
	else{
		p0.lifepoints=p0.lifepoints-(.5*p0.strength);
	}}
		if(attack[t]==p1.name){
		if(p1.strength<70){										//damage to attcked opponent//
			p1.lifepoints=p1.lifepoints-(.3*p1.strength);
		}
		else{
			p1.lifepoints=p1.lifepoints-(.5*p1.strength);
		}}
		if(attack[t]==p2.name){
		if(p2.strength<70){										//damage to attcked opponent//
			p2.lifepoints=p2.lifepoints-(.3*p2.strength);
		}
		else{
			p2.lifepoints=p2.lifepoints-(.5*p2.strength);
		}}
		if(attack[t]==p3.name){
		if(p3.strength<70){										//damage to attcked opponent//
			p3.lifepoints=p3.lifepoints-(.3*p3.strength);
		}
		else{
			p3.lifepoints=p3.lifepoints-(.5*p3.strength);
		}}
		if(attack[t]==p4.name){
		if(p4.strength<70){										//damage to attcked opponent//
			p4.lifepoints=p4.lifepoints-(.3*p4.strength);
		}
		else{
			p4.lifepoints=p4.lifepoints-(.5*p4.strength);
		}}
		if(attack[t]==p5.name){
		if(p5.strength<70){										//damage to attcked opponent//
			p5.lifepoints=p5.lifepoints-(.3*p5.strength);
		}
		else{
			p5.lifepoints=p5.lifepoints-(.5*p5.strength);
		}}
		if(attack[t]==p7.name){
		if(p7.strength<70){										//damage to attcked opponent//
			p7.lifepoints=p7.lifepoints-(.3*p7.strength);
		}
		else{
			p7.lifepoints=p7.lifepoints-(.5*p7.strength);
		}}
		if(attack[t]==p6.name){
		if(p6.strength<70){										//damage to attcked opponent//
			p6.lifepoints=p6.lifepoints-(.3*p6.strength);
		}
		else{
			p6.lifepoints=p6.lifepoints-(.5*p6.strength);
		}}
		if(attack[t]==p8.name){
		if(p8.strength<70){										//damage to attcked opponent//
			p8.lifepoints=p8.lifepoints-(.3*p8.strength);
		}
		else{
			p8.lifepoints=p8.lifepoints-(.5*p8.strength);
		}}
		if(attack[t]==p9.name){
		if(p9.strength<70){										//damage to attcked opponent//
			p9.lifepoints=p9.lifepoints-(.3*p9.strength);
		}
		else{
			p9.lifepoints=p9.lifepoints-(.5*p9.strength);
		}}
	}
	}
	}
		return 0;
}

