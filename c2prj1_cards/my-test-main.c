#include "cards.h"

int main(void) {
  hand_ranking_t r1=STRAIGHT_FLUSH;
  hand_ranking_t r2=FOUR_OF_A_KIND;
  hand_ranking_t r3=FULL_HOUSE;
  hand_ranking_t r4=FLUSH;
  hand_ranking_t r5=STRAIGHT;
  hand_ranking_t r6=THREE_OF_A_KIND;
  hand_ranking_t r7=TWO_PAIR;
  hand_ranking_t r8=PAIR;
  hand_ranking_t r9=NOTHING;
  ranking_to_string(r1);
  ranking_to_string(r2);
  ranking_to_string(r3);
  ranking_to_string(r4);
  ranking_to_string(r5);
  ranking_to_string(r6);
  ranking_to_string(r7);
  ranking_to_string(r8);
  ranking_to_string(r9);

  card_t c1,c2,c3,c4;
  c1.value=7;
  c1.suit=SPADES;
  c2.value=9;
  c2.suit=CLUBS;
  c3.value=3;
  c3.suit=HEARTS;
  c4.value=4;
  c4.suit=SPADES;

  assert_card_valid(c1);
  assert_card_valid(c2);
  assert_card_valid(c3);
  assert_card_valid(c4);

  print_card(c1);
  print_card(c2);
  print_card(c3);
  print_card(c4);

  
}
