/*Header file for main.cpp*/

#include <iostream>
#include<string>


const int NAME = 0;
const int NUMBER = 1;
const int GRAD_DATE = 2;
const int STUDENTS_LENGTH = 5;
const int STUDENTS_PROPERTIES_LENGTH = 3;


void sortStudents(std::string[][3], int);
void printArray(std::string[][3]);
void swap(std::string*, std::string*);


void sortStudents(std::string arr[][3], int sortCriteria)
{
	int smallerNumberSize = 0;
    for(int i=0; i<STUDENTS_LENGTH; i++)  //primary for loop
    {
        for(int j=0; j<STUDENTS_LENGTH; j++)  //secondary for loop
        {
			std::string *primaryStr = &arr[i][sortCriteria];
            std::string *secondaryStr = &arr[j][sortCriteria];
			if(sortCriteria == NUMBER)
			{
                int primaryNumber = std::stoi((*primaryStr).substr(3, (*primaryStr).size()-1));
                int secondaryNumber = std::stoi((*secondaryStr).substr(3, (*secondaryStr).size()-1));
                if(primaryNumber < secondaryNumber)
                {
                    swap(primaryStr, secondaryStr);
                }    
            }
			else if((*primaryStr).compare(*secondaryStr) < 0)
            {
                swap(primaryStr, secondaryStr);
            }
        }
    }
}
void printArray(std::string arr[][3])
{
    for(int i=0; i<STUDENTS_LENGTH; i++)
    {
        std::cout<<"Student # "<<i+1<<": ";
        for(int j=0; j<STUDENTS_PROPERTIES_LENGTH; j++)
        {
           std::cout<<arr[i][j]<<", ";
        }
        std::cout<<std::endl;
    }
}
void swap(std::string* primaryElement, std::string* secondaryElement)
{
    std::string temp = *primaryElement;
    *primaryElement = *secondaryElement;
    *secondaryElement = temp;
}