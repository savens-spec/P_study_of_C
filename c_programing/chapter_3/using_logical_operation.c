/*program 3.7 confused recruiting pilicy*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age = 0; /*age of applicant*/
	int colledge = 0; /*code for colledge attended*/
	int subject = 0; /*code of subject sudied*/
	bool interview = false; /*true for accept, false for reject*/

	/*get data on the aplicant*/
	printf("\nWhat colledge? i for Harvard, 2 for Yale, 3 for Others: ");
	scanf("%d", &colledge);
	printf("\nWhat subject? 1 for Chemistry, 2 for Economics, 3 for others: ");
	scanf("%d", &subject);
	printf("\nHow old is the Applicant? ");
	scanf("%d", &age);

	/*count out the applicant*/
	if((age>25 && subject == 1) && (colledge == 3 || colledge == 1))
		interview = true;
	if(colledge == 2 && subject == 1)
		interview = true;
	if(colledge == 1 &&  subject == 2 && !(age>28))
		interview = true;
	if(colledge == 2 && (subject == 2 || subject == 3) && age>25)
	        interview = true;
	
	/*output decision for inter view*/
	if(interview) 
		printf("\n\nGive them an interview");
	else
		printf("\n\nReject them");
	return 0;
}
