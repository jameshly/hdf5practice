#ifdef OLD_HEADER_FILENAME
#include <iostream.h>
#else
#include <iostream>
#endif
using std::cout;
using std::endl;
#include <string>
#include "H5Cpp.h"
using namespace H5;
const H5std_string FILE_NAME( "assc.h5" );
const H5std_string DATASET_NAME( "Associations" );
int main(void){
    H5File* file = new H5File( FILE_NAME, H5F_ACC_TRUNC );
    int fillvalue = 0;
    DSetCreatPropList plist;    
    plist.setFillValue(PredType::NATIVE_INT, &fillvalue);
    hsize_t fdim[] = {5, 200}; // dim sizes of ds (on disk)
    DataSpace fspace( FSPACE_RANK, fdim );
}