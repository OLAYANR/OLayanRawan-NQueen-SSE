// This program check if the Width of board is  between 2 and 18, inclusive.
// it return true if it unit test : passed the test successfully, false 

#include <fstream>

#include <iostream>

#include <string>

 

using namespace std;

 

int main() {

      // a string to store line of text
string str1 ("For board size 1,"); string org ("For board size"); string temp;

string str2 ("For board size 2,");string str9 ("For board size 9,");string str16 ("For board size 16,");
string str3 ("For board size 3,");string str10 ("For board size 10,");string str17 ("For board size 17,");
string str4 ("For board size 4,");string str11 ("For board size 11,");string str18("For board size 18,");
string str5 ("For board size 5,");string str12 ("For board size 12,");
string str6 ("For board size 6,");string str13 ("For board size 13,");
string str7 ("For board size 7,");string str14 ("For board size 14,");
string str8 ("For board size 8,");string str15 ("For board size 15,");
  size_t foundorg,found2,found3,found4,found5,found6,found7,found8,found9,found10,found11,found12,found13,found14,found15,found16,found17,found18;


      string textLine;

      // try to open a file

      ifstream ifs("/home/sony/Documents/OLayanRawan-NQueen-SSE/test/solutions-output/SolutionsResults.txt", ifstream::in);


      if (ifs.good())   { // if opening is successful

            // while file has lines

            while (!ifs.eof()) {

                  // read line of text

        getline(ifs, textLine);

	foundorg=textLine.find(org);
  if (foundorg!=string::npos)
{
temp=textLine;

found2=temp.find(str2);
  if (found2!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found3=temp.find(str3);
  if (found3!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found4=temp.find(str4);
  if (found4!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found5=temp.find(str5);
  if (found5!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found6=temp.find(str6);
  if (found6!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found7=temp.find(str7);
  if (found7!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found8=temp.find(str8);
  if (found8!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found9=temp.find(str9);
  if (found9!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found10=temp.find(str10);
  if (found10!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found11=temp.find(str11);
  if (found11!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found12=temp.find(str12);
  if (found12!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found13=temp.find(str13);
  if (found13!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found14=temp.find(str14);
  if (found14!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found15=temp.find(str15);
  if (found15!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found16=temp.find(str16);
  if (found16!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found17=temp.find(str17);
  if (found17!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

found18=temp.find(str18);
  if (found18!=string::npos)
{
cout << "unit test : passed" << endl<< temp << endl;
break;
}

else
{
cout << "unit test : failed" << endl<< temp << endl;

}         

}

         }

//cout << "exit" << endl<< temp << endl;
//cout << textLine << endl;

ifs.close();

      } else

            // otherwise print a message

            cout << "ERROR: can't open file." << endl;

 

      return 0;

}
