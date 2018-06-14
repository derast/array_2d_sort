/*Goal: sort students by multiple data vaule
**
**student1: Name: Joe Lime, ID#15, Grad. Date: 2019
**student2: Name: Bob Green, ID#3, Grad. Date: 2020
**student3: Name: SallyAnne Green , ID#1, Grad. Date: 2017
**student4: Name: Annie Blue, ID#10, Grad. Date: 2020
**student5: Name: Jose Lemon, ID#25, Grad. Date: 2016
*/

#include"main.hpp"

using namespace std;

int main()
{
    std::string studentsArray[STUDENTS_LENGTH][STUDENTS_PROPERTIES_LENGTH] = {
        {"Joe Lime", "ID#15", "2019"}, 
        {"Bob Green", "ID#3", "2020"}, 
        {"SallyAnne Green", "ID#1", "2017"},
        {"Annie Blue", "ID#10", "2020"},
        {"Jose Lemon", "ID#25", "2016"}
    };
    std::cout<<"Sort by name\n";
    std::cout<<"------------\n";
    sortStudents(studentsArray, NAME);
    printArray(studentsArray);
    std::cout<<"\nSort by number\n";
    std::cout<<"--------------\n";
    sortStudents(studentsArray, NUMBER);
    printArray(studentsArray);
    std::cout<<"\n\nSort by grad date\n";
    std::cout<<"-----------------\n";
    sortStudents(studentsArray, GRAD_DATE);
    printArray(studentsArray);
    
    return 0;
}
