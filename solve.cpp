/*
 *Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
 *For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
 *Developed by emasoftware (emasoftware.altervista.org)
*/
#include <iostream>

using namespace std;

bool ArrayValue(int array[], int k, int size)
{
    int sum=0,find;
    for ( int i=0 ; i< size ; i++)
    {
        for ( int c =0 ; c< i; c++)
        {
          
                sum = array[i]+array[c];
                if(sum == k ) 
                {
                    cout << " Find at ["<<i<<"] +  array ["<<c<<"] = " << k << endl ; 
                    find++;
                }
            
        }
    }
    if(find!=0)
    {
        return true;
    }else
    {
        return false;
    }
}
int main()
{
    
    int nElements,k;
    cout << " How many elements you'd like to insert in the array " << endl ;
    cin >> nElements;
    int array[nElements];
    for ( int i=0 ; i< nElements; i++)
    {
        cout << " Insert the  "  << i+1 << " Elements of the array " << endl ;
        cin>>array[i];
    }
    cout << " Insert the value of K  " << endl ;
    cin>>k;
    bool value=ArrayValue(array,k, nElements);
    
}

