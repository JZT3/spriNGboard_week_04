#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

////////////////////////////////////
// INCLUDE NECESSARY HEADERS HERE //
////////////////////////////////////


using namespace std;

void print_vector (const vector<int>& v);

void test_algorithms (int N)
{
  vector<int> v(N,0);
  //////////////////////////////
  // CREATE A VECTOR v OF int //
  // WITH SIZE N              //
  // FILLED WITH ZEROS        //
  //////////////////////////////


  print_vector(v);

  iota(begin(v),end(v), 5);

  ///////////////////////////////
  // USE iota TO FILL v        //
  // WITH VALUES STARTING AT 5 //
  ///////////////////////////////


  print_vector(v);

  reverse(begin(v)+3, end(v)-5);

  ///////////////////////////////////////
  // USE reverse TO REVERSE THE VALUES //
  // BETWEEN THE THIRD AND FIFTH FROM  //
  // LAST POSITIONS                    //
  ///////////////////////////////////////


  print_vector(v);

  fill(begin(v), begin(v)+4 ,20);
  /////////////////////////////////////
  // USE fill TO FILL THE FIRST FOUR //
  // VALUES WITH 20s                 //
  /////////////////////////////////////


  print_vector(v);

  sort(begin(v)+1,end(v)-1);
  ////////////////////////////////////////
  // USE sort TO SORT ALL BUT THE FIRST //
  // AND LAST VALUES                    //
  ////////////////////////////////////////


  print_vector(v);

  sort(begin(v), end(v), [](const int a, const int b){
    //if a is even and b is odd return true
    return (a % 2 ==0) && (b %2==1);});

  ///////////////////////////////////////////
  // USE sort WITH A COMPARISON LAMBDA     //
  // TO SORT ALL EVEN NUMBERS TO THE       //
  // FRONT AND ALL ODD NUMBERS TO THE BACK //
  ///////////////////////////////////////////


  print_vector(v);
}

int main ()
{
  test_algorithms(15);
}

void print_vector (const vector<int>& v)
{
  cout << "v = ";
  for (auto& elem : v) {
    cout << elem << " ";
  }
  cout << endl;
}

