#include <cstdio>
#include <iostream>

const static int force_multiplier = 3; // "internal linkage"

extern int blah; // "external linkage" - accessible to other translation units

int calculate_hit_damage(int base_hit) {
    // force_multiplier is a static object with a static storage duration
    // base_hit is an automatic object with an automatic storage duration
    return base_hit * force_multiplier; 
}

void storage_durations_example() {
    int base_hit = 5;
    int full_damage = calculate_hit_damage(base_hit);
    
    std::cout << "\n==== STORAGE DURATIONS EXAMPLE ====\n";
    std::cout << "(static object)    Force multiplier: " << force_multiplier << "\n";
    std::cout << "(automatic object) Damage taken: " << full_damage << "\n";
}