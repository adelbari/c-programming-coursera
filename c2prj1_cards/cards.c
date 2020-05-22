#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
  assert((c.value <= VALUE_ACE)&&(c.value >=2));
  assert((c.suit <= CLUBS)&&(c.suit >=SPADES));
}

const char * ranking_to_string(hand_ranking_t r) {
  switch(r){
  case  STRAIGHT_FLUSH: return  "STRAIGHT_FLUSH"; break;
  case  FOUR_OF_A_KIND: return  "FOUR_OF_A_KIND"; break;
  case  FULL_HOUSE: return  "FULL_HOUSE"; break;
  case  FLUSH: return  "FLUSH"; break;
  case  STRAIGHT: return  "STRAIGHT"; break;
  case  THREE_OF_A_KIND: return  "THREE_OF_A_KIND"; break;
  case  TWO_PAIR: return  "TWO_PAIR"; break;
  case  PAIR: return  "PAIR"; break;
  default:  return"NOTHING"; break;
  }
}

char value_letter(card_t c) {
  char x ='0';
  if(c.value < 10) x+= c.value;
  else if(c.value == 11) x = 'J';
  else if(c.value == 12) x = 'Q';
  else if(c.value == 13) x = 'K';
  else if(c.value == 14) x = 'A';
  return x;
}


char suit_letter(card_t c) {
  switch (c.suit){
  case  SPADES: return  's'; break;
  case  HEARTS: return  'h'; break;
  case  DIAMONDS: return  'd'; break;
  case  CLUBS: return  'c'; break;
  default: return'i';break;
  }
  
}

void print_card(card_t c) {
  printf("%c %c", value_letter(c), suit_letter(c));
}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  switch(value_let){
  case  '2':temp.value=2; break;
  case  '3':temp.value=3; break;
  case  '4':temp.value=4; break;
  case  '5':temp.value=5; break;
  case  '6':temp.value=6; break;
  case  '7':temp.value=7; break;
  case  '8':temp.value=8; break;
  case  '9':temp.value=9; break;
  case  '0':temp.value=10; break;
  case  'J':temp.value=VALUE_JACK; break;
  case  'Q':temp.value=VALUE_QUEEN; break;
  case  'K':temp.value=VALUE_KING; break;
  case  'A':temp.value=VALUE_ACE; break;
  }
  switch(suit_let){
  case  's':temp.suit=SPADES; break;
  case  'h':temp.suit=HEARTS; break;
  case  'd':temp.suit=DIAMONDS; break;
  case  'c':temp.suit=CLUBS; break;
  }
  assert_card_valid(temp);
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  assert(0<=c&&c<52);
  int value_temp,suite_temp;
  suite_temp=(c/13);
  value_temp=(c%13);
  switch(suite_temp){
  case  0:temp.suit=SPADES; break;
  case  1:temp.suit=HEARTS; break;
  case  2:temp.suit=DIAMONDS; break;
  case  3:temp.suit=CLUBS; break;
  }
  temp.value=value_temp+2;
  /*
  switch(value_temp){
  case  0,1,2,3,4,5,6,7,8,9:temp.value=value_temp+1;
  case  10:temp.value=VALUE_JACK;
  case  11:temp.value=VALUE_QUEEN;
  case  12:temp.value=VALUE_KING;
  case  13:temp.value=VALUE_ACE;
  }*/
  return temp;
}
