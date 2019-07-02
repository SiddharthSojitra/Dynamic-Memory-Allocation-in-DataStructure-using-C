#include<stdio.h>
#include<conio.h>
#include<string.h>

char *fname,*lname,*enroll,*aclass,*sem;
char **subject;
float *sub_total;
float *obt_marks;
float obt_total=0;
float percentage;
int Num_of_subject;

void basicdetail()
{
	int i;
	
    printf("Enter the first name of student : ");
    fname=(char*)malloc(30*sizeof(char));
	scanf("%s",fname);
    
    printf("Enter the last name of student : ");
    lname=(char*)malloc(30*sizeof(char));
	scanf("%s",lname);
    
    printf("Enter the enrollment no. of student : ");
    enroll=(char*)malloc(30*sizeof(char));
	scanf("%s",enroll);
    
	printf("Enter the class of student : ");
    aclass=(char*)malloc(30*sizeof(char));
	scanf("%s",aclass);
    
	printf("Enter the Semester of student : ");
    sem=(char*)malloc(30*sizeof(char));
	scanf("%s",sem);
}

void subjectdetail()
{
	int i,count;
    
	printf("\nHow many subject do you have : ");
    scanf("%d",&Num_of_subject);

    subject=(char*)malloc(Num_of_subject*sizeof(char));
    
    
    for(i=0;i<Num_of_subject;i++)
    {
        subject[i]=(char*)malloc(15*sizeof(char));
    }
    
    count=*subject;
    
	sub_total=(float*)malloc(Num_of_subject*sizeof(float));
	
	for(i=0;i<Num_of_subject;i++)
	{
        printf("\nEnter the subjects %d : ",i+1);
        scanf("%s",subject[i]);
        printf("Enter the total marks of >> %s << subject : ",subject[i]);
        scanf("%f",&sub_total[i]);

    }

}
void obtainmarks()
{
	int i;
	
	obt_marks=(float*)malloc(Num_of_subject*sizeof(float));
	
	for(i=0;i<Num_of_subject;i++)
	{
    	printf("\nEnter the obtained marks of >> %s << Subject \n",subject[i]);
    	scanf("%f",&obt_marks[i]);	
    	obt_total = obt_total + obt_marks[i];
	}
}
void markssheet()
{
	int i,j;
	system("cls");
    printf("\n\n=======================MARKSHEET========================\n");
    printf("========================================================\n");
    
    printf("\tFirst name is ");
    for(i=0;*fname!=NULL;fname++)
        {
            printf("%c",*fname);
        }
        printf("\n");
    
	printf("\tLast name is ");
	for(i=0;*lname!=NULL;lname++)
        {
            printf("%c",*lname);
        }
        printf("\n");
    
	printf("\tEnrollment no. is ");
    for(i=0;*enroll!=NULL;enroll++)
        {
            printf("%c",*enroll);
        }
        printf("\n");
    
	printf("\tClass is ");
    for(i=0;*aclass!=NULL;aclass++)
        {
            printf("%c",*aclass);
        }
        printf("\n");
        
	printf("\tSemester is ");
    for(i=0;*sem!=NULL;sem++)
        {
            printf("%c",*sem);
        }
        printf("\n");
        
        
    
	printf("========================================================\n");
    printf("SUBJECT NAME \t TOTAL MARKS \t OBT MARKS  \n");
    printf("========================================================\n");
    
	for(i=0;i<Num_of_subject;i++)
    {
    	printf("%s \t\t %f \t %f \n",subject[i],sub_total[i],obt_marks[i]);
	}
	printf("\t===================================\n");
	printf("\t Total Obtained marks is %f \n",obt_total);
}

int main()
{
    basicdetail();
    subjectdetail();
    obtainmarks();
    markssheet();
    
	return 0;
}

