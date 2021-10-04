//C Program showing String Initialization//

#include <stdio.h>
  
void main(){  
   char nameOne[16] = {'T','e','c','h','C','r','a','s','h','C','o','u','r','s','e','\0'};
   char nameTwo[] = {'T','e','c','h','C','r','a','s','h','C','o','u','r','s','e','\0'};
   char nameThree[16] = "TechCrashCourse";
   char nameFour[] = "TechCrashCourse";
   char *nameFive = "TechCrashCourse";
   
   printf("%s\n", nameOne); 
   printf("%s\n", nameTwo); 
   printf("%s\n", nameThree); 
   printf("%s\n", nameFour);
   printf("%s\n", nameFive); 
    
   return 0; 
}
