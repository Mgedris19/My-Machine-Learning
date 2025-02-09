/************************************************************************************************
* Series source file with method definitions
* @file Series.cpp
* @author Dane Artis
* @version 1.0 10/5/21
***********************************************************************************************/
#include "Series.h"

#include <cassert> // because I am paranoid
#include <cstddef> // for the NULL

#include <string>
#include <vector>
#include <map>
#include <tuple>
#include <typeinfo>
#include <iostream>

using namespace Series; // Our custom namespace scope

/************************************************
 * The datatype of 'data'
 * @returns datatype as a string
 ***********************************************/
//Function to find a data type.  Not sure if something should be passed in as a parameter.
//Returns the data dype.
std::string dtype()
{

}

/************************************************
 * The number of elements in the 'Series'
 * @returns the number of elements as an integer
 ***********************************************/
//Function to find the size of series.  Not sure if something should be passed as a parameter.
int size()
{

}

/************************************************
 * The shape of 'Series'
 * @returns a tuple of Series dimensions
 ***********************************************/
//Function to get the values for dimensions.
std::tuple<int, int, int> shape()
{

}

// ** Don't touch this yet **
/************************************************
 * The transpose of 'Series', basically a row 
 * instead of a column.
 * @returns the Transpose of 'Series'
 ***********************************************/
// Series<T> T()
// {
// }

/************************************************
 * Whether the series contains elements or not
 * @returns boolean value to indicate whether 
 * 'Series' has data or not
 ***********************************************/

bool empty()
{

}

/************************************************
 * The datatype of the data set
 * @returns the datatype as a string
 ***********************************************/
//Function to return data type of data
std::string dtypes()
{

}

// ** Wait on writing this method **
/************************************************
 * Information about the Series
 * @returns a string of Series information
 ***********************************************/
std::string flags()
{
}

/************************************************
 * The number of dimensions in the Series
 * @returns number of dimensions as an integer 
 * (1 in this case).
 ***********************************************/
int ndim()
{

}

// ** Don't touch this yet **
/************************************************
 * Access data using label(s)
 * @param labels Container of index labels, or 
 * boolean values for all indices
 * @returns a Series of targeted data
 ***********************************************/
// Series<T> loc()
// {
// }

// ** Don't touch this yet **
/************************************************
 * Access data using literal integer index location
 * @param indices array of the target index 
 * integer values
 * @returns a Series of targeted data
 ***********************************************/
// Series<T> iloc()
// {
// }
