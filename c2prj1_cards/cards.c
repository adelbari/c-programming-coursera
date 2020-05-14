#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
  assert((2<=c.value<=VALUE_ACE)&&(SPADES<=c.suit<=CLUBS));

}

const char * ranking_to_string(hand_ranking_t r) {
  switch(r){
  case  STRAIGHT FLUSH: return  "STRAIGHT FLUSH";
  case  FOUR_OF_A_KIND: return  "FOUR_OF_A_KIND";
  case  FULL HOUSE: return  "FULL HOUSE";
  case  FLUSH: return  "FLUSH";
  case  STRAIGHT: return  "STRAIGHT";
  case  THREE_OF_A_KIND: return  "THREE_OF_A_KIND";
  case  TWO_PAIR: return  "TWO_PAIR";
  case  PAIR: return  "PAIR";
  default:  return"NOTHING";
  }
}

char value_letter(card_t c) {
  switch(c.value){
  case  2: return  '0' + 2;
  case  3: return  '0' + 3;
  case  4: return  '0' + 4;
  case  5: return  '0' + 5;
  case  6: return  '0' + 6;
  case  7: return  '0' + 7;
  case  8: return  '0' + 8;
  case  9: return  '0' + 9;
  case  10: return  '0';
  case  VALUE_JACK: return 'J';
  case  VALUE_QUEEN: return 'Q';
  case  VALUE_KING: return  'K';
  case  VALUE_ACE: return  'A';
  }
}


char suit_letter(card_t c) {
  switch(c.suite){
  case  SPADES: return  's';
  case  HEARTS: return  'h';
  case  DIAMONDS: return  'd';
  case  CLUBS: return  'c';
  }
  
}

void print_card(card_t c) {
  printf("%s %s", value_letter(c), suit_letter(c));
}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  switch(value_let){
  case  '2':temp.value=2;
  case  '3':temp.value=3;
  case  '4':temp.value=4;
  case  '5':temp.value=5;
  case  '6':temp.value=6;
  case  '7':temp.value=7;
  case  '8':temp.value=8;
  case  '9':temp.value=9;
  case  '0':temp.value=10;
  case  'J':temp.value=VALUE_JACK;
  case  'Q':temp.value=VALUE_QUEEN;
  case  'K':temp.value=VALUE_KING;
  case  'A':temp.value=VALUE_ACE;
  }
  switch(suit_let){
  case  's':temp.suite=SPADES;
  case  'h':temp.suite=HEARTS;
  case  'd':temp.suite=DIAMONDS;
  case  'c':temp.suite=CLUBS;
  }
  assert_card_valid(temp);
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  return temp;
}
