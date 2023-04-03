/*
4) Създайте функция setBit. Тя получава следните
параметри - число и индекс. Функцията трябва да "вдига"
бита на съответния индекс в числото (под "вдига" ще
разбираме да му присвои стойност 1).
*/
int setBit(int number, int index) //function that sets bit at given index
{
    return number | (1 << index);
}