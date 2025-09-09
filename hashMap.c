/*                  
                        Implementação HashMap Na Linguagem C
                      Gabriel Carvalho De Souza 19 / 01 / 2025
*/

// bibliotecas auxiliares
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// fim

// auxiliares
#define null NULL
#define int_opc 0
// fim

// structs 
typedef
struct int_hash_map
{
  char * key;
  int value;
  struct int_hash_map * link;
} map;

typedef
map *
ref_map;

typedef
struct control_int_hash_map
{
  ref_map low;
  ref_map high;
} control_map;

typedef
control_map *
ref_control;
// fim

// métodos e funções
int readInt ( char * text )
{
  int x = 0;
  printf ( "%s\n", text );
  scanf ( "%d", & x );
  return x;
}

ref_map make_cell ( char * key, int value )
{
  ref_map cell = ( ref_map ) malloc ( 1 * sizeof ( map ) );
  if ( ! cell ) return null;

  cell -> key = key;
  cell -> value = value;
  cell -> link = null;

  return cell;
}

ref_control make_map_control ( )
{
    ref_control control = ( ref_control ) malloc ( 1 * sizeof ( control_map ) );
    if ( ! control ) return null;
    
    control -> low = null;
    control -> high = null;
    return control;
}

void print_cell ( ref_map cell )
{
  printf ( "\nInit Cell\n\n" );
  printf ( "Key -> %s\n", cell -> key );
  printf ( "Value -> %d\n", cell -> value );
  printf ( "Address -> %p\n\n", cell -> link );
  printf ( "End Of Cell\n\n" );
}

void connect_cell ( ref_map current, ref_map predecessor, ref_control control )
{
  if ( predecessor )
  {
    predecessor -> link = current;
  } else if ( control && control -> low == null )
    {
      control -> low = current;
    }

    if ( control )
    {
      control -> high = current;
    }
}

void tests ( )
{
  ref_control control = make_map_control ( );

  ref_map map_cel_one = make_cell ( "Key One", int_opc );
  print_cell ( map_cel_one );

  ref_map map_cel_two = make_cell ( "Key Two", int_opc );
  connect_cell ( map_cel_two, map_cel_one, control );
  print_cell ( map_cel_two );

  printf ( "\nUpdate Cell One\n" );
  print_cell ( map_cel_one );

  printf ( "\nPrint Control -> Low : %p\n", control -> low );
  printf ( "Print Control -> High : %p\n\n", control -> high );
} 
// fim

// função principal
int main ( )
{
  tests ( );
  return 0;
}
// fim