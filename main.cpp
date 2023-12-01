#include <iostream>
#include <cmath>
#include <string>
#include <experimental/random>

double area_of_trapezoid(double b1, double b2, double h){return (b1 + b2) * h / 2;}
double circumference(double r){return 2*M_PI*r;}
double area_of_circle(double r){return M_PI*r*r;}
double area_of_triangle(double a, double b){return a*b/2;}
double hypotenuse(double a, double b){return sqrt(a*a+b*b);}
int sum_of_numbers(int x){
    int summury =0;
    while (x != 0){
        summury+=x%10;
        x/=10;
    }
    return summury;
}
double from_cartesian_to_polar(double x,double y){
    double p=sqrt(x*x+y*y),f=atan(y/x)*180/M_PI;
    return p,f;}
double from_polar_to_cartesian(double p,double f){
    double x=p*sin(f),y=p*sin(f);
    return x,y;
}
std::string solution_quadratic_equation(double a, double b,double c){
    double d=b*b-4*a*c;
    if (d<0){return "there is no decision";}
    if (d==0){return "x = " + std::to_string(-b/2*a);}
    if (d>0){return "x1 = " + std::to_string((-b- sqrt(d))/2*a) + " x2 = " + std::to_string((-b+ sqrt(d))/2*a);}}
std::string medians_traingle(double a,double b,double c){
    return "median1 = "+std::to_string(sqrt(2*(a*a+c*c)-b*b)/2)+
           " median2 = "+std::to_string(sqrt(2*(b*b+c*c)-a*a)/2)+
           " median3 = "+std::to_string(sqrt(2*(a*a+b*b)-c*c)/2);
}
std::string count_time(int k){
    return "hours: "+std::to_string(k/60)+" seconds: "+std::to_string(k%60);
}
std::string is_isosceles(double a,double b,double c){
    if (a==b or a==c or b==c){return "isosceles";}
    else{return "not isosceles";};}
double with_discount(int i){
    if(i>1000){
        return i*0.9;
    }else{
        return i;
    }
}
std::string weight_recommendation(double weight,double height){
    if (height-100==weight){return "All ok";}
    if (height-100>weight){return "gain weight";}
    if (height-100<weight){return "lose weight";}
}
std::string review(int in,int gener){
    if (in==gener){
        return "Correct";
    }else{
        return "Incorrect";
    }
}
double negotiation_with_discount(double lenght, int day_of_the_week, double cost_per_hour){
    if (day_of_the_week>=6){return lenght*cost_per_hour*0.8;}
    else{return lenght*cost_per_hour;}
}
std::string seasons(int x){
    std::string st;
    if (x>=3 and x<=5){st+="spring";}
    if (x>=6 and x<=8){st+="summer";}
    if (x>=9 and x<=11){st+="autumn";}
    if (x<=2 or x==12){st+="winter";}
    st+=" ";
    switch(x){
        case 1:st+="January";
            break;
        case 2:st+="February";
            break;
        case 3:st+="March";
            break;
        case 4:st+="April";
            break;
        case 5:st+="May";
            break;
        case 6:st+="June";
            break;
        case 7:st+="July";
            break;
        case 8:st+="August";
            break;
        case 9:st+="September";
            break;
        case 10:st+="October";
            break;
        case 11:st+="November";
            break;
        case 12:st+="December";
            break;
    }
    return st;
}
std::string lucky(int x){
    int a=x/1000,b=x%1000;
    if (sum_of_numbers(a)== sum_of_numbers(b)){return "lucky";}
    else{return "unlucky";}
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    //task1
    std::cout << "task1" << std::endl;
    std::cout << area_of_trapezoid(10.6, 78.4, 5.6)<< std::endl;
    std::cout << std::endl;

    //task2
    std::cout << "task2" << std::endl;
    std::cout << circumference(10.14) << std::endl;
    std::cout << area_of_circle(10.14) << std::endl;
    std::cout << std::endl;

    //task3
    std::cout << "task3" << std::endl;
    std::cout << area_of_triangle(11.5, 1512) << std::endl;
    std::cout << hypotenuse(11.5, 1512) << std::endl;
    std::cout << std::endl;

    //task4
    std::cout << "task4" << std::endl;
    std::cout << sum_of_numbers(1456)<<std::endl;
    std::cout << std::endl;

    //task5
    std::cout << "task5" << std::endl;
    std::cout <<from_cartesian_to_polar(5235,5456246)<< std::endl;
    std::cout << std::endl;

    //task6
    std::cout << "task6" << std::endl;
    std::cout << from_polar_to_cartesian(821,12*M_PI/180) << std::endl;
    std::cout << std::endl;

    //task7
    // a*x^2+b*x+c=0
    std::cout << "task7" << std::endl;
    std::cout << solution_quadratic_equation(103.14,513.666,515) << std::endl;
    std::cout << std::endl;

    //task8
    std::cout << "task8" << std::endl;
    std::cout << medians_traingle(141,13523,624)<< std::endl;
    std::cout << std::endl;

    //task9
    std::cout << "task9" << std::endl;
    std::cout << count_time(1)<< std::endl;
    std::cout << std::endl;

    //task10
    std::cout << "task10" << std::endl;
    std::cout << is_isosceles(10,15626, 10)<< std::endl;
    std::cout << std::endl;

    //task11
    std::cout << "task11" << std::endl;
    std::cout << with_discount(10110.12412) << std::endl;
    std::cout << std::endl;

    //task12
    std::cout << "task12" << std::endl;
    std::cout << weight_recommendation(515, 100)<< std::endl;
    std::cout << std::endl;

    //task13
    std::cout << "task13" << std::endl;
    int gen1=std::experimental::randint(0,9),
        gen2=std::experimental::randint(0,9),
        x=0;
    std::cout << "Input integer:";
    std::cin>>x;
    std::cout << review(x,gen1*gen2)<< std::endl;
    std::cout << std::endl;

    //task14
    std::cout << "task14" << std::endl;
    std::cout << negotiation_with_discount(2,6,1000) <<std::endl;
    std::cout << std::endl;

    //task15
    std::cout << "task15" << std::endl;
    int input15;
    std::cin>>input15;
    std::cout << seasons(input15)<<std::endl;
    std::cout << std::endl;

    //task16
    std::cout << "task16" << std::endl;
    std::cout << lucky(666558)<<std::endl;
    std::cout << std::endl;

    //task17
    std::cout << "task17" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    //task18
    std::cout << "task18" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    //task19
    std::cout << "task19" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    //task20
    std::cout << "task20" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    //task21
    std::cout << "task21" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}