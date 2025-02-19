#include<iostream>
#include <vector>

using namespace std;
class Vehicles
{
    protected:
    string _licencePlate;
    string _manufacturer;
    float _sizeLimit;
    string _type;
    static int v_count;
    
public:
    Vehicles(){}
    Vehicles(string licencePlate, string manufacturer, float sizeLimit):_manufacturer(manufacturer),_licencePlate(licencePlate),_sizeLimit(sizeLimit)
    {
        v_count++;
    }
    string getLicencePlate()
    {
        return _licencePlate;
    }
    string getManufacturer()
    {
        return _manufacturer;
    }
    float getSizeLimit()
    {
        return _sizeLimit;
    }
    void setLicencePlate(string licencePlate)
    {
        _licencePlate=licencePlate;
    }
    void setManufacturer(string manufacturer)
    {
        _manufacturer=manufacturer;
    }
    void setSizeLimit(float sizeLimit)
    {
        _sizeLimit=sizeLimit;
    }
    string getType()
    {
        return _type;
    }
    void setType(string type)
    {
        _type=type;
    }
    virtual void performanceMaintanance()=0;
    static void sort_vehicles_by_capacity(Vehicles** vehicles,int n);
    static int getVehicleCount()
    {
        return v_count;
    }
    virtual ~Vehicles()=default;
};
int Vehicles::v_count=0;

class ElectricVehicle:public virtual Vehicles
{
    protected:
    float _bataryCapacity;
    float _chargingTime;
    double _electricityConsumptionRate;
public:
    ElectricVehicle(std::string licencePlate, string manufacturer, float sizeLimit,float bataryCapacity, float chargingTime):Vehicles(licencePlate,manufacturer,sizeLimit),_bataryCapacity(bataryCapacity),_chargingTime(chargingTime)
    {
        setType("Electric Vehicle");
    }
    void performanceMaintanance() override
    {
        cout<<"Electric Vehicle - maintanance"<<endl;
    }

};

class GasolineVehicle:public virtual Vehicles
{
    float _fuelCapacity;
    string _fuelType;
    float _fuelConsumptionRate;
public:
    GasolineVehicle(string licencePlate, string manufacturer, float sizeLimit,float fuelCapacity, string fuelType):Vehicles(licencePlate,manufacturer,sizeLimit),_fuelCapacity(fuelCapacity),_fuelType(fuelType)
    {
        setType("Gasoline vehicle");
    }
        void performanceMaintanance() override
    {
        cout<<"Gasoline Vehicle - maintanance"<<endl;
    }

};

class Car:public GasolineVehicle
{
    int _pasangerNum;
public:
    Car(string licencePlate, string manufacturer, float sizeLimit, float fuelCapacity, string fuelType,int passengerNum):GasolineVehicle(licencePlate,manufacturer,sizeLimit,fuelCapacity,fuelType),_pasangerNum(passengerNum){}
    int getPasangerNum()
    {
        return _pasangerNum;
    }
        void performanceMaintanance() override
    {
        cout<<"Car - maintanance"<<endl;
    }
};
class Motorcycle:public GasolineVehicle
{
public:
    Motorcycle(string licencePlate, string manufacturer, float sizeLimit,float fuelCapacity, string fuelType):GasolineVehicle(licencePlate, manufacturer, sizeLimit,fuelCapacity, fuelType)
    {
        _type="motorcycle";
    }
    void performanceMaintanance() override
    {
        cout<<"Motorcycle - maintanance"<<endl;
    }
};


class Truck:public GasolineVehicle
{
    float _cargoCapacity;
public:
    Truck(string licencePlate, string manufacturer, float sizeLimit, float fuelCapacity, string fuelType,float cargocap):GasolineVehicle(licencePlate,manufacturer,sizeLimit,fuelCapacity,fuelType),_cargoCapacity(cargocap)
    {
        _type="Truck";

    }
    void performanceMaintanance() override
    {
        cout<<"Truck - maintanance"<<endl;
    }
    
    
};
class Employee
{
protected: 
    string _name;
    string _id;
    string _employeeType;
public:
    Employee(string name, string id):_name(name),_id(id){}
    string getName()
    {
        return _name;
    }
    string getEmployeeType()
    {
        return _employeeType;
    }
};


