//map is simmilar javascript object key: value concept like in c++ : map<int,int>myMap;
//N.B don't conflict name like use map<int,int>myMap instead of map<int,int>map
//quick learning link : https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
// https://www.studytonight.com/cpp/stl/stl-container-map

#include<iostream>
#include<map>
#include<utility>//for using pair
#include<iterator>
using namespace std;
void showMapItems(map<int,int>keepMap);
int main(){

   //Initializing Map
   map<int,int>myMap{{1,5},{2,6}};//map gonna hold pairs of key,value & data type of them are int,int
   //map<int,int>anotherMap(myMap); creates a copymap of mymap
   // same job can be done  map<int,int>anotherMap(myMap.begin(),myMap.end());

    //Inserting items into map
   myMap.insert(pair<int,int>{3,7});//mind it two key can't be equal
   myMap.insert(pair<int,int>{4,8});
   myMap.insert(pair<int,int>{5,9});
   myMap[6]=100;//you can insert data in this way too.in general map[key]=value
   showMapItems(myMap);

   //Deleting a certain element from the map i)map.erase(location pointer) ii)map.erase(key)

   myMap.erase(2);//delete the item which key is 2
   // auto p=myMap.find(2);//find the key and return its pointer
   // myMap.erase(p);
   //myMap.erase(myMap.find(2)) ;//do the same job of above
   cout<<"After Deleting the item which key is 2: \n";
   showMapItems(myMap);

   //swap() in map
   map<int,int>map1{{1,50},{2,60}};
   map<int,int>map2{{1,70},{2,80}};
   cout<<"Before swaping : \n";
   showMapItems(map1);
   showMapItems(map2);

   swap(map1,map2);
   // auto keep=map1;
   // map1=map2;
   // map2=keep; //above three lines do the same job
   cout<<"After swaping : \n";
   showMapItems(map1);
   showMapItems(map2);


   //map.count(key) returns 1 if key exists else returns 0 if key doesn't exist
   cout<<" does key 2 exist ? : "<<myMap.count(2)<<endl;

   cout<<"\nCurrent size of the map : "<<myMap.size()<<endl;
   cout<<"\nMax size of the map : "<<myMap.max_size()<<endl;
   cout<<"\nIs the map empty ? : "<<myMap.empty()<<endl;


  return 0;
}
void showMapItems(map<int,int>keepMap){

  map<int,int>:: iterator p;

  cout<<"\tKey"<<"\tValue"<<endl;

  for(p=keepMap.begin();p!=keepMap.end();p++){

    //accessing map values i)map.at(key) ii)map[key]

    cout<<"\t "<<p->first<<"\t "<<p->second<<endl;
    //cout<<"\t "<<p->first<<"\t "<<keepMap[p->first]<<endl;
    //cout<<"\t "<<p->first<<"\t "<<keepMap.at(p->first)<<endl;//same job map.at(key) return value of that key
  }
}

//myMap.clear(); delete all pairs of the map
//map.count(key); returns 1 if key exists else returns 0 if key doesn't exist
//copyMap=mymap ; copying map
//map.at(key); returns the value of that key
