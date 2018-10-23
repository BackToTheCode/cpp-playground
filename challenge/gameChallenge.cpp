#include <iostream>
#include <vector>
#include <string>
#include <utility> 

void printString(char *phrase, int length) 
{
    int index{0}
    do {
        std::cout << phrase[index]; 
        ++index;
    } while (index < length);
    
}

// ------------------------------------

// struct Student {
//     std::string name;
//     int grade;
// };

// void sortNames(Student *students, int length)
// {
//     for (int startIndex = 0; startIndex < length; startIndex++)
//     {
//         int largestIndex = startIndex;

//         for (int index = startIndex; index < length; index++)
//         {
//             if(students[index].grade > students[largestIndex].grade)
//             {
//                 largestIndex = index;
//             }
//         }

//         std::swap(students[startIndex], students[largestIndex]);
//     }

// }

// int main()
// {
//     int numStudents = 0;
//     do 
//     {
//         std::cout << "How many students do you want to enter? : ";
//         std::cin >> numStudents;
//         std::cout << "\n";
//     } while (numStudents <= 1);

//     Student *students = new Student[numStudents];

//     for (int index = 0; index < numStudents; ++index)
//     {
//         std::string name = "";
//         int grade{0};
//         std::cout << "Enter name #: ";
//         std::cin >> name;
//         std::cout << "\n";
//         std::cout << "Enter grade #: ";
//         std::cin >> grade;
//         std::cout << "\n";

//         students[index].name = name;
//         students[index].grade = grade;
//     }

//     sortNames(students, numStudents);

//     for (int index = 0; index < numStudents; ++index)
//     {
//         std::cout << students[index].name << " got a grade of " << students[index].grade << "\n";
//     }

//     return 0;

// };

// ------------------------------------

// enum ItemTypes
// {
//     ITEM_POTION,
//     ITEM_TORCH, 
//     ITEM_ARROW,
//     MAX_ITEMS
// };

// int countTotalItems(int *items)
// {
//     int totalItems = 0;
//     for (int index = 0; index < MAX_ITEMS; ++index)
//         totalItems += items[index];

//     return totalItems;
// }


// int main()
// {
//     int items[MAX_ITEMS] { 2, 5, 10 };

//     std::cout << "The player has " << countTotalItems(items) << " items in total.\n";
// }