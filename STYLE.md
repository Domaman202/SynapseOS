# Стиль кода, документации и коммитов

## Содержание

1. Код
2. Документация
3. Коммиты

## Код

### Циклы

i, j, k — стандартные названия для итераторов цикла

Тип данных используемых в цикле for должен быть указан в самом цикле.

```C
// Правильный цикл

uint8_t my_array[256];  // Массив для тестирования циклов

// Заполняем массив значениями
for (uint8_t i = 0; i < 256; ++i) {
    my_array[i] = i;    // Записываем в массив по индексу i данные
}
```

```C
// Неправильный цикл

int my_array[256];  // Тип данных не соответствует

size_t i;           /* 
                        1. Неявный размер
                        2. Объявление вне цикла
                    */

for (; i < 1000; i = i + 1) { // Выход за пределы массива, убогая реализация инкремента
    my_array[i] = i * 40; // Выход за пределы типа данных
}
```