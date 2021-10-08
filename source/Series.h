/************************************************************************************************
* Series header file with declarations and stubs
* @file Series.h
* @author Dane Artis @Dartis4
* @author Matthew Gedris @mgedris19
* @version 1.0 10/5/21
***********************************************************************************************/

#ifndef SERIES_H
#define SERIES_H

namespace Series
{
    /************************************************************************************************
    * A class that holds data organized in a column-like format. Series is a template class where 
    * data can hold any numerical or categorical (string-like) data values. Index and data are 
    * essentially pairwise arrays.
    * 
    * @param name Series (column) header
    * @param index A vector that acts as a non-fixed length array that functions as the row headers 
    * (i.e. the column indeces).
    * @param data The data values that are associated with each element of 'index' by their index. 
    * The first index of data will be assigned to name if name is unset.
    * @param datatype The datatype of 'data', must be homogenous within the Series.
    * 
    * @see std::vector
    ***********************************************************************************************/
    template <class T>
    class Series
    {
    public:
        // Constructors

        // default
        Series() : name("Undefined"), datatype("Undefined"); // Initialize member variables to default values

        // non-default
        Series(const T &values);                                // data as an array
        Series(const int &index, const T &data);                // data and index as arrays (int, T)
        Series(const std::string &index, const T &data);        // data and index as arrays (string, T)
        Series(const std::map<int, T> &map);                    // data as a map of index:value pairs (int, T)
        Series(const std::map<std::string, T> &map);            // data as a map of index:value pairs (string, T)
        Series(const T &scalarValue, const int &index);         // data as a scalar value and indeces provided (int)
        Series(const T &scalarValue, const std::string &index); // data as a scalar value and indeces provided (string)

        // copy
        Series(Series &rhs);

        // Destructor
        ~Series();

        // Methods
        std::string dtype(){
            std::cout << typeid(this).name() << std::endl;
            if (typeid(this)==typeid(int)){
                std::cout<<this<<" is an int datatype";
            }
            else if (typeid(this)==typeid(float))
            {
                std::cout<<this<<" is a float datatype";
            }
            else if (typeid(this)==typeid(bool))
            {
                std::cout<<this<<" is a bool datatype";
            }
            else if (typeid(this)==typeid(char))
            {
                std::cout<<this<<" is a character datatype";
            } 
            else{
                std::cout<<this<<" is a string datatype";
            }
        }
        int size(){
            return this.size();
        }
        std::tuple<int, int, int> shape(){
            // @TODO get the number of values for each 
            //dimension (the first dimension in this case)
            int x = this.size();
            int x = 3;
            int y = 1;
            int z = 0;
            return std::tuple(x, y, z);
        }
        Series<T> T(){
            //DON'T TOUCH THIS JUST YET.
        }

        bool empty(){
            if (this.size==0){
                return true;
            }
            else{
                return false;
            }
        }
        std::string dtypes(){
            return typeid(this).name();
        }
        std::string flags(){
            //DON'T TOUCH THIS JUST YET.
        }
        int ndim(){
            return 1;
        }
        Series<T> loc(){
            //DON'T TOUCH THIS JUST YET.
        }
        Series<T> iloc(){
            //DON'T TOUCH THIS JUST YET.
        }

    protected:
    private:
        // Member variables
        std::string name{
            return this.name;
        }
        std::vector<std::string> index;
        std::vector<T> data;
        std::string datatype{
            return this.datatype;
        }
    };
}

#endif // SERIES_H