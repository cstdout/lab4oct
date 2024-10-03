int main()
{
    std::cout << "Enter grade" << std::endl;
    int grade;
    std::cin >> grade;
    char mark = 'a';
    if(grade >= 0 && grade <= 60)
    {
        mark = 'F';
    }
    else if(grade > 60 && grade <= 70)
    {
        mark = 'D';
    }
    else if(grade > 70 && grade <= 80)
    {
        mark = 'C';
    }
    else if(grade > 80 && grade <= 90)
    {
        mark = 'B';
    }
    else if(grade > 90 && grade <= 100)
    {
        mark = 'A';
    }
    std:: cout << mark << std::endl;
    return 0;
}
