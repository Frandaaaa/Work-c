#include <iostream>
#include <fstream>

using namespace std;

/**
 *  �ļ�����
 *  ofstream output;
 *  output.open(filename.type);
 *  output<<content;//out
 *  output.close();//

 *  fstream input:
 *  input.open(filename.type);
 *  input>>variable;
 *  cout<<content;
 *  input.close();
 *
 */

int main()
{
    //д��
    ofstream output;
    output.open("cuiqin2.txt");
    output<<"cuiqinbaba";
    output.close();
    cout<<"Done"<<endl;

    //��ȡ
    ifstream input;
    input.open("cuiqin2.txt");
    string a;
    input>>a;
    cout<<"The content of the file is: "<<a<<endl;
    input.close();
    cout<<"Done"<<endl;
    return 0;
}
