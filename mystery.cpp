#include <iostream>
#include <vector>
using namespace std;

//To print each index of a VECTOR
void print(auto A)
{
   for (auto a : A)
        cout <<a<<" ";

   cout<<endl;
}


//Bubble Sort
void mystery1(auto& Data)
{
  cout<<endl<<"Mystery 1"<<endl<<"---------------------"<<endl;

  for ( unsigned int i = 0 ; i < Data.size( ) ; i++)
  {
    for ( unsigned int j = 0 ; j < i ; j++)
	if ( Data[ i ] < Data[ j ] )
	    swap( Data[ i ] , Data[ j ] );

    print(Data);
  }//end outer for (this brace is needed to include the print statement)

}

//Selection Sort
void mystery2(auto& Data)
{
  unsigned int minIndex = 0, tmp =0;
  cout<<endl<<"Mystery 2"<<endl<<"---------------------"<<endl;

  for (unsigned int i = 0; i < Data.size() - 1; i++){
    minIndex = i;

  //find smallest in unsorted part
  for (unsigned int j = i + 1; j < Data.size(); j++){
    if (Data[j] < Data[minIndex]){
      minIndex = j;
    }
  }

  if (minIndex != i)
  {
    tmp = Data[i];
    Data[i] = Data[minIndex];
    Data[minIndex] = tmp;
    print(Data);
  } //end if

  } //end outer loop
} //end function



//Insertion Sort
void mystery3(auto& Data)
{
 unsigned int nextIndex, moveitem, insertVal;
 cout<<endl<<"Mystery 3"<<endl<<"---------------------"<<endl;

//loop through elements of vector
for (nextIndex = 1; nextIndex < Data.size(); nextIndex ++)
{

insertVal = Data[nextIndex]; //store value of current element
 moveitem = nextIndex; //initialize location to place element

 //search for location to place current element
while (moveitem > 0 && Data[moveitem - 1] > insertVal)
{
 //shift elements one slot to right
Data[moveitem ] = Data[moveitem - 1];
 moveitem--;

} //end while

 Data[moveitem] = insertVal;
 print(Data);
 } //end for
}

//... Other mysteries...

int main()
{

  vector<int> Data = {36, 18, 22, 30, 29, 25, 12};

  vector<int> D1 = Data;
  vector<int> D2 = Data;
  vector<int> D3 = Data;

  mystery1(D1);
  mystery2(D2);
  mystery3(D3);

}
