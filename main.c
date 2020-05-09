#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int x;
	int y=1;
	printf(" Welcome Here You Can Implement a File Manager...\n");
	printf(" Please choose an number from the following\n");
	printf(" Note: Please be in the folder you want implementations to be in !\n");
	printf("________________________________________________________________\n");
	printf("1) Want to List Directory !\n");
	printf("2) Change Permission for Files/Directories !\n");
	printf("3) Create/Delete a File/Directory !\n");
	printf("4) Rename Directory/File !\n");
	printf("5) Create Symbolic link File/Directory !\n");
	scanf("%d",&x);
		 while(y!=0){
			 if(x==1){
				char commandls[50]="ls";
				system(commandls);
				printf("Process Completed\n");
			}
			else if(x==2){
				char command[100]="chmod ";
				char ch_num[100];
				char file_name[100];
					printf("Before You Change any Permissions\n");
					printf("0) No permission\n1) Execute\n2) Write\n4) Read\n");
					printf("0 = --- No permission will be added\n");
					printf("1 = --x execute permission\n");
					printf("2 = --w- write permission\n");
					printf("3 = -wx write and execute permission\n");
					printf("4 = r- read permission\n");
					printf("5 = r-x read and execute permission\n");
					printf("6 = rw- read and write permission\n");
					printf("7 = rwx all permissions\n");
					printf("Enter the numerical permission to change (numerical value)\n");
					scanf("%s",ch_num);
				printf("Enter the File Name you want to change\n");
				scanf("%s",file_name);
				strcat(command,ch_num);
				strcat(command," ");
				strcat(command,file_name);
				system(command);
				printf("Process Completed\n");
			}
			else if(x==3){
				int z;
					printf("Please Choose an Option\n");
					printf("_______________________________\n");
					printf("1) Create a Directory !\n");
					printf("2) Create a File !\n");
					printf("3) Delete a Directory !\n");
					printf("4) Delete a File !\n");
					scanf("%d",&z);
						if(z==1){
							char command[100]="mkdir ";
							char part2[100]="-m ";
							char ch_num[100];
							char dir_name[100];
							printf("Enter the Numerical Permission needed for the Directory !\n");
							scanf("%s",ch_num);
							printf("Enter the Directory Name ! \n");
							scanf("%s",dir_name);
								strcat(command,part2);
								strcat(command,ch_num);
								strcat(command," ");
								strcat(command,dir_name);
								system(command);
								printf("Process Completed\n");
						}
						else if (z==2){
							char command[100]="touch ";
							char file_name[100];
							printf("Enter the File Name you want to create ! \n");
							scanf("%s",file_name);
								strcat(command,file_name);
								system(command);
								printf("Process Completed\n");
						}
						 else if(z==3){
							char command[100]="rmdir ";
							char dir_name[100];
							printf("Note: Please be in the Document you want to remove a Directory From ! \n");
							printf("Enter the Directory Name you want to remove \n");
							scanf("%s",dir_name);
								strcat(command,dir_name);
								system(command);
								printf("Process Completed\n");
						}
						else if(z==4){
							char command[100]="rm ";
							char file_name[100];
							printf("Note: Please be in the Document you want to remove a Directory From ! \n");
							printf("Enter the File Name you want to remove !\n");
							scanf("%s",file_name);
								strcat(command,file_name);
								system(command);
								printf("Process Completed\n");
				}
			}
			else if (x==4){
				char command[100]="mv ";
				char old_name[100];
				char new_name[100];
				printf("Enter the old name(File/Directory) you want to rename\n");
				scanf("%s",old_name);
				printf("Enter the new name(File/Directory) you want to be\n");
				scanf("%s",new_name);
					strcat(command,old_name);
					strcat(command," ");
					strcat(command,new_name);
					system(command);
					printf("Process Completed\n");
			}
			else if(x==5){
				char command[100]="ln ";
				char old_source[100];
				char new_source[100];
				char link[100]="-s ";
				printf("Enter the old name(File/Directory) you want to copy !\n");
				scanf("%s",old_source);
				printf("Enter the new name(File/Directory) you want to be symbolic !\n");
				scanf("%s",new_source);
					strcat(command,link);
					strcat(command,old_source);
					strcat(command," ");
					strcat(command,new_source);
					system(command);
					printf("Process Completed\n");
			}
			else{
				printf("You Have Entered a Wrong Number\n Please Choose from 1 to 5!!!!\n");
			 }


			printf("Want to choose another Option? \n");
			printf("Choose '0' for exit and '1' to continue ..\n");
			scanf("%d",&y);
				if (y!=0){
					printf("Specify the Option '1/2/3/4/5'! \n");
					scanf("%d",&x);
				}
		}

	printf("Program is Finished !!!!!\n");
return 0;
}
