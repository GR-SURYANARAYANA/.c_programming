/*NOTE:-ENTER THE DATES PROPRERLY EVEN INCLUDE THE ZERO.
      PROVIDE A VALID MARKS OF 2 DIGITS.
AIM:- PROBLEMS INDICATING WITHOUT STRUCTURE
      USE OF RECURSION FUNCTION(SPECIALLY REUSABILITY)
      THANKS TO VISIT*/
#include<stdio.h>
#include<string.h>
int card(int YEAR,int UNIQUE_ID,int ENG,int ENGI,int TENG,int LANGUAGE,int HISTORY,int GEOGRAPHY,int OPTIONAL_SUB,int MATHEMATICS,int PHYSICS,int CHEMISTRY,int BIOLOGY,int DD,int MM,int YYYY,int SCIENCE,int SOCIAL,char NAME[20],char MOTHER_NAME[20],char FATHER_NAME[20])
{
    printf("\n..................................................................................");
    printf("\n.    COUNCIL  FOR  THE  INDIAN  SCHOOL  CERTIFICATE  EXAMINATION ,NEW DELHI      .");
    printf("\n.      INDIAN CERTIFICATE OF SECONDARY EDUCATION(CLASS-X)-YEAR %d              .",YEAR);
    printf("\n.                                                                                .");
    printf("\n.                                                                                .");
    printf("\n.  NAME %20s                                                     .",NAME);
    printf("\n.  OF SHANTINIKETAN PUBLIC SCHOOL,HOSPET                                         .");
    printf("\n.  UNIQUE ID %6d                                                              .",UNIQUE_ID);
    printf("\n.  SON OF                                                                        .");
    printf("\n.  SMT %20s                                                      .",MOTHER_NAME);    
    printf("\n.  SHRI %20s                                                     .",FATHER_NAME);
    printf("\n.   _______________________________________________________________________      .");
    printf("\n.  |  SUBJECTS                     |TOTAL MARKS|   PERCENTAGE MARKS       |      .");
    printf("\n.  |-------------------------------|-----------|--------------------------|      .");
    printf("\n.  | ENGLISH                       |           |             %d           |      .",TENG);
    printf("\n.  |     ENGLISH-I                 |    %d     |                          |      .",ENG);
    printf("\n.  |     ENGLISH-II                |    %d     |                          |      .",ENGI);
    printf("\n.  |-------------------------------|-----------|--------------------------|      .");
    printf("\n.  | OPTIONAL LANGUAGE             |    %d     |             %d           |      .",LANGUAGE,LANGUAGE);
    printf("\n.  |-------------------------------|-----------|--------------------------|      .");
    printf("\n.  | HISTORY,CIVICS & GEOGRAPHY    |           |             %d           |      .",SOCIAL);
    printf("\n.  |     HISTORY                   |    %d     |                          |      .",HISTORY);
    printf("\n.  |     GEOGRAPHY                 |    %d     |                          |      .",GEOGRAPHY);
    printf("\n.  |-------------------------------|-----------|--------------------------|      .");
    printf("\n.  | MATHEMATICS                   |    %d     |             %d           |      .",MATHEMATICS,MATHEMATICS);
    printf("\n.  |-------------------------------|-----------|--------------------------|      .");
    printf("\n.  | SCIENCE                       |           |             %d           |      .",SCIENCE);
    printf("\n.  |     PHYSICS                   |    %d     |                          |      .",PHYSICS);
    printf("\n.  |     CHEMISTRY                 |    %d     |                          |      .",CHEMISTRY);
    printf("\n.  |     BIOLOGY                   |    %d     |                          |      .",BIOLOGY);
    printf("\n.  |-------------------------------|-----------|--------------------------|      .");
    printf("\n.  | OPTIONAL SUBJECT              |           |             %d           |      .",OPTIONAL_SUB);
    printf("\n.  |-------------------------------|-----------|--------------------------|      .");
    printf("\n.  | INTERNAL ASSESMENT                                GRADE              |      .");
    printf("\n.  | SUPW AND COMMUNITY SERVICE                          A                |      .");
    printf("\n.  |______________________________________________________________________|      .");
    printf("\n.                                                                                .");
    printf("\n.   DATE OF BIRTH %d.%d.%d                                                      .",DD,MM,YYYY);    
    printf("\n.   RESULT-PASS AWARD                                                            .");
    printf("\n.   DATE OF RESULT DECLARATION-12.5.2021                                         .");
    printf("\n.                                                                                .");
    printf("\n.................................................................................."); 
}
int INFORMATION()
{
    int YEAR,UNIQUE_ID,ENG,ENGI,LANGUAGE,HISTORY,GEOGRAPHY,OPTIONAL_SUB,MATHEMATICS,PHYSICS,CHEMISTRY,BIOLOGY,DD,MM,YYYY,SCIENCE,TENG,SOCIAL;
    char NAME[20],MOTHER_NAME[20],FATHER_NAME[20];
    printf("\nENTER YOUR BASIC INFORMATION");
    printf("\nENTER THE YEAR");
    scanf("%d",&YEAR);
    printf("\nUNIQUE_ID ");
    scanf("%d",&UNIQUE_ID);
    printf("ENTER NAME");
    gets(NAME);
     printf(" ");
    gets(NAME);
    printf("\nFATHER NAME ");
    gets(FATHER_NAME);
    printf("\nMOTHER NAME ");
    gets(MOTHER_NAME);
    printf("\nDATE OF BIRTH\nDD");
    scanf("%d",&DD);
    printf("\nMM ");
    scanf("%d",&MM);
    printf("\nYYYY ");
    scanf("%d",&YYYY);
    printf("\nENTER THE MARKS DETAILS ");
    printf("\nENTER YOUR ENGLISH-I MARKS ");
    scanf("%d",&ENG);
     printf("\nENTER YOUR ENGLISH-II MARKS ");
    scanf("%d",&ENGI);
     printf("\nENTER YOUR OPTIONAL LANGUAGE MARKS ");
    scanf("%d",&LANGUAGE);
     printf("\nENTER YOUR HISTORY & CIVICS MARKS ");
    scanf("%d",&HISTORY);
     printf("\nENTER YOUR GEOGRAPHY MARKS ");
    scanf("%d",&GEOGRAPHY);
    printf("\nENTER YOUR MATHEMATICS MARKS ");
    scanf("%d",&MATHEMATICS);
    printf("\nENTER YOUR PHYSICS MARKS ");
    scanf("%d",&PHYSICS);
    printf("\nENTER YOUR CHEMISTRY MARKS ");
    scanf("%d",&CHEMISTRY);
    printf("\nENTER YOUR BIOLOGY MARKS ");
    scanf("%d",&BIOLOGY);
    printf("\nENTER YOUR OPTIONAL_SUB MARKS ");
    scanf("%d",&OPTIONAL_SUB);
    SCIENCE=(PHYSICS+CHEMISTRY+BIOLOGY)/3;
    SOCIAL=(HISTORY+GEOGRAPHY)/2;
    TENG=(ENG+ENGI)/2;
    //marks_card(char NAME[20],char MOTHER_NAME[20],char FATHER_NAME[20],int YEAR,int UNIQUE_ID,int ENG,int ENGI,int TENG,int LANGUAGE,int HISTORY,int GEOGRAPHY,int OPTIONAL_SUB,int MATHEMATICS,int PHYSICS,int CHEMISTRY,int BIOLOGY,int DD,int MM,int YYYY,int SCIENCE,int SOCIAL);
    card(YEAR,UNIQUE_ID,ENG,ENGI,TENG,LANGUAGE,HISTORY,GEOGRAPHY,OPTIONAL_SUB,MATHEMATICS,PHYSICS,CHEMISTRY,BIOLOGY,DD,MM,YYYY,SCIENCE,SOCIAL,NAME,MOTHER_NAME,FATHER_NAME);
    
}
int main()
{
    int i,n;
    printf("ENTER THE NUMBER OF GENERATION OF MARKS CARD ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("%d",i);
        printf(".ENTER YOUR MARKS CARD HERE");
 INFORMATION();
       
    }
    return 0;
}
        
