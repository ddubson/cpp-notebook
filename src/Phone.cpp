struct Phone {
    char model;
    char owner[9] = {"John Doe"};
    int countryCode{1}; // short hand initialize to value 1
    int number[6]{3, 3, 3, 2, 2, 2}; // standard way of initializing
    bool blocked = false;

    Phone(char model) {
        this->model = model;
    };
};