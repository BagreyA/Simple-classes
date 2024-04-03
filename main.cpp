#include <iostream>
#include <string>
using namespace std;

class Com_Device {
private:
  string manufacturer;
  int processing;

public:
  Com_Device(string manufacturer, int processing) {
    this-> manufacturer = manufacturer;//оператор доступа к членам класса. спользуется для обращения 
к членам класса через указатель на объект
    this-> processing = processing;
  }

  void set_Man(string manufacturer) {
    this-> manufacturer = manufacturer;
  }

  void set_Proc(int processing) {
    this-> processing = processing;
  }

  string get_Man() {
    return manufacturer;
  }

  int get_Proc() {
    return processing;
  }

  void display() {
    cout << "Производитель: " << manufacturer << endl;
    cout << "Задержка обработки: " << processing << " ms" << endl;
  }
};

int main() {
  Com_Device device("Samsung", 10);
  cout << "Текущие значения:" << endl;
  device.display();

  string old_Man = device.get_Man();
  int old_Proc = device.get_Proc();

  cout << endl << "Введите новое название производителя: ";
  string new_Man;
  cin >> new_Man;
  device.set_Man(new_Man);

  cout << "Введите новую задержку обработки(ms): ";
  int new_Proc;
  cin >> new_Proc;
  device.set_Proc(new_Proc);

  cout << endl << "Старые значения:" << endl;
  cout << "Производитель: " << old_Man << endl;
  cout << "Задержка обработки: " << old_Proc << " ms" << endl;

  cout << endl << "Обновленные значения:" << endl;
  device.display();

  return 0;
}
