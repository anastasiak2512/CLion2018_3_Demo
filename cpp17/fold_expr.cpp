// C++17 fold expressions are now parsed correctly

int check_folding() {
    auto and_all = [](auto ... v) { return (v && ...); };
    if (and_all(true, false, true)) {
        return 1;
    }

    return 0;
}
