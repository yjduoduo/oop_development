#include <iostream>
#include <bitset>


using namespace std;

int main()
{
    char byte_value = 32;
    int ival = 8;
    byte_value = ival * byte_value;
    cout<<"byte_value: "<<static_cast<int>(byte_value)<<endl;
    cout<<"byte_value: "<<static_cast<long>(ival * byte_value)<<endl;
    cout<<"byte_value: "<<byte_value<<endl;
    cout << "Hello World!" << endl;

    int *pi = new int(1024);
    int *pia = new int[10];

    string *ps = new string;
    string *psa = new string[10];

    delete pi;
    delete ps;
    delete [] pia;
    delete [] psa;





    bitset< 32 > bitvec;
    bool is_set = bitvec.any();
    bool is_not_set = bitvec.none();
    int bits_set = bitvec.count();

    cout<<"is_set:"<< is_set <<endl;
    cout<<"is_not_set:"<< is_not_set <<endl;
    cout<<"bits_set:"<< bits_set <<endl;

    for(int index = 0; index < 32; index++)
        if( index % 2 == 0)
            bitvec[index ] = 1;

    for(int index = 0; index < 32; index++)
        if( bitvec[index ])
            cout<< index << "";
    cout<<endl;

    bitvec.reset(0);
    bitvec[0] = 0;

    if(bitvec.none() != true)
    {
        bitvec.set();
    }
    if(bitvec.any() != true)
    {

    }
    bitvec.flip( 0 );
    bitvec[0].flip();
    bitvec.flip();


    bitset< 32 > bitvec2(0xffff);
    bitset< 32 > bitvec3(012);


    double dval;
    ival;
    ival += dval;

    ival+=static_cast<int>( dval );




    return 0;
}

