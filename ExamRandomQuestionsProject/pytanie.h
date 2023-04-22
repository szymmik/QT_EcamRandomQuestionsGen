#ifndef PYTANIE_H
#define PYTANIE_H
#include<QString>
#include<QStringList>
#include<QDebug>


class pytanie
{
public:
    pytanie();



    int getPytanie(QStringList);

    QStringList pytaniaPodst={{"Wyjaśnij różnicę, miedzy obiektami umieszczanymi w pamięci stosu i w pamięci sterty."},
                              {"W jaki sposób w C++ alokujemy i zwalniamy pamięć dynamiczną."},
                              {"Na czym polega „uziemianie wskaźnika” i jaką pełni rolę w programowaniu?"},
                              {"Kiedy następuje wyciek pamięci i czym się on objawia?"},
                              {"Jakie znasz sposoby na przekazywanie tablic do funkcji?"},
                              {"Jakie są reguły przeciążania nazw funkcji?"},
                              {"Czym są domyślne wartości argumentów funkcji i jakie są reguły ich używania?"},
                              {"Jakie znasz podstawowe operacje bitowe i jak one działają?"},
                              {"Czym są maski bitowe i jakie jest ich zastosowanie w programowaniu?"},
                              {"Czym są aliasy typów i jakie znasz sposoby ich tworzenia?"},
                              {"Czym jest typ wyliczeniowy i jak się z niego korzysta?"},
                              {"Czym jest struktura i czym różni się od tablicy?"}};

    QStringList pytaniaPodst2={{"Czym jest pole klasy, a czym metoda i jaka jest różnica miedzy klasą a strukturą."},
                               {"Na czym polega zasada enkapsulacji i jak ją realizujemy pisząc klasy?"},
                               {"Czym jest konstruktor, destruktor i jakie znasz typy konstruktorów?"},
                               {"Czym są składniki statyczne klasy i czym się różnią od składników zwykłych?"},
                               {"Czym różni się zwykła zależność od asocjacji?"},
                               {"Czym różni się asocjacja od agregacji?"},
                               {"Czym różni się agregacja od kompozycji?"},
                               {"Czym różni się kompozycja od dziedziczenia?"},
                               {"Jakie są sekcje dostępu do składników klasy i jaki wpływają na dziedziczenie?"},
                               {"Czym jest klasa abstrakcyjna i jakie ma zastosowanie w programowaniu?"},
                               {"Jakie zaznasz sposoby rzutowania danych w C++ i do czego służą?"},
                               {"Czym są metody wirtualne i jakie mają zastosowanie w programowaniu obiektowym?"}};

    QStringList pytaniaPodst3={{"Jakie znasz mechanizmy kopiowania i kiedy należy je definiować ręcznie?"},
                               {"Co jest kluczowym krokiem przy definiowaniu przenoszenia i do czego służy std::move()?"},
                               {"Czym różni się kopia płytka od kopii głębokiej?"},
                               {"Jakie znasz typy referencji w C++ i do czego możemy je przypisać?"},
                               {"Co to jest szablon i do czego służy?"},
                               {"Co to jest specjalizacja szablonu i jak ją zdefiniować dla funkcji/klasy?"},
                               {"Co może być parametrem szablonu?"},
                               {"Kiedy wolno nam przeprowadzić kopię binarną, instancji/tablicy, a kiedy musimy użyć kopii element-po- elemencie, lub pole-po-polu."},
                               {"Jakie znasz typy kolekcji dostępne w bibliotekach standardowych C++?"},
                               {"Czym są inteligentne wskaźniki i jakie znasz ich rodzaje?"},
                               {"Czym są iteratory i do czego ich używamy?"},
                               {"Czym jest funktor i jakie ma zastosowanie w pracy z algorytmami standardowymi STL?"}};

