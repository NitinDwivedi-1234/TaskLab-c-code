#include<iostream>
#include<vector>
using namespace std;

class Employee{
    public:
        string name;
        int age;
        vector<int> arr_age;
        vector<string> arr_name;
        vector<int> arr_id;
        void AddEmployee(int id){   
            cout<<"Enter Name:- ";
            cin>>name;
            cout<<"Enter Age:- ";
            cin>>age;
            for(int i=0;i<arr_name.size();++i){
                if(name==arr_name[i]){
                    cout<<"Entry already there\n";
                    break;
                }
            }
            arr_age.push_back(age);
            arr_name.push_back(name);
            arr_id.push_back(id);
            
        }
        void EditEmployee(int id, int ID){
            string name_change;
            int age_change;
            for(int i=0;i<arr_id.size();++i){
                if(id==arr_id[i]){
                    cout<<"Name:- "<<arr_name[i]<<endl;
                    cout<<"Age:- "<<arr_age[i]<<"\n"<<endl;
                }
                //else part doubt
                
            }
            cout<<"For Change"<<endl;
            cout<<"Enter Name:- ";
            cin>>name_change;
            cout<<"Enter Age:- ";
            cin>>age_change;
            for(int i=0;i<arr_id.size();++i){
                if(id==arr_id[i]){
                    arr_name[i]=name_change;
                    arr_age[i]=age_change;
                }
            }
        }
        void DeleteEmployee(int id){
            for(int i=0;i<arr_id.size();++i){
                if(id==arr_id[i]){
                    arr_name.erase(arr_name.begin()+i);
                    arr_id.pop_back();
                }
                else{
                    cout<<"Name:- "<<arr_name[i]<<endl;
                    cout<<"Age:- "<<arr_age[i]<<"\n\n";
                }
            }
            //ask for age doubt
            int age_change;
            cout<<"Enter Age:- ";
            cin>>age_change;
            for(int i=0;i<arr_age.size();++i){
                if(age_change==arr_age[i]){
                    continue;
                }
            }
        }
        void EmployeeList(){
            if(arr_id.size()==0){
                cout<<"No Entry\n";
            }
            else{
                for(int i=0;i<arr_id.size();++i){
                    cout<<"Name:- "<<arr_name[i]<<endl;
                    cout<<"Age:- "<<arr_age[i]<<"\n\n";
                }
            }
            
        }
};


class Department: public Employee{
    public:
        Employee emp;
        string department;
        vector <string> arr_department;
        void AddDepartment(){
            cout<<"Enter Department:- ";
            cin>>department;
            arr_department.push_back(department);
        }
        void EditDepartment(int id){
            string department_change;
            cout<<"Enter Department:- ";
            cin>>department_change;
            for(int i=0;i<emp.arr_id.size();++i){
                if(id==arr_id[i]){
                    cout<<"Enter Department:- ";
                    cin>>department_change;
                    break;
                }
            } 

        }
};


int main(){
    int dep_choice,emp_choice,ID=0,ID_check;
    char  choice;
    Department emp;
    while(true){
        cout<<"Press E for Employee\n"<<"Press D for Department\n\n";
        cout<<endl;
        cout<<"Enter Choice:- ";
        cin>>choice;
        if(choice=='e'||choice=='E'){
            while(true){
                cout<<endl;
                cout<<"\nPress 1 for Add Employee\n"<<"Press 2 for Edit Employee\n"<<"Press 3 for Delete Employee\n"<<"Press 4 for All Employees\n"<<"Press -1 for exit\n\n";
                cout<<"Press Emp_Choice:- ";
                cin>>emp_choice;
                cout<<endl;
                if(emp_choice==1){
                    ++ID;
                    emp.AddEmployee(ID);
                }
                else if(emp_choice==2){
                    cout<<"Enter ID:- ";
                    cin>>ID_check;
                    emp.EditEmployee(ID_check,ID);
                    emp.
                }
                else if(emp_choice==3){
                    cout<<"Enter ID:- ";
                    cin>>ID_check;
                    emp.DeleteEmployee(ID_check);
                }
                else if(emp_choice==4){
                    emp.EmployeeList();
                }
                else if(emp_choice==-1){
                    break;
                }
                else{
                    cout<<"Wrong input\n";;
                }
            }
        }
        else if(choice=='d'||choice=='D'){
            //to be continued
            break;
        }
        
    }

    return 0;
       
}