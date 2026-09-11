#include <cmath>
#include <climits>
#include <iostream>
int main() {
  int n;
  std::cin >> n;
  int elevator_id[n];
  int elevator_from[n];
  int elevator_to[n];
  for (int i = 0; i < n; i++) {
    std::cin >> elevator_id[i]; 
    std::cin >> elevator_from[i] >> elevator_to[i];
  }
  int m;
  std::cin >> m;
  while (m--) {
    int person_from, person_to;
    std::cin >> person_from >> person_to;
    bool person_direction = (person_from - person_to > 0);  // false means up
    int best_elevator_id = INT_MAX;
    int best_cost = INT_MAX;
    for (int i = 0; i < n; i++) {
      int ele_from = elevator_from[i];
      int ele_to = elevator_to[i];
      int cost = 0;
      if (ele_from == ele_to) {
        cost = std::abs(person_from - ele_to) + std::abs(person_from - person_to);
      } else {
        bool elevator_direction = (ele_from - ele_to > 0);  // false means up
        if (elevator_direction == person_direction) {
          if (elevator_direction) {
            if (person_from <= ele_from && person_to >= ele_to)
              cost = 0;
            else if (person_from <= ele_from)
              cost = ele_to - person_to;
            else
              cost = std::abs(ele_to - person_from) + person_from - person_to;
          } else {
            if (person_from >= ele_from && person_to <= ele_to)
              cost = 0;
            else if (person_from >= ele_from)
              cost = person_to - ele_to;
            else
              cost = std::abs(person_from - ele_to) + person_to - person_from;
          }
        } else {
          cost = std::abs(ele_to - person_from) + std::abs(person_from - person_to);
        }
      }
      if (cost < best_cost) {
        best_cost = cost;
        best_elevator_id = elevator_id[i];
      } else if (cost == best_cost && elevator_id[i] < best_elevator_id) {
        best_elevator_id = elevator_id[i];
      }
    }
    std::cout << ">> " << best_elevator_id << '\n';
  }
}