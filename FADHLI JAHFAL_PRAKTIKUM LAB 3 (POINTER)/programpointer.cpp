#include <iostream>

void add_score(int &score) {
    score = score + 5;
    std::cout << "score diubah ke " << score << std::endl;
}

int main() {

    int score = 0;
    std::cout << "score sebelum diubah: " << score << std::endl;
    add_score(score);
    add_score(score);
    add_score(score);
    add_score(score);
    add_score(score);
    add_score(score);
    std::cout << "score setelah diubah: " << score << std::endl;

    return 0;
}
