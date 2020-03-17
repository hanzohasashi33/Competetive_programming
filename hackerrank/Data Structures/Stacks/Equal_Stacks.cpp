#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the equalStacks function below.
 */
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    /*
     * Write your code here.
     */
     stack <int> s1;
     stack <int> s2;
     stack <int> s3;
     int sum1 = 0,sum2 = 0,sum3 = 0;
     for(int i = h1.size() - 1;i >= 0;i--)
     {
        s1.push(h1[i]);
        sum1 += h1[i];
     }
     for(int i = h2.size() - 1;i >= 0;i--)
     {
         s2.push(h2[i]);
         sum2 += h2[i];
     }
     for(int i = h3.size() - 1;i >= 0;i--)
     {
         s3.push(h3[i]);
         sum3 += h3[i];
     }
     while(!(sum1 == sum2 && sum2 == sum3 && sum3 == sum1))
     {
         if(sum1 >= sum2 && sum1 >= sum3)
         {
             int x = s1.top();
             s1.pop();
             sum1 -= x;
         }
         else if(sum2 >= sum3 && sum2 >= sum1)
         {
             int x = s2.top();
             s2.pop();
             sum2 -= x;
         }
         else if(sum3 >= sum1 && sum3 >= sum2)
         {
             int x = s3.top();
             s3.pop();
             sum3 -= x;
         }
     }
     return sum1;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n1N2N3_temp;
    getline(cin, n1N2N3_temp);

    vector<string> n1N2N3 = split_string(n1N2N3_temp);

    int n1 = stoi(n1N2N3[0]);

    int n2 = stoi(n1N2N3[1]);

    int n3 = stoi(n1N2N3[2]);

    string h1_temp_temp;
    getline(cin, h1_temp_temp);

    vector<string> h1_temp = split_string(h1_temp_temp);

    vector<int> h1(n1);

    for (int h1_itr = 0; h1_itr < n1; h1_itr++) {
        int h1_item = stoi(h1_temp[h1_itr]);

        h1[h1_itr] = h1_item;
    }

    string h2_temp_temp;
    getline(cin, h2_temp_temp);

    vector<string> h2_temp = split_string(h2_temp_temp);

    vector<int> h2(n2);

    for (int h2_itr = 0; h2_itr < n2; h2_itr++) {
        int h2_item = stoi(h2_temp[h2_itr]);

        h2[h2_itr] = h2_item;
    }

    string h3_temp_temp;
    getline(cin, h3_temp_temp);

    vector<string> h3_temp = split_string(h3_temp_temp);

    vector<int> h3(n3);

    for (int h3_itr = 0; h3_itr < n3; h3_itr++) {
        int h3_item = stoi(h3_temp[h3_itr]);

        h3[h3_itr] = h3_item;
    }

    int result = equalStacks(h1, h2, h3);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
