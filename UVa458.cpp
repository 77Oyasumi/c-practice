#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  const int K = (int)('*'-'1');
  string s;
  while( getline( cin, s ) ){
    for( int i = 0 ; i < s.length() ; i++ )
      printf( "%c", s[i]+K );
    printf( "\n" );
  }
  return 0;
}