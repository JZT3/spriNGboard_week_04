#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
/////////////////////////////////////////
// INCLUDE NECESSARY HEADER FILES HERE //
/////////////////////////////////////////

using namespace std;

void func_map (vector<pair<int,string>>& items)
{
  cout << endl << "=== BEGIN func_map ===" << endl;
  map<int,string> i2s_map;

  //Inserting key-value pairs into the map
  i2s_map[0] = "zero";
  i2s_map[1] = "one";
  i2s_map[2] = "two";
  i2s_map[3] = "three";


  
  for(auto& kvp : vector<pair<int,string>>{{4,"four"},{5,"five"},{6,"six"}}){
    i2s_map.insert(kvp);
    }
  ////////////////////////////////////////////
  // USING A RANGE-BASED for(...) LOOP,     //
  // INSERT EACH ITEM IN items INTO THE MAP //
  ////////////////////////////////////////////

  for(auto& kvp : i2s_map){
    cout<<kvp.first<<" == " << kvp.second << endl;}
  //////////////////////////////////////////////
  // USING A RANGE-BASED for(...) LOOP,       //
  // PRINT OUT EACH KEY-VALUE PAIR IN THE MAP //
  //////////////////////////////////////////////


  cout << endl << "=== END func_map ===" << endl;
}

void func_unordered_map (vector<pair<int,string>>& items)
{
  cout << endl << "=== BEGIN func_unordered_map ===" << endl;

  //////////////////////////////////////////////////////////
  // CREATE AN EMPTY unordered_map MAPPING int TO string. //
  //////////////////////////////////////////////////////////
  unordered_map<int,string> i2s_umap;
  i2s_umap[0] = "zero";

  for(auto& kvp : vector<pair<int,string>>{{1,"one"},{2,"two"},{3,"three"}}){
    i2s_umap.insert(kvp);

    cout<< "[size of map: " << i2s_umap.size()<<",\n number of buckets: "<<i2s_umap.bucket_count()<<",\n load factor: "<<i2s_umap.load_factor()<<"]"<<endl;
    }
  /////////////////////////////////////////////
  // USING A RANGE-BASED for(...) LOOP,      //
  // INSERT EACH ITEM IN items INTO THE MAP. //
  // AFTER EACH INSERTION, PRINT OUT:        //
  //   o  THE SIZE OF THE MAP                //
  //   o  THE NUMBER OF BUCKETS              //
  //   o  THE LOAD FACTOR                    //
  // IN THE FOLLOWING FORMAT:                //
  //   o  "[N,B,LF] = [3,10,0.4432]"         //
  /////////////////////////////////////////////

  for(auto& kvp : i2s_umap){
    cout<<kvp.first<<"=>"<<kvp.second<<endl;
    }
  ///////////////////////////////////////////////
  // USING A RANGE-BASED for(...) LOOP,        //
  // PRINT OUT EACH KEY-VALUE PAIR IN THE MAP. //
  ///////////////////////////////////////////////


  cout << endl << "=== END func_unordered_map ===" << endl;
}

int main ()
{
  vector<pair<int,string>> items = {
    {3, "three"},
    {13, "thirteen"},
    {2, "two"},
    {7, "seven"},
    {11, "eleven"},
    {20, "twenty"},
    {5, "five"},
    {96, "ninety six"},
    {97, "ninety seven"},
    {23, "twenty three"},
    {4, "four"},
    {59, "fifty nine"},
    {17, "seventeen"},
    {1, "one"}
  };

  func_map(items);
  func_unordered_map(items);

  return 0;
}

