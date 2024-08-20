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
  virtual void Update(const std::string& message_from_object) = 0;
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
  std::string message;

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
      (*iterator)->Update(message);
      ++iterator;
    }
  }

  /**
   * @brief Метод создающий сообщение и рассылающий его наблюдателям
   */
  void CreateMessage(std::string message = "Empty") {
    this->message = message;
    Notify();
  }
};

/**
 * @brief Абстрактный класс наблюдателя
 */
class Observer : public IObserver {
 private:
  std::string message_from_subject;
  Subject& subject;
  /* общее число наблюдателей */
  static int static_number;
  /* номер конкретного наблюдателя */
  int number;

 public:
  Observer(Subject& subject) : subject(subject) {
    this->subject.Attach(this);
    ++Observer::static_number;
    this->number = Observer::static_number;
  }

  virtual ~Observer() {}

  /**
   * @brief Метод, который использует субъект для уведомления наблюдателя
   */
  void Update(const std::string& new_message_from_subject) override {
    message_from_subject = new_message_from_subject;
  }

  /**
   * @brief Метод открепляющий наблядателя от субъекта наблюдения
   */
  void RemoveMeFromTheList() { subject.Detach(this); }
};

int Observer::static_number = 0;

}  // namespace s21

#endif  // S21_OBSERVER_H

// void ClientCode() {
//   Subject *subject = new Subject;
//   Observer *observer1 = new Observer(*subject);
//   Observer *observer2 = new Observer(*subject);
//   Observer *observer3 = new Observer(*subject);
//   Observer *observer4;
//   Observer *observer5;

//   subject->CreateMessage("Hello World! :D");
//   observer3->RemoveMeFromTheList();

//   subject->CreateMessage("The weather is hot today! :p");
//   observer4 = new Observer(*subject);

//   observer2->RemoveMeFromTheList();
//   observer5 = new Observer(*subject);

//   subject->CreateMessage("My new car is great! ;)");
//   observer5->RemoveMeFromTheList();

//   observer4->RemoveMeFromTheList();
//   observer1->RemoveMeFromTheList();

//   delete observer5;
//   delete observer4;
//   delete observer3;
//   delete observer2;
//   delete observer1;
//   delete subject;
// }

// int main() {
//   ClientCode();
//   return 0;
// }