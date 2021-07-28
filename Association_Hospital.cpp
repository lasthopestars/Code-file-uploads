#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Doctor; //전방 선언

class Patient//어떤 의사를 만나니?
{
	
private:
	string m_name;
	vector<Doctor*> m_doctors;//이 환자가 제휴하는 의사들.

public:
	Patient(string name_in)
		:m_name(name_in)
	{}


	void addDoctor(Doctor * new_doctor)//제휴하는 의사 추가
	{
		m_doctors.push_back(new_doctor);
	}


	void meetDoctors();

	friend class Doctor;
	

	

};



class Doctor
{
private:
	string m_name;
	vector<Patient*>m_patients;
	Doctor *doctor; //의사도 의사 만나기. 제휴 관계 이렇게 맺어질 수 있어.
public:
	Doctor(string name_in)
		: m_name(name_in)
	{}

	void addPatient(Patient * new_patient)
	{
		m_patients.push_back(new_patient);
	}

	void meetPatients()
	{
		for (auto & ele : m_patients)
		{
			cout << "Meet patient: " << ele->m_name << endl;
		}
	}

	friend class Patient;
};



void Patient:: meetDoctors()
{
	for (auto & ele : m_doctors)
	{
		cout << "Meet doctor: " << ele->m_name << endl;
	}
}


int main()
{
	Patient *p1 = new Patient("Jack Jack");
	Patient *p2 = new Patient("Dash");
	Patient *p3 = new Patient("Violet");

	Doctor *d1 = new Doctor("Doctor K");
	Doctor *d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	//patients meet doctors
	p1->meetDoctors();

	//doctors meet patients
	d1->meetPatients();

	//delets

	
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;

}

