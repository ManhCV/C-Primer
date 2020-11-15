int main()
{
    int i = 50;
    int sum = 0;
    while (i <= 100)
    {
        sum += i;
        ++i;
    }
    return sum; //why return value can not be the real number? e.g. 3825, can not do return 3825 either.
}
