#ifndef S21_OBSERVER_H
#define S21_OBSERVER_H

#include <iostream>
#include <list>
#include <string>

namespace s21 {

/**
 * @brief Абстрактный класс наблюдателя
 */
class IObserver {
 public:
  virtual ~IObserver() {}
  virtual void Update() = 0;
};

/**
 * @brief Абстрактный класс субъекта для наблюдателя
 */
class ISubject {
 public:
  virtual ~ISubject() {}
  virtual void Attach(IObserver* observer) = 0;
  virtual void Detach(IObserver* observer) = 0;
  virtual void Notify() = 0;
};

/**
 * @brief Класс субъекта для наблюдателя
 */
class Subject : public ISubject {
 private:
  std::list<IObserver*> list_observer;

 public:
  /**
   * @brief Метод добавляющий наблюдателя для объекта
   * @param observer адрес наблюдателя
   */
  void Attach(IObserver* observer) override {
    list_observer.push_back(observer);
  }

  /**
   * @brief Метод удаляющий наблюдателя у объекта
   * @param observer адрес наблюдателя
   */
  void Detach(IObserver* observer) override { list_observer.remove(observer); }

  /**
   * @brief Метод возвращающий число наблюдателей у объекта
   * @return число наблюдателей
   */
  size_t HowManyObserver() {
    size_t res = list_observer.size();
    return res;
  }

  /**
   * @brief Метод оповещающий наблюдателей об изменении объкта
   */
  void Notify() override {
    std::list<IObserver*>::iterator iterator = list_observer.begin();

    while (iterator != list_observer.end()) {
      (*iterator)->Update();
      ++iterator;
    }
  }
};

// /**
//  * @brief Абстрактный класс наблюдателя
//  */
// class Observer : public IObserver {
//  private:
//   Subject& subject;
//   /* общее число наблюдателей */
//   static int static_number;
//   /* номер конкретного наблюдателя */
//   int number;

//  public:
//   Observer(Subject& subject) : subject(subject) {
//     this->subject.Attach(this);
//     ++Observer::static_number;
//     this->number = Observer::static_number;
//   }

//   virtual ~Observer() {}

//   /**
//    * @brief Метод, который использует субъект для уведомления наблюдателя
//    */
//   void Update() override {
//     // вызов методов перерисовки
//   }

//   /**
//    * @brief Метод открепляющий наблядателя от субъекта наблюдения
//    */
//   void RemoveMeFromTheList() { subject.Detach(this); }
// };

}  // namespace s21

#endif  // S21_OBSERVER_H
