#include<iostream>
#include<vector>
using namespace std;

class employeeManagment{
    public:
        string name;
        int age;
        vector<int> arr_age;
        vector<string> arr_name;
        vector<int> arr_emp_id;
        string department;
        vector <string> arr_department;
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
            arr_emp_id.push_back(id);
            
        }
        void EditEmployee(int id, int ID){
            string name_change;
            int age_change;
            for(int i=0;i<arr_emp_id.size();++i){
                if(id==arr_emp_id[i]){
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
            for(int i=0;i<arr_emp_id.size();++i){
                if(id==arr_emp_id[i]){
                    arr_name[i]=name_change;
                    arr_age[i]=age_change;
                }
            }
        }
        void DeleteEmployee(int id){
            for(int i=0;i<arr_emp_id.size();++i){
                if(id==arr_emp_id[i]){
                    arr_name.erase(arr_name.begin()+i);
                    arr_emp_id.pop_back();
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
            if(arr_emp_id.size()==0){
                cout<<"No Entry\n";
            }
            else{
                for(int i=0;i<arr_emp_id.size();++i){
                    cout<<"Name:- "<<arr_name[i]<<endl;
                    cout<<"Age:- "<<arr_age[i]<<"\n\n";
                }
            }
            
        }
        void AddDepartment(int id){
            cout<<"Enter Department:- ";
            cin>>department;
            arr_department.push_back(department);
            arr_emp_id.push_back(id);
        }
        void EditDepartment(int id){
            string department_change;
            cout<<"Enter Department:- ";
            cin>>department_change;
            for(int i=0;i<arr_emp_id.size();++i){
                if(id==arr_emp_id[i]){
                    cout<<"Enter Department:- ";
                    cin>>department_change;
                    arr_department[i]=department_change;
                    break;
                }
            } 
        }
        void DeleteDepartment(int id){
            for(int i=0;i<arr_emp_id.size();++i){
                if(id==arr_emp_id[i]){
                    arr_department.erase(arr_department.begin()+i);
                    arr_emp_id.pop_back();
                    break;
                }
            }
        }
        void ListDepartment(){
            char key;
            for(int i=0;i<arr_emp_id.size();++i){
                cout<<arr_department[i]<<endl;
                if(i==5){
                    cout<<"\nPress N/n for next page"<<endl;
                    cin>>key;
                    if(key=='n'||key=='N'){
                        continue;
                        system("cls"); 
                    }
                    else{
                         cout<<"\nWrong input\n";
                         break;
                    }
                }
                for(int j=0;j<arr_emp_id.size();++j){
                    
                    cout<<"Name:- "<<arr_name[j]<<endl;
                    cout<<"Age:- "<<arr_age[j]<<"\n"<<endl;
                }
            }
        }
};

class departmentManagment{
    public:
           
};

int main(){
    int dep_choice,emp_choice,emp_ID=0,dep_ID=0,ID_check;
    char  choice;
    employeeManagment  emp;
    while(true){
        cout<<"Press D for Department\n"<<"Press E for Employee\n"<<"Press -1 for Exit"<<"\n";
        cout<<endl;
        cout<<"Enter Choice:- ";
        cin>>choice;
        if(choice=='d'||choice=='D'){
            while(true){
                cout<<endl;
                cout<<"\nPress 1 for Add Department\n"<<"Press 2 for Edit Department\n"<<"Press 3 for Delete Department\n"<<"Press 4 for All Department\n"<<"Press -1 for exit\n\n";
                cout<<"Enter Dep_Choice:- ";
                cin>>dep_choice;
                cout<<endl;
                if(dep_choice==1){
                    emp.AddDepartment(dep_ID);
                    ++dep_ID;
                }
                else if(dep_choice==2){
                    cout<<"Enter ID:-" ;
                    cin>>ID_check;
                    emp.EditDepartment(ID_check);
                }
                else if(dep_choice==3){
                    cout<<"Enter ID:-" ;
                    cin>>ID_check;
                    emp.DeleteDepartment(ID_check);
                }
                else if(dep_choice==4){
                    emp.ListDepartment();
                }
                else if(dep_choice==-1){
                    break;
                }
                else{
                    cout<<"Wrong input\n";
                }
            }
        }
        else if(choice=='e'||choice=='E'){
            while(true){
                cout<<endl;
                cout<<"\nPress 1 for Add Employee\n"<<"Press 2 for Edit Employee\n"<<"Press 3 for Delete Employee\n"<<"Press 4 for All Employees\n"<<"Press -1 for exit\n\n";
                cout<<"Press Emp_Choice:- ";
                cin>>emp_choice;
                cout<<endl;
                if(emp_choice==1){
                    ++emp_ID;
                    emp.AddEmployee(emp_ID);
                }
                else if(emp_choice==2){
                    cout<<"Enter ID:- ";
                    cin>>ID_check;
                    emp.EditEmployee(ID_check,emp_ID);
                    
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
        else{
            break;
        }
        
    }

    return 0;
       
}