class Manager:public Employee
{
    public:
    Manager(string name, string id):Employee(name,id)
    {
        _employeeType="manager";
    }
};

class Driver:public Employee
{
public:
    Driver(string name, string id):Employee(name,id)
    {
        _employeeType="driver";
    }
};
class HybridVehicle:public GasolineVehicle,public  ElectricVehicle
{
    float energyGenerationEfficiency;
    float energy;
    
public:
    HybridVehicle(string licencePlate, string manufacturer, float sizeLimit,float fuelCapacity, string fuelType,float bataryCap,float chargingTime):Vehicles(licencePlate,manufacturer,sizeLimit),GasolineVehicle(licencePlate,manufacturer,sizeLimit,fuelCapacity,fuelType),ElectricVehicle(licencePlate,manufacturer,sizeLimit,bataryCap,chargingTime)
    {
        _type="Hybrid Vehicle";
    }

    void performanceMaintanance() override
    {
        cout<<"Hybrid Vehicle - maintanance"<<endl;
    }
    
};
class Branch
{
private:
    vector<Employee*> employees;
    vector<Vehicles*> vehicles;
    int motorcycleCounter;
    int carCounter;
    int truckCounter;
    int electricVehicleCounter;
    int managerCounter;
    int driverCounter;

public:
    Branch() : motorcycleCounter(0), carCounter(0), truckCounter(0), managerCounter(0), driverCounter(0), electricVehicleCounter(0)
    {
    }
    void printNames()
    {
        for (int i = 0; i < employees.size(); i++)
        {
            if(employees[i]->getEmployeeType()=="manager")
                cout << "Mr. " << employees[i]->getName() << endl;
            else if(employees[i]->getEmployeeType()=="driver")
                cout << employees[i]->getName() << endl;
        }
    }
    void addEmployee(Employee* e)
    {
        if(e->getEmployeeType()=="driver")
            driverCounter++;
        else if(e->getEmployeeType()=="manager")
            managerCounter++;

        
        employees.push_back(e);
    }

    void addVehicle(Vehicles *v)
    {

        vehicles.push_back(v);
    }
    static void vehicleCheck(GasolineVehicle * v)
    {
        cout<<v->getType()<<" -Maintenance"<<"\n";
    }
    void maintenance_all_vehicle()
    {
        for(int i=0;i<vehicles.size();i++)
        {
            vehicles[i]->performanceMaintanance();
        }
    }
    ~Branch()
    {
        for(auto v:vehicles)
            delete v;
    }
};

int main()
{
    Branch b;
    b.addVehicle(new Car("FBI13BV5","India",20,50,"Petrol",4));
    b.addVehicle(new Truck("UBU642BD","China",100,60,"Disel",200));
    b.addVehicle(new Motorcycle("ORQH7VB","Bangladesh",2,10,"Petrol"));
    b.addVehicle(new ElectricVehicle("472FUIGNQ","India",6,10,5.6));
    b.addVehicle(new HybridVehicle("RIBB27235Q","China",100,60,"Disel",200,4.5));

    b.addEmployee(new Manager("Fahim","220"));
    b.addEmployee(new Manager("Rahim","230"));
    b.addEmployee(new Manager("Adil","225"));
    b.addEmployee(new Manager("Tasuk","250"));

    b.addEmployee(new Driver("Faruk","100"));
    b.addEmployee(new Driver("Wasik","120"));
    b.addEmployee(new Driver("Asif","155"));
    b.addEmployee(new Driver("Arif","187"));
    b.maintenance_all_vehicle();
    b.printNames();
}
