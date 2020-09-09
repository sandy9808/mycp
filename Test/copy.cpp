#include <bits/stdc++.h>
using namespace std;

string split(string str)
{
    string words;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (str[i] == '/')
        {
            words.push_back(str[i]);
            break;
        }
        else
        {
            words.push_back(str[i]);
        }
    }
    reverse(words.begin(), words.end());
    return words;
}

int removeDupWord(string str, string str1)
{
    ifstream fs;
    ofstream ft;
    string str3;
    string fileName;

    fs.open(str);
    fileName = split(str);
    cout << str << endl;
    if (!fs)
    {
        cout << "Error in Opening Source File...!!! ";
        return 0;
    }
    str3 = str1;
    str3.append("/");
    str3.append(fileName);
    ft.open(str3);

    if (!ft)
    {
        cout << "Error in Opening Destination File...!!!";
        fs.close();
        exit(2);
    }

    if (fs && ft)
    {
        while (getline(fs, str))
        {
            ft << str << "\n";
        }

        cout << "\n\n Source File Date Successfully Copied to Destination File...!!!";
    }
    else
    {
        cout << "File Cannot Open...!!!";
        return 0;
    }
    fs.close();
    ft.close();

    return 0;
}

int main(int argc, char *argv[])
{
    char str[100], str1[100];

    string str2;

    for (int i = 1; i < argc - 1; ++i)
    {
        removeDupWord(argv[i], argv[argc - 1]);
    }
    // cout << "Enter Source Files with Extension: ";
    // gets(str);
    // cout << "Enter Destination Folder ";
    // gets(str1);

    return 0;
}
