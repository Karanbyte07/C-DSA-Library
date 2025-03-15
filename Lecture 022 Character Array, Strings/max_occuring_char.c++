#include <iostream>
using namespace std;

char getMaxOccurenceChar(string s)
{
    int arr[26] = {0};

    //  Count occurrences of each character
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = ch - 'a'; // Convert character to index (0-25)
        arr[number]++;         // Increment count for the respective character
    }

    // Find the character with the highest count
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {                  // If current character count is greater
            ans = i;       // Store the character index
            maxi = arr[i]; // Update max frequency
        }
    }
    // convert back to character
    return 'a' + ans;
}

int main()
{
    string s;
    cout << " Enter the string ";
    cin >> s;
    cout << "Maximum Occ:- " << getMaxOccurenceChar(s);
}
