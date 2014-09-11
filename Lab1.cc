//Lab1-4

#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

void insert (vector b, string a)



struct word_entry
{
  string ord;
  int antal;
};

vector<word_entry> lista;

int main()
{
  string ordet;
  
  while (cin >> ordet)
    {
      cin >> ordet;
      
      int i = 0;

      while (ordet[i])
	{
	  c=str[i];
	  putchar (tolower (c));
	  ++i;
	}
      
      for (auto it = lista.begin(); it != lista.end(); ++it)
	if 
	  insert (lista, ordet)
		   


		   }


//Test1-4

#include <iostream>
#include <cctype>

using namespace std;

string ordet;
int main()
{

  while (cin >> ordet)
    {
      cin >> ordet;
    }
  unsigned int i = 0;

  while (ordet[i]>ordet.length())
    {
      // putchar (tolower (ordet[i]));
      ordet[i]=tolower (ordet[i]);
      ++i;
    }
  cout << ordet;

  return 0;
}
