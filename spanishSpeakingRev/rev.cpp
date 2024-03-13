#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

int randomGenerator(int min, int max){
    srand((int)time(0));
    int random = rand()%(max-min + 1) + min;
    return random;
}
//{"Question in Spanish", "Question in English", "Answer"}

string answers[47][3] = {{"¿Que sueles hacer en tus ratos libres?", "What do you usually do in your freetime", ""},
                        {"¿Eres teleadicto/a?¿Por que (no)?", "Are you addicted to TV? Why/ Why not?", ""},
                        {"¿Prefieres ver las peliculas en casa o en el cine?¿Por que?", "Do you prefer to watch films at home or in the cinema? Why?", ""},
                        {"¿Te gusta la musica?¿Por que (no)?", "Do you like music? Why/ Why not?", ""},
                        {"¿Tus padres te dan dinero?¿Que haces con la paga?", "Do your parents give you money? What do you do with it?", ""},
                        {"¿Que planes tienes para este fin de semana?", "What plans do you have this weekend?", ""},
                        {"¿Eres muy deportista?¿Por que (no)?", "Are you very sporty? Why/ Why not?", ""},
                        {"Hablame de la ultima vez que participaste en un deporte.", "Tell me about the last time you participated in a sport.", ""},
                        {"¿En que consiste un buen modelo a seguir?", "What does a good role model consist of?", ""},
                        {"¿Quien es tu modelo a seguir?", "Who is your role model?", ""},
                        {"¿Como es tu instituto?¿Que instalaciones (no)tiene?", "What is your school like? What facilities does it have/ not have?", ""},
                        {"¿Que asignaturas te gustan y no te gustan?¿Por que?", "What subjects do you like/ not like? Why?", ""},
                        {"¿Que opinas del uniforme escolar?", "What do you think of your school uniform?", ""},
                        {"¿Que opinas de las normas de tu insti?", "What do you think of the school rules?", ""},
                        {"¿Que actividades extraescolares haces?", "What extracurricular activities do you do?", ""},
                        {"¿Que hiciste ayer despues del colegio?", "What did you do yesterday after school?", ""},
                        {"¿Que vas a hacer hoy despues del colegio?", "What are you going to do today after school?", ""},
                        {"Comprara tu escuela primaria con tu instituto.", "Compare your primary school with your secondary school.", ""},
                        {"¿Tienes un trabajo a tiempo parcial?¿Que haces?", "Do you have a part time job? What do you do?", ""},
                        {"¿Que planes tienes para seguir estudiando en el futuro?", "What plans do you have to continue studying in the future?", ""},
                        {"¿Donde hiciste tus practicas laborales?¿Que hiciste?", "Where  did you do your work experience? What did you do?", ""},
                        {"¿En que te gustaria trabajar?¿Por que?", "What would you like to work as and why?", ""},
                        {"¿Como pasarias un ano sabatico?¿Por que?", "How would you spend a year out and why?", ""},
                        {"Si tuvieras la oportunidad ¿Que te gustaria cambiar de tu colegio?", "If you had the opportunity, what would you like to change about your school?", ""},
                        {"Si tienes exito en tus examenes ¿Que haras el ano que viene?", "If you have success in your exams, what will you do next year.", ""},
                        {"¿Donde vives?", "Where do you live?", ""},
                        {"¿Que hay en tu ciudad?¿Te gusta?", "What is there in your city? Do you like it?", ""},
                        {"¿Que se puede hacer en tu ciudad?", "What can you do in your town/ city?", ""},
                        {"¿Que es lo mejor/ peor de tu ciudad?", "What is the best/ worst thing about your city?", ""},
                        {"¿Antes como era tu ciudad?", "What was your city like before?", ""},
                        {"¿Como sera tu ciudad en el futuro?", "What will your city be like in the future?", ""},
                        {"¿Que cambiarias si fueras alcalde/alcaldesa?", "What would you change if you were the mayor?", ""},
                        {"¿Si tuvieras la oportunidad, donde te gustaria vivir?", "If you had the opportunity, where would you like to live?", ""},
                        {"¿Adonde vas de vacaciones normalmente y que haces?", "Where do you normally go on holiday and what do you do?", ""},
                        {"¿Adonde fuiste de vacaciones el ano pasado y que hiciste?", "Where did you go on holiday last year and what did you do?", ""},
                        {"¿Adonde vas a ir de vacaciones el ano que viene?", "Where are you goin on holiday this year?", ""},
                        {"¿Si fueras rico/a adonde irias de vacaciones?", "If you were rich, where would you like to go on holiday?", ""},
                        {"Describe un buen amigo tuyo.", "Describe a good friend.", ""},
                        {"¿Quienes son mas importantes tus amigos o tus padres?¿Por que?", "Who are more important, your friends or family? Why?", ""},
                        {"¿Crees que los jovenes estan obsesiandos con sus moviles?¿Por que (no)?", "Do you believe that young people are obsessed with their phones? Why/ why not?", ""},
                        {"¿Que aplicaciones usas para estar en contacte con tus amigos y con tu familia?", "What apps do you use to stay in contact with your friends and family?", ""},
                        {"¿Que piensas de las redes sociales?", "What do you think of social media?", ""},
                        {"¿Que te gusta leer?¿Por que?", "What do you like to read? Why?", ""},
                        {"¿Te llevas bien con tu familia?¿Por que (no)?", "Do you get on well with your family? Why/ why not?", ""},
                        {"Describe una persona de tu familia.", "Describe a person in your family", ""},
                        {"¿Por que es importante pasar tiempo en familia?", "Why is it important to spend time with your family?", ""},
                        {"¿Que planes tienes con tus amigos o con tu familia este fin de semana?", "What plans do youo have with your friends or family this weekend?", ""}};

int main(){
    cout << "-----Spanish Speaking Revision Time !-----\n";
    while(true){
        cout << "\nWhat would you like to revise?\n";
        cout << "Enter the number of the option you wish to choose\n";
        cout << "1.Free Time\n2.School and Future Plans\n3.Home and local area\n4.Family, freinds and technology\n5.All\n";
        int module;
        cin >> module;
        while(true){
            int number = 0;
            switch(module){
                case 1:
                    number = randomGenerator(0,9);
                    break;
                case 2:
                    number = randomGenerator(10,24);
                    break;
                case 3:
                    number = randomGenerator(25,36);
                    break;
                case 4:
                    number = randomGenerator(37,46);
                    break;
                case 5:
                    number = randomGenerator(0,46);
                    break;
            }

            cout << '\n' << answers[number][0] << '\n';
            cout << '\n' << "Would you like to: \n1.Continue to next question\n2.Have the question in English\n3.See prompt (NOT IMPLEMENTED YET)\n4.See both\n5.Change module\n";
            int input;
            cin >> input;
            string moveOn;

            if(input == 1){
                continue;
            }
            else if(input == 2){
                cout << answers[number][1] << '\n';
                cout << "Ready to move on? Type anything.\n";
                cin >> moveOn;
                continue;
            }
            else if(input == 3){
                cout << '\n' << answers[number][2] << '\n';
                cout << "Ready to move on? Type anything.\n";
                cin >> moveOn;
                continue;
            }  
            else if(input == 4){
                cout << '\n' <<answers[number][1] << '\n';
                cout << '\n' <<answers[number][2] << '\n';
            }          
            else if(input == 5){
                break;
            }

        }
    }
    
    return 0;
}