    QStringList pytaniaZaaw={{"Omów jakie znasz sposoby alokacji dynamicznych tablic wielowymiarowych, przeprowadź dyskusję ich przydatności i wymień ograniczenia jakie wiążą się z ich używaniem."},
                             {"W jaki sposób możemy przeprowadzić zmianę rozmiaru tablicy alokowanej dynamicznie oraz, jak odczytać rozmiar takiej tablicy. Wyjaśnij jakie mogą być konsekwencje zapisu poza zakresem przydzielonej pamięci alokowanej dynamicznie."},
                             {"Omów jakie znasz zastosowania aliasów typów i na czym polega pośrednie upraszczanie definicji typów. Jaki są relacje miedzy aliasami typów, a automatyczną dedukcją typów. Wyjaśnij jak działają: auto i i decltype i jakie są przesłanki do ich używania."},
                             {"Omów działanie maszyny stanów i wskaż jakie są kluczowe aspekty projektowania takich maszyn w ujęciu programistycznym. Jakie znasz przykłady zastosowania maszyny stanów?"},
                             {"Wymień i krótko omów wszystkie poznane rodzaje polimorfizmu w C++. Wyjaśnij fundamentalną różnicę miedzy polimorfizmem statycznym, a dynamicznym. Co jest kluczowym aspektem zadziałania polimorfizmu obiektowego w C++?"},
                             {"Przeprowadź dyskusję użyteczności akcesorów w programowaniu obiektowym. Jakie znasz sposoby definiowania seterów i w jakich przypadkach użyjesz poszczególnych typów?"},
                             {"Wymień poznane ci zastosowania dla składników statycznych klasy w programowaniu obiektowym i przedstaw bardziej szczegółowo jedno z nich."},
                             {"Podaj przykłady realizacji zasady DRY przy tworzeniu implementacji klas i wyjaśnij jaka jest fundamentalna korzyść ze stosowania się do tej zasady w programowaniu obiektowym."},
                             {"Czym jest klasa czysto statyczna i jaka jest jej przewaga nad zwykłą przestrzenią nazw. Podaj przykład zastosowania takiej klasy w programowaniu?"},
                             {"Przeprowadź dyskusję stosowalności rożnych sposobów definiowania konwersji typów danych w programowaniu obiektowym w C++ , oraz wyjaśnij jak zachodzą standardowe konwersje miedzy typami danych związanych relacją dziedziczenia."},
                             {"Wyjaśnij czym są jawne i niejawne konwersje typów danych. Przedstaw jakie mogą być okoliczności i konsekwencje zajścia konwersji niejawnych, i jak możemy zapobiegać takim konwersjom."},
                             {"Przedstaw zasady rządzące kolejnością wywoływania konstruktorów klas, gdy te związane są z innym klasami jednocześnie relacją kompozycji i dziedziczenia. Jaką rolę pełni lista inicjalizacyjna konstruktora?"},
                             {"Omów w jaki sposób i w jakiej kolejności zachodzi inicjalizacja pól klasy i jak możemy na nią wpływać. Ponadto wyjaśnij jak możemy zainicjalizować inicjalizujemy stałe pola klasy i do czego służy specyfikator mutable."},
                             {"Wyjaśnij dokładnie jak działa relacja przyjaźni, kiedy jest uzasadnione jej użycie. Wyjaśnij z jaką fundamentalną zasadą wchodzi ona w konflikt i dlaczego? Spróbuj podać przykład, kiedy relacja przyjaźni do klasy może być uzasadniona?"},
                             {"W jaki sposób możemy dostać się do przesłoniętych przez dziedziczenie składników klasy, a jak do odziedziczonych składników prywatnych. Omów poznane sposoby dziedziczenia, oraz w jaki sposób możemy tworzyć od nich wyjątki."},
                             {"Wymień i omów poznane hierarchie dziedziczenia, oraz wyjaśnij na czym polega dziedziczenie wirtualne i w jakich typach hierarchii ma zastosowanie. Wskaż, która klasa odpowiada za wywołanie konstruktora klasy korzenia w hierarchii diamentu?"},
                             {"Omówdziałanie wzorca Copy-On-Write. Jakie typy kopii są w nim używane i w jaki sposób można wykorzystać inteligentne wskaźniki w uproszczeniu implementacji tego wzorca."},
                             {"Wyjaśnij na czym polega refaktoryzacja kodu i jaki jest jej związek z optymalizacją. Omów jaką rolę w przeprowadzaniu refaktoryzacji pełnią testy jednostkowe i podaj przykładjednego wybranego przekształcenia refaktoryzacyjnego."},
                             {"Omów działanie systemu sygnałów i slotów w Qt i podaj jakie są sposoby i reguły ich łączenia. Wyjaśnij, jaka jest podstawowa korzyść ze stosowania tego oryginalnego systemu w programowaniu aplikacji graficznych pisanych obiektowo."},
                             {"Omów tryby komunikacji z plikami w C++ i wyjaśnij w jaki sposób, możemy pozycjonować „głowicę komunikacyjną” w pliku. Porównaj przechowywanie danych w pliku na dysku z przechowywaniem ich w pamięci operacyjnej komputera i przedstaw korzyści i problemy związane z oboma sposobami."},
                             {"Omów trójwarstwowy model aplikacji i wyjaśnij jakie korzyści płynną ze stosowania modeli warstwowych w programowaniu obiektowym."}};


private:



};

#endif // PYTANIE_H
