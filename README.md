# Содержимое

- Воркшоп по C. Запустите команду ```gcc solutions.c test_lab1.c -o lab1_tests; ./lab1_tests```
- Воркшоп по git. После порешайте задачки на https://learngitbranching.js.org/
- Групповое задание на знание C и Git. 

## Групповое задание

| Ветка | Задача | Функция | Тесты |
| --- | --- | --- | --- |
| `task1` | Пирожки в столовой | `pies_kopecks` | `task1/test_task1.c` |
| `task2` | Как поделить яблоки | `apples` | `task2/test_task2.c` |
| `task3` | Расстояние в километрах | `meters_to_km` | `task3_tests.c` |

Все решения лежат в `solutions.c`. Запуск тестов:

```shell
gcc solutions.c task1/test_task1.c -o test1 && ./test1
gcc solutions.c task2/test_task2.c -o test2 && ./test2
gcc solutions.c task3_tests.c -o test3 && ./test3
```