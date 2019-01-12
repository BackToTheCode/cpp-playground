#include <iostream>
#include <vector>

using namespace std;


int main()
{
    char input_char {};
    int sum {0};
    bool keep_running {true};
    vector<int> nums {};

    do 
    {
        cout << "\n";
        cout << "=================================" << endl;
        cout << "P - print numbers" << endl;
        cout << "A - add numbers" << endl;
        cout << "M - display mean of the numbers" << endl;
        cout << "S - display the smallest number" << endl;
        cout << "L - display the largest number" << endl;
        cout << "Q - quit" << endl;
        cout << "\n";


        cout << "Enter your choice...";
        cin >> input_char;

        switch(input_char) 
        {
            case 'p':
            case 'P':
                if (nums.size() == 0)
                    cout << "[] - the list is empty" << endl;
                
                cout << "[";
                for (auto num:nums)
                    cout << num << ", ";
                cout << "]";
                break;
            case 'a':
            case 'A':
                int temp;
                cout << "Enter a number...";
                cin >> temp;
                nums.push_back(temp);
                cout << temp << " added" << endl;
    
                break;
            case 'm':
            case 'M':
                
                for (auto num: nums)
                    sum += num;

                if (nums.size() > 0) 
                    cout << "The mean is " << sum / nums.size() << endl;
                else 
                    cout << "Cannot find mean - list is empty";
                break;
            case 's':
            case 'S':
                cout << "Selected P";

                break;
            case 'l':
            case 'L':
                cout << "Selected P";
      
                break;
            case 'q':
            case 'Q':
                keep_running = false;
                break;
            default:
                cout << "Unknown selection, please try again" << endl;
      
        }

    } while (keep_running);
}