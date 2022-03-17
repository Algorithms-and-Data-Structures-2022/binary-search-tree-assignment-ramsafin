# C++ auto-graded assignment template

[![Build Status](../../actions/workflows/classroom.yml/badge.svg)](../../actions/workflows/classroom.yml)
![Points bar](../../blob/badges/.github/badges/points-bar.svg)

## 1. Информация о студенте

**Номер группы**: N/A

**Фамилия и Имя**: Сафин Рамиль

## 2. Описание задания

Вам необходимо реализовать функционал структуры данных [двоичное дерево поиска](https://ru.wikipedia.org/wiki/%D0%94%D0%B2%D0%BE%D0%B8%D1%87%D0%BD%D0%BE%D0%B5_%D0%B4%D0%B5%D1%80%D0%B5%D0%B2%D0%BE_%D0%BF%D0%BE%D0%B8%D1%81%D0%BA%D0%B0):

- Двоичное дерево поиска - [src/_binary_search_tree.cpp_](src/binary_search_tree.cpp)
    
Внимательно изучите документацию ко всем реализуемым методам (см. заголовочный файл [_binary_search_tree.hpp_](include/assignment/binary_search_tree.hpp)).

**Вспомогательные материалы**
- Дерево поиска, наивная реализация ([ссылка](https://neerc.ifmo.ru/wiki/index.php?title=%D0%94%D0%B5%D1%80%D0%B5%D0%B2%D0%BE_%D0%BF%D0%BE%D0%B8%D1%81%D0%BA%D0%B0,_%D0%BD%D0%B0%D0%B8%D0%B2%D0%BD%D0%B0%D1%8F_%D1%80%D0%B5%D0%B0%D0%BB%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F))


## 3. Инструкции

1. Склонируйте локальную копию репозитория к себе на компьютер.
2. Внесите информацию о себе в раздел "Информация о студенте".
3. Подробно изучите описание задания. При наличии вопросов обратитесь к <strike>врачу</strike> преподавателю.
4. Реализуйте задание в соответствии указанным требованиям.
5. Запустите локальные тесты (при их наличии).
6. Отправьте задание на auto-grading тесты и дождитесь итогового балла.
7. Повторите пункты 4-6 до получения макс. кол-ва баллов.

## 4. Ограничения

- Запрещается вносить изменения в файлы, не указанных в разделе "Описание задания".
- Запуск auto-grading тестов осуществляется:
  - автоматически при внесении изменений в [_src_](src) и/или [_include_](include)
  на ветках _**master**_ или _**main**_;
  - вручную во вкладке _Actions_.

## 5. Примечания

- Результирующие баллы высчитываются при каждом новом push'е (для последнего commit'а).
- По истечении установленных временных сроков сдачи система продолжит высчитывать итоговый балл при внесении изменений.
- Сроки сдачи устанавливаются преподавателем и указываются в индивидуальном порядке для каждой группы.
- Тесты подразделяются на **локальные** и **auto-grading**:
  - локальные тесты запускаются на компьютере через среду разработки (IDE);
  - auto-grading тесты запускаются на GitHub и вычисляют итоговый балл за задание.
- При клонировании репозитория через терминал используйте команду: 
  ```shell
    git clone --recurse-submodules <URL>
  ```

---

**Преподаватель**: Рамиль Сафин (Telegram: [_@safin_ramil_](https://t.me/safin_ramil), e-mail: _safin.ramil@it.kfu.ru_).
