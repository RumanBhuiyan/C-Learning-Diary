//Tuple is very much simmillar as pair the main difference is
//pair contains two values but tuple contains three Values like
// pair<int,int>pair1 , tuple<int,int,int>tuple1 again
//you cant access tuple.first like pair rather you'll use get<o>(tuple)
//quick learning blog: https://www.geeksforgeeks.org/tuples-in-c/

#include<iostream>
#include<tuple> // for tuple
using namespace std;
int main()
{
	// Declaring tuple
  tuple <int, int, int>myTuple;
  tuple <int, int, int>tuple1{2,3,4};
  tuple <int, int, int>tuple2{5,6,7};

	// Assigning values to tuple using make_tuple()
	myTuple = make_tuple(7, 8, 9);

	// Printing initial tuple values using get()
	cout << "The initial values of myTuple are : ";
	cout << get<0>(myTuple) << " " << get<1>(myTuple)<< " " << get<2>(myTuple) << endl;

	// Use of get() to change values of tuple
	get<0>(myTuple) = 70;//can't use myTuple.first=70 like pair
  get<1>(myTuple) = 80;//can't use myTuple.second=80 like pair
	get<2>(myTuple) = 90;//can't use myTuple.third=90 like pair

	// Printing modified tuple values
	cout << "The modified values of myTuple are : ";
	cout << get<0>(myTuple) << " " << get<1>(myTuple)<< " " << get<2>(myTuple) << endl;
  cout <<"Tuple size : "<<tuple_size<decltype(myTuple)>::value << endl;

  //before swaping :
  cout<<"\nBefore Swaping : \n";
  cout << get<0>(tuple1) << " " << get<1>(tuple1)<< " " << get<2>(tuple1) << endl;
  cout << get<0>(tuple2) << " " << get<1>(tuple2)<< " " << get<2>(tuple2) << endl;

  tuple1.swap(tuple2);

  cout<<"\nAfter Swaping : \n";
  cout << get<0>(tuple1) << " " << get<1>(tuple1)<< " " << get<2>(tuple1) << endl;
  cout << get<0>(tuple2) << " " << get<1>(tuple2)<< " " << get<2>(tuple2) << endl;

  //tie() to unpack the values of a tuple and assigning them to certain variables
  //tie() is simmillar as destructuring of javascript
  int a=11;
  int b=12;
  int c=13;
	cout <<"\nBefore tie a : "<<a<<" b : "<<b<< " c: " <<c<< endl;

  tie(a,b,c)=myTuple;

  cout <<"\nAfter tie a : "<<a<<" b : "<<b<< " c: " <<c<< endl;

  //adding two tuple using tuple_cat()
  //auto newTuple=tuple_cat(tuple1,tuple2);//adding tuple2 with tuple1 new tuple: 5 6 7 2 3 4
  auto newTuple=tuple_cat(tuple2,tuple1); //adding tuple1 with tuple2 new tuple: 5 6 7 2 3 4
  cout <<"\nNew Tuple: "<<get<0>(newTuple) << " " << get<1>(newTuple)<< " " << get<2>(newTuple);
  cout <<" "<<get<3>(newTuple) << " " << get<4>(newTuple)<< " " << get<5>(newTuple) << endl;

	return 0;
}

//tuple size :  tuple_size<decltype(myTuple)>::value;
//swaping two tupel : tup1.swap(tup2);
