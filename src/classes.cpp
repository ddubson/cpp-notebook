class Guitar {
public:
    int get_number_of_strings() const {
        return this->stringNumber;
    }
private:
    int stringNumber = 6;
};

void classes() {
    Guitar guitar{};
    printf("Number of strings: %d\n", guitar.get_number_of_strings());
}