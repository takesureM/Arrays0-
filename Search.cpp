
#include <iostream>
#include <fstream>
using namespace std;

//A CASE STUDY.

int const NUM_PRODS = 9;
int const TITLE_SIZE = 26;
int const DESC_SIZE = 12;
int const MIN_PRODNUM = 914;
int const MAX_PRODUM = 922;

int getProdNum()
{
    int prodNum;
    cout << "Please Enter the Product number: ";
    cin >> prodNum;
    //Validation of the number.
    while (prodNum < MIN_PRODNUM || prodNum > MAX_PRODUM)
    {
        cout << "Enter number in the range of " << MIN_PRODNUM;
        cout << "through " << MAX_PRODUM << endl;
        cin >> prodNum;
    }
    return prodNum;
}

void selectionSort(int array[], int size)
{
    int startScan, int minIndex, int minValue;
    for (startScan  = 0; startScan < size-1; startScan++)
    {
        minIndex = minValue;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;

            }
            array[minIndex] = array[startScan];
            array[startScan] = minValue;
        }
    }
}

int binarySearch(int array[], int elements, int value)
{
    int first = 0;
    int last = elements - 1;
    int middle;
    int pos = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] == value)
        {
            found = true;
            pos = middle;
        }
        else if (array[middle] > value)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }
    return pos;

}

void display(char title[][TITLE_SIZE], char desc[][DESC_SIZE],
    double price[], int index)
{
    cout << "Title:" << title[index] << endl;
    cout << "Description: " << desc[index] << endl;
    cout << "Price: $" << price[index] << endl;
}

void SortArray(int array[], int size)
{
    int temp;
    bool swap;
    do
    {
        swap = false;
        for (int count  = 0;  count< (size-1); count++)
        {
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;

            }
        }
    } while (swap);
}

//int BinaryLis(int[], int, int);
//const int SIZE = 20;
//int searchList(int list[], int numElements, int value)
//{
//    bool found = false;  //Flag to indicate if the value is found   
//    int pos = -1;       // return the value
//    int index = 0;      //Subscript to search array
//
//    while (index < numElements && !found)
//    {
//        if (list[index] == value)
//        {
//            found = true;
//            pos = index;
//        }
//        index++;
//    }
//    return pos;
//}

//Binary Search => is a clever algarithm that is much more efficient than the linear search.

//int BinarySearch(int array[], int elements, int value)
//{
//    int first = 0;
//    bool found = false;
//    int middle;
//    int last = elements - 1;
//    int pos = -1;
//
//    while (!found && first <= last)
//    {
//        middle = (first + last) / 2;
//        if (array[middle] == value)
//        {
//            found = true;
//            pos = middle;
//        }
//        else if(array[middle] > value)
//        {
//            last = middle - 1;
//        }
//        else
//        {
//            first = middle + 1;
//        }
//    }
//    return pos;
//
//}

int main()
{

    cout << "Hello World!\n";

    int id[NUM_PRODS] = { 914, 915, 916, 917, 918, 919, 920,
                          921, 922 };
    char title[NUM_PRODS][TITLE_SIZE] =
         { "Six Steps to Leadership",
         "Six Steps to Leadership",
         "The Road to Excellence",
         "Seven Lessons of Quality",
         "Seven Lessons of Quality",
         "Seven Lessons of Quality",
         "Teams Are Made, Not Born",
         "Leadership for the Future",
         "Leadership for the Future"
        };
    char description[NUM_PRODS][DESC_SIZE] =
         { "Book", "Audio CD", "DVD",
         "Book", "Audio CD", "DVD",
         "Book", "Book", "Audio CD"
        };
    double prices[NUM_PRODS] = { 12.95, 14.95, 18.95, 16.95, 21.95,
                                 31.95, 14.95, 14.95, 16.95 };



    int prodNum;
    int index;
    char resp;

    do
    {
        prodNum = getProdNum();

        index = binarySearch(id, NUM_PRODS, prodNum);
        if (index == -1)
            cout << "That product number was not found.\n";
        else
            display(title, description, prices, index);
        
            // Does the user want to do this again?
            cout << "Would you like to look up another product? (y/n) ";
        cin >> resp;

    } while (resp == 'y' || resp == 'Y');






    //int idNums[SIZE] =  {101, 142, 147, 189, 199, 207, 222,
    //                    234, 289, 296, 310, 319, 388, 394,
    //                    417, 429, 447, 521, 536, 600
    //                }; 
    //int results;
    //int empID;

    //cout << "Enter employee id you wish to search: ";
    //cin >> empID;
    //results = BinarySearch(idNums, SIZE, empID);

    //if (results == -1)
    //{
    //    cout << "That number does not exist in the array.\n";
    //}
    //else {
    //    cout << "That ID is found at element " << results;
    //    cout << " in the array.\n";

    //}
    /*static const int ARRAY_SIZE = 15;
    int numbers[ARRAY_SIZE];
    int count;*/
    
    /*for ( count = 0; count < ARRAY_SIZE; count++)
    {
        cout << "Enter hours worked by employees:" << count + 1 << endl;
        cin >> numbers[count];
    }

    for ( count= 0; count < ARRAY_SIZE; count++)
    {
        cout << numbers[count]<<endl;
    }*/
    //ifstream inputFile;
    //inputFile.open("Numbers.txt");

    //for ( count = 0; count < ARRAY_SIZE; count++)
    //{
    //    inputFile >> numbers[count];
    //}
    //inputFile.close();

    //for  (count = 0; count < ARRAY_SIZE; count++)
    //{
    //    cout << numbers[count]<<" ";
    //}
    //cout <<endl;
    /*ofstream outputFile;
    for ( count = 0; count < ARRAY_SIZE; count++)
    {
        numbers[count] = count;
      
    }
    outputFile.open("Numbers");
    for ( count = 0; count < ARRAY_SIZE; count++)
    {
        outputFile << numbers[count];
    }
    outputFile.close();

    cout << "The numbers were saved to the file.\n";*/

    




    return 0;
}