/* Output
ENTER THE NUMBER OF GENERATION OF MARKS CARD >>>2
1.ENTER YOUR MARKS CARD HERE
ENTER YOUR BASIC INFORMATION
ENTER THE YEAR>>>2021

UNIQUE_ID >>>348957
ENTER NAME >>>DOUNG

FATHER NAME >>>WILLIAM 

MOTHER NAME >>>LILLY 

DATE OF BIRTH
DD>>>23

MM >>>06

YYYY >>>2003

ENTER THE MARKS DETAILS 
ENTER YOUR ENGLISH-I MARKS >>>45

ENTER YOUR ENGLISH-II MARKS >>>54

ENTER YOUR OPTIONAL LANGUAGE MARKS >>>67

ENTER YOUR HISTORY & CIVICS MARKS >>>78

ENTER YOUR GEOGRAPHY MARKS >>>67

ENTER YOUR MATHEMATICS MARKS >>>78

ENTER YOUR PHYSICS MARKS >>>78

ENTER YOUR CHEMISTRY MARKS >>>89

ENTER YOUR BIOLOGY MARKS >>>93

ENTER YOUR OPTIONAL_SUB MARKS >>>80

..................................................................................
.    COUNCIL  FOR  THE  INDIAN  SCHOOL  CERTIFICATE  EXAMINATION ,NEW DELHI      .
.      INDIAN CERTIFICATE OF SECONDARY EDUCATION(CLASS-X)-YEAR 2021              .
.                                                                                .
.                                                                                .
.  NAME                DOUNG                                                     .
.  OF SHANTINIKETAN PUBLIC SCHOOL,HOSPET                                         .
.  UNIQUE ID 348957                                                              .
.  SON OF                                                                        .
.  SMT               LILLY                                                       .
.  SHRI             WILLIAM                                                      .
.   _______________________________________________________________________      .
.  |  SUBJECTS                     |TOTAL MARKS|   PERCENTAGE MARKS       |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | ENGLISH                       |           |             49           |      .
.  |     ENGLISH-I                 |    45     |                          |      .
.  |     ENGLISH-II                |    54     |                          |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | OPTIONAL LANGUAGE             |    67     |             67           |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | HISTORY,CIVICS & GEOGRAPHY    |           |             72           |      .
.  |     HISTORY                   |    78     |                          |      .
.  |     GEOGRAPHY                 |    67     |                          |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | MATHEMATICS                   |    78     |             78           |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | SCIENCE                       |           |             86           |      .
.  |     PHYSICS                   |    78     |                          |      .
.  |     CHEMISTRY                 |    89     |                          |      .
.  |     BIOLOGY                   |    93     |                          |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | OPTIONAL SUBJECT              |           |             80           |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | INTERNAL ASSESMENT                                GRADE              |      .
.  | SUPW AND COMMUNITY SERVICE                          A                |      .
.  |______________________________________________________________________|      .
.                                                                                .
.   DATE OF BIRTH 23.6.2003                                                      .
.   RESULT-PASS AWARD                                                            .
.   DATE OF RESULT DECLARATION-12.5.2021                                         .
.                                                                                .
..................................................................................2.ENTER YOUR MARKS CARD HERE
ENTER YOUR BASIC INFORMATION
ENTER THE YEAR>>>2021

UNIQUE_ID >>>485445
ENTER NAME >>>JOY RAYS

FATHER NAME >>>ROY WILLIAM

MOTHER NAME >>>ROY JULIET

DATE OF BIRTH
DD>>>23

MM >>>02

YYYY >>>2003

ENTER THE MARKS DETAILS 
ENTER YOUR ENGLISH-I MARKS >>>39

ENTER YOUR ENGLISH-II MARKS >>>48

ENTER YOUR OPTIONAL LANGUAGE MARKS >>>98

ENTER YOUR HISTORY & CIVICS MARKS >>>87

ENTER YOUR GEOGRAPHY MARKS >>>82

ENTER YOUR MATHEMATICS MARKS >>>93

ENTER YOUR PHYSICS MARKS >>>84

ENTER YOUR CHEMISTRY MARKS >>>84

ENTER YOUR BIOLOGY MARKS >>>84

ENTER YOUR OPTIONAL_SUB MARKS >>>93

..................................................................................
.    COUNCIL  FOR  THE  INDIAN  SCHOOL  CERTIFICATE  EXAMINATION ,NEW DELHI      .
.      INDIAN CERTIFICATE OF SECONDARY EDUCATION(CLASS-X)-YEAR 2021              .
.                                                                                .
.                                                                                .
.  NAME             JOY RAYS                                                     .
.  OF SHANTINIKETAN PUBLIC SCHOOL,HOSPET                                         .
.  UNIQUE ID 485445                                                              .
.  SON OF                                                                        .
.  SMT           ROY JULIET                                                      .
.  SHRI          ROY WILLIAM                                                     .
.   _______________________________________________________________________      .
.  |  SUBJECTS                     |TOTAL MARKS|   PERCENTAGE MARKS       |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | ENGLISH                       |           |             43           |      .
.  |     ENGLISH-I                 |    39     |                          |      .
.  |     ENGLISH-II                |    48     |                          |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | OPTIONAL LANGUAGE             |    98     |             98           |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | HISTORY,CIVICS & GEOGRAPHY    |           |             84           |      .
.  |     HISTORY                   |    87     |                          |      .
.  |     GEOGRAPHY                 |    82     |                          |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | MATHEMATICS                   |    93     |             93           |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | SCIENCE                       |           |             84           |      .
.  |     PHYSICS                   |    84     |                          |      .
.  |     CHEMISTRY                 |    84     |                          |      .
.  |     BIOLOGY                   |    84     |                          |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | OPTIONAL SUBJECT              |           |             93           |      .
.  |-------------------------------|-----------|--------------------------|      .
.  | INTERNAL ASSESMENT                                GRADE              |      .
.  | SUPW AND COMMUNITY SERVICE                          A                |      .
.  |______________________________________________________________________|      .
.                                                                                .
.   DATE OF BIRTH 23.2.2003                                                      .
.   RESULT-PASS AWARD                                                            .
.   DATE OF RESULT DECLARATION-12.5.2021                                         .
.                                                                                .
..................................................................................

Process Finished.
>>>  */