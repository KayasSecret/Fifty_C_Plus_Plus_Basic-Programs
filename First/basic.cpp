/*
  Write a C program to input basic salary of an employee and calculate its Gross salary and Net
  Salary according to following:

  Input is Basic Salary
  HRA = 30% of Basic,
  DA = 80% of Basic
  PF = 24% of Basic
  PA = 5% of Basic

  Gross = Basic + DA + HRA + PA
  Net = Gross - PF - IT(Income Tax)
  Calculate Yearly Income Tax first
*/ 

#include<iostream>
using namespace std;

int main() {
    float bas_sal;
    float hra, da, pf, pa, gross, net;
    float yearly_income, it;

    cout << "Enter your basic salary : ";
    cin >> bas_sal;

    // Allowances & Deductions
    hra = (bas_sal * 30) / 100;
    da  = (bas_sal * 80) / 100;
    pf  = (bas_sal * 24) / 100;
    pa  = (bas_sal * 5)  / 100;

    // Gross Salary
    gross = bas_sal + hra + da + pa;

    // Yearly Income
    yearly_income = gross * 12;

    // Simple Income Tax Calculation
    if(yearly_income <= 250000)
        it = 0;
    else if(yearly_income <= 500000)
        it = yearly_income * 0.05;
    else if(yearly_income <= 1000000)
        it = yearly_income * 0.20;
    else
        it = yearly_income * 0.30;

    // Monthly Income Tax
    it = it / 12;

    // Net Salary
    net = gross - pf - it;

    cout << "\nHRA = " << hra;
    cout << "\nDA = " << da;
    cout << "\nPF = " << pf;
    cout << "\nPA = " << pa;
    cout << "\nGross Salary = " << gross;
    cout << "\nMonthly Income Tax = " << it;
    cout << "\nNet Salary = " << net;

    return 0;
}
