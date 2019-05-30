#include <iostream>
#include <string>

using namespace std;

/**
 *  Preview ����string ��
 */

int main()
{
    cout<< "Enter a string: ";
    string s;
    getline(cin, s);

    int low = 0;

    int high = s.length() - 1;

    bool isPalindrome = true;//ʹ�ò���ֵ���ж��Բ�
    while (low < high)
    {
        if(s[low] != s[high])
        {
            isPalindrome = false;
            break;
        }

        low++;
        high--;
    }

    if(isPalindrome)
        cout<< s << " is a Palindrome" << endl;
    else
        cout<< s << " is not a Palindrome" << endl;

    return 0;
}
