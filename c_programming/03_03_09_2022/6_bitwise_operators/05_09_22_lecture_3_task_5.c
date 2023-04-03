/*
5) Създайте функция reverseBit. Тя получава следните
параметри - число и индекс. Като резултат функцията
обръща бита на съответната позиция в числото
(съответно от 0 на 1 или от 1 на 0).
*/


int reverseBit(int number, int index) //function that makes 0 to 1 or 1 to 0 at given position
{
    if (number & (1 << index))
    {
        return number & ~(1 << index);
    }
    else
    {
        return number | (1 << index);
    }
}
