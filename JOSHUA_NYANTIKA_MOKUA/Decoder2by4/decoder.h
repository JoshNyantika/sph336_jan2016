#ifndef DECODER_2BY4_H_
#define DECODER_2BY4_H_
#include<systemc.h>

SC_MODULE(decoder){
//input and output ports
  sc_in<bool> i0,i1;
  sc_out<bool> d0,d1,d2,d3;
//constructor: where the processes are bound to simulation kernel
SC_CTOR(decoder){
	SC_METHOD(decode);
	sensitive<<i0<<i1; //sensitive to i0 and i1 which are the inputs
	//dont_initialize();
}

~decoder(){
//delete stuff :P
}

void decode(void){
  //function's conditions
  //b=(i==0)?1:0;
  //c=(i==1)?1:0;
  if(i0==0 && i1==0)
    {
      d0=1; d1=0; d2=0; d3=0;
    }
   else if(i0==1 && i1==0)
    {
      d0=0; d1=1; d2=0; d3=0;
    }
   else if(i0==0 && i1==1)
    {
      d0=0; d1=0; d2=1; d3=0;
    }
   else if(i0==1 && i1==1)
    {
      d0=0; d1=0; d2=0; d3=1;
    }

}
};

