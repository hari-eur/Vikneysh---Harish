#include <stdio.h>


struct StuDetail {
  char name[50];
  char mailID[50];
  char mobileNumber[15];
  float percentage;
};


struct Dept {
  char deptName[50];
  struct StuDetail studentDetails[50];
  int numStudents;
  float totalAverage;
};

int main() {
  int numDepts, i, j;
  float sum, average;

  
  printf("Enter the number of Depts: ");
  scanf("%d", &numDepts);

  struct Dept Depts[numDepts];

  for (i = 0; i < numDepts; i++) {
    printf("\nEnter details for Dept %d:\n", i+1);
    printf("Enter the Dept name: ");
    scanf("%s", Depts[i].deptName);

   
    printf("Enter the number of students in the Dept: ");
    scanf("%d", &Depts[i].numStudents);

    sum = 0;
    for (j = 0; j < Depts[i].numStudents; j++) {
      printf("\nEnter details for student %d:\n", j+1);
      printf("Enter the student name: ");
      scanf("%s", Depts[i].studentDetails[j].name);
      printf("Enter the student email ID: ");
      scanf("%s", Depts[i].studentDetails[j].mailID);
      printf("Enter the student mobile number: ");
      scanf("%s", Depts[i].studentDetails[j].mobileNumber);
      printf("Enter the student percentage: ");
      scanf("%f", &Depts[i].studentDetails[j].percentage);

      
      sum += Depts[i].studentDetails[j].percentage;
    }

    
    average = sum / Depts[i].numStudents;
    Depts[i].totalAverage = average;
  }

 
  printf("\nDept Details:\n");
  for (i = 0; i < numDepts; i++) {
    printf("\nDept %d:\n", i+1);
    printf("Dept name: %s\n", Depts[i].deptName);
    printf("Number of students: %d\n", Depts[i].numStudents);

    
    printf("Student Details:\n");
    for (j = 0; j < Depts[i].numStudents; j++) {
      printf("\nStudent %d:\n", j+1);
      printf("Name: %s\n", Depts[i].studentDetails[j].name);
      printf("Email ID: %s\n", Depts[i].studentDetails[j].mailID);
      printf("Mobile number: %s\n", Depts[i].studentDetails[j].mobileNumber);
      printf("Percentage: %.2f\n", Depts[i].studentDetails[j].percentage);
    }


    printf("Total average: %.2f\n", Depts[i].totalAverage);
  }

  return 0;
}


