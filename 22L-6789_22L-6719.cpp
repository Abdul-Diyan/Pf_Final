//#include<iostream>
//#include<time.h>
//#include<string>
//#include<fstream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//void battingboard(char team[10][20], int runs[], int fours[], int sixes[], int balls[], float str[]) // function to make batting board
//{
//    cout << "scorecard:" << endl;
//    cout << "player\truns\tballs\t4s\t6s\tsr" << endl;
//    for (int i = 0; i < 7; i++) {
//        cout << team[i] << "\t" << runs[i] << "\t" << balls[i] << "\t" << fours[i] << "\t" << sixes[i] << "\t" << str[i] << endl;
//    }
//}
//void economy(int runs[], int overs[], float economy[]) {            //funtion to calculate the economy of the bowlers
//    for (int i = 0; i < 7; i++)
//    {
//        if (overs[i] == 0) {
//            economy[i] = 0.0;
//        }
//        else
//        {
//            economy[i] = (float(runs[i]) / overs[i]);
//        }
//    }
//}
//void strikerate(int runs[], int balls[], float strikerate[])                //function to calculate the strike rate of batsman
//{
//    for (int i = 0; i < 7; i++)
//    {
//        if (balls[i] == 0) {
//            strikerate[i] = 0.0;
//        }
//        else
//        {
//            strikerate[i] = (float(runs[i]) / balls[i]) * 100;
//        }
//    }
//}
//int toss(int overs) { //function to find which team won the toss
//    (srand(time(nullptr)));
//    int n;
//    n = rand() % 2;
//    if (n == 1) {
//        cout << "team 1 won the toss and elected to bat first" << endl;
//    }
//    else if (n == 0) {
//        cout << "team 2 won the toss and elected to bat first" << endl;
//    }
//    return n;
//}
//void teams(char team1[10][20], char team2[10][20]) {                                                // function to display the teams
//    cout << endl << endl;
//    for (int i = 0; i < 10; i++) {
//        if (i == 0) {
//            cout << "pakistan playing 7" << "\t\t\t" << "new zealand playing 7" << endl;
//        }
//        cout << team1[i];
//        cout << "\t" << "\t\t\t\t";
//        cout << team2[i];
//        cout << endl;
//    }
//}
//void BowlingBoard(char team[10][20], int overs[], int runs[], int wickets[], float economy[]) {                                             // function to make bowling board
//
//    cout << "Name\tbowler\truns\twicket\teconomy" << endl;
//
//
//    for (int k = 0; k < 7; k++)
//    {
//        cout << team[k] << "\t" << overs[k] << "\t" << runs[k] << "\t" << wickets[k] << "\t" << economy[k] << "\t" << endl;
//    }
//}
//void display_over_file() {                                                                          // function to read all data from the given confriguration file
//    ifstream inputFile("Configuration.txt"); // open the input file
//
//    if (inputFile.is_open()) { // check if the file could not be opened
//        char temp;
//
//        for (int i = 0; i < 10 && inputFile >> temp; i++) { // read and display 20 integers
//
//            cout << temp;
//
//        }
//    }
//    else {
//        cout << "Error: could not open file." << endl;
//    }
//
//
//
//    inputFile.close(); // close the input file
//
//}
//int get_overs(int& a) {                                                                                                     // function to take overs  from the given confriguration file
//    ifstream inputFile("Configuration.txt"); // open the input file
//    char temp[10];
//    if (inputFile.is_open()) {
//
//        inputFile >> temp;
//        inputFile >> a;
//    }
//    else {
//        cout << "Error: could not open file." << endl;
//    }
//
//
//
//    inputFile.close(); // close the input file
//    return a;
//}
//void total_score1(int score, int& total_score) {                                                                                // function to calculate total score
//    total_score = total_score + score;
//}
//void total_wickets1(int wicket, int& total_wickets) {                                                                           // function to calculate total wickets            
//    total_wickets = total_wickets + wicket;
//
//}
//void total_over(int over, int& total_overs) {                                                                                   // function to calculate total overs
//    total_overs = total_overs + over;
//
//}
//void most_runs(char arrteam[10][20], int runs[]) {                                                                               // function to calculate most runs by any batsman
//    for (int j = 0; j < 1; j++) {
//        int most_runs_1 = 0;
//        int most_run_1 = 0;
//        for (int i = 0; i < 7; i++) {
//
//            if (most_runs_1 <= runs[i]) {
//                most_runs_1 = runs[i];
//                most_run_1 = i;
//            }
//        }
//        cout << "MOST RUNS SCORED BY ANY BATSMAN FOR PAKISTAN IS: " << arrteam[most_run_1] << " = " << runs[most_run_1];
//    }
//}
//void most_wickets(char arrteam[10][20], int wickets[]) {                                                                          // function to calculate most wickets by any bowler
//    for (int j = 0; j < 1; j++) {
//        int most_wickets_2 = 0;
//        int most_wicket_2 = 0;
//        for (int i = 0; i < 7; i++) {
//
//            if (most_wickets_2 <= wickets[i]) {
//                most_wickets_2 = wickets[i];
//                most_wicket_2 = i;
//            }
//        }
//        cout << "MOST WICKETS TAKEN BY ANY BOWLER IN SECOND INNINGS IS: " << arrteam[most_wicket_2] << " = " << wickets[most_wicket_2];
//    }
//}
//void score_board(char arrteam1[10][20],int runs_team_1[7], int fours_team_1[7], int sixes_team_1[7], int balls_team_1[7], float strikerate_team_1[7], int totalscore_team_1,                                        // function to display the scoreboard at the end of match
//    int totalwickets_team_1, int total_over1, int over_deleved_2[7], int runs_conceded_2[7], int wicket_taken_2[7], float economy_team_2[7],char arrteam2[10][20],int runs_team_2[7],
//    int fours_team_2[7], int sixes_team_2[7], int balls_team_2[7], float strikerate_team_2[7], int totalscore_team_2, int totalwickets_team_2, int total_over2, int over_deleved_1[7], 
//    int runs_conceded_1[7], int wicket_taken_1[7], float economy_team_1[7]) {
//    cout << endl << "------------ MATCH SUMMARY ----------" << endl;
//    cout << endl;
//
//    cout << "------------- BATTING STATISTICS. ------------ - " << endl;
//    cout << endl << "------- PAKISTAN ---------" << endl;
//    strikerate(runs_team_1, balls_team_1, strikerate_team_1);
//    battingboard(arrteam1, runs_team_1, fours_team_1, sixes_team_1, balls_team_1, strikerate_team_1);
//    // most runs scored by any batsman for Pakistan
//    for (int j = 0; j < 1; j++) {
//        int most_runs_1 = 0;
//        int most_run_1 = 0;
//        for (int i = 0; i < 7; i++) {
//
//            if (most_runs_1 <= runs_team_1[i]) {
//                most_runs_1 = runs_team_1[i];
//                most_run_1 = i;
//            }
//        }
//        cout << "MOST RUNS SCORED BY ANY BATSMAN FOR PAKISTAN IS: " << arrteam1[most_run_1] << " = " << runs_team_1[most_run_1];
//    }
//    cout << endl;
//    cout << endl;
//
//    cout << "TOTAL SCORE: " << totalscore_team_1 << "/" << totalwickets_team_1 << " in " << total_over1 << " overs." << endl;
//    cout << endl << "------- NEW ZEALAND ---------" << endl;
//    cout << endl;
//    strikerate(runs_team_2, balls_team_2, strikerate_team_2);
//    battingboard(arrteam2, runs_team_2, fours_team_2, sixes_team_2, balls_team_2, strikerate_team_2);
//    // most runs scored by any batsman for New zealand
//    for (int j = 0; j < 1; j++) {
//        int most_runs_2 = 0;
//        int most_run_2 = 0;
//        for (int i = 0; i < 7; i++) {
//
//            if (most_runs_2 <= runs_team_2[i]) {
//                most_runs_2 = runs_team_2[i];
//                most_run_2 = i;
//            }
//        }
//        cout << "MOST RUNS SCORED BY ANY BATSMAN FOR NEW ZEALAND IS: " << arrteam2[most_run_2] << " = " << runs_team_2[most_run_2];
//    }
//    cout << endl;
//    cout << endl;
//    cout << "TOTAL SCORE: " << totalscore_team_2 << "/" << totalwickets_team_2 << " in " << total_over2 << " overs." << endl;
//    cout << endl << "------------- BOWLING STATISTICS. -------------" << endl;
//
//    cout << endl << "------- PAKISTAN ---------" << endl;
//    economy(runs_conceded_2, over_deleved_2, economy_team_2);
//
//    BowlingBoard(arrteam1, over_deleved_2, runs_conceded_2, wicket_taken_2, economy_team_2);
//    // most wicket taken bowler for team 1
//    for (int j = 0; j < 1; j++) {
//        int most_wickets_1 = 0;
//        int most_wicket_1 = 0;
//        for (int i = 0; i < 7; i++) {
//
//            if (most_wickets_1 <= wicket_taken_2[i]) {
//                most_wickets_1 = wicket_taken_2[i];
//                most_wicket_1 = i;
//            }
//        }
//        cout << "MOST WICKETS TAKEN BY ANY BOWLER IN SECOND INNINGS IS: " << arrteam1[most_wicket_1] << " = " << wicket_taken_2[most_wicket_1];
//    }
//
//    cout << endl;
//    cout << endl << "------- NEW ZEALAND ---------" << endl;
//    economy(runs_conceded_1, over_deleved_1, economy_team_1);
//
//    BowlingBoard(arrteam2, over_deleved_1, runs_conceded_1, wicket_taken_1, economy_team_1);
//    // most wicket taken bowler for team 2
//    for (int j = 0; j < 1; j++) {
//        int most_wickets_2 = 0;
//        int most_wicket_2 = 0;
//        for (int i = 0; i < 7; i++) {
//
//            if (most_wickets_2 <= wicket_taken_1[i]) {
//                most_wickets_2 = wicket_taken_1[i];
//                most_wicket_2 = i;
//            }
//        }
//        cout << "MOST WICKETS TAKEN BY ANY BOWLER IN SECOND INNINGS IS: " << arrteam2[most_wicket_2] << " = " << wicket_taken_1[most_wicket_2];
//    }
//    cout << endl;
//    cout << endl;
//    cout << endl;
//    // LOOP FOR BOWLER OF THE MATCH
//    for (int j = 0; j < 1; j++) {
//        int most_wickets_2 = 0;
//        int most_wicket_2 = 0;
//        int most_wickets_1 = 0;
//        int most_wicket_1 = 0;
//        for (int i = 0; i < 7; i++) {
//
//            if (most_wickets_2 <= wicket_taken_1[i]) {
//                most_wickets_2 = wicket_taken_1[i];
//                most_wicket_2 = i;
//            }
//        }
//
//        for (int i = 0; i < 7; i++) {
//
//            if (most_wickets_1 <= wicket_taken_2[i]) {
//                most_wickets_1 = wicket_taken_2[i];
//                most_wicket_1 = i;
//            }
//        }
//       if (wicket_taken_1[most_wicket_2] > wicket_taken_2[most_wicket_1]) {
//            cout << "BOWLER OF THE MATCH IS: " << arrteam2[most_wicket_2] << " = " << wicket_taken_1[most_wicket_2];
//
//        }
//        else {
//            cout << "BOWLER OF THE MATCH IS: " << arrteam1[most_wicket_1] << " = " << wicket_taken_2[most_wicket_1];
//
//        }
//    }
//    cout << endl;
//    cout << endl;
//    cout << endl;
//    // most runs scored by any batsman for Pakistan
//    for (int j = 0; j < 1; j++) {
//        int most_runs_1 = 0;
//        int most_run_1 = 0;
//        int most_runs_2 = 0;
//        int most_run_2 = 0;
//        for (int i = 0; i < 7; i++) {
//
//            if (most_runs_1 <= runs_team_1[i]) {
//                most_runs_1 = runs_team_1[i];
//                most_run_1 = i;
//            }
//        }
//        for (int i = 0; i < 7; i++) {
//
//            if (most_runs_2 <= runs_team_2[i]) {
//                most_runs_2 = runs_team_2[i];
//                most_run_2 = i;
//            }
//        }
//        if (runs_team_2[most_run_2] > runs_team_1[most_run_1]) {
//            cout << "MAN OF THE MATCH IS: " << arrteam2[most_run_2] << " = " << runs_team_2[most_run_2];
//
//        }
//        else {
//            cout << "MAN OF THE MATCH IS: " << arrteam1[most_run_1] << " = " << runs_team_1[most_run_1];
//
//        }
//
//    }
//}
//void display_match_summary_file() {                                                                          // function to read all data from the given confriguration file
//    ifstream inputFile("match_summary.txt"); // open the input file
//    if (inputFile.is_open()) { // check if the file could not be opened
//        //char temp = 0;
//        char c;
//        while (inputFile.get(c)) {
//            if (c == '\n') {
//                std::cout << std::endl; // Print a newline
//            }
//            else {
//                std::cout << c; // Print the character
//            }
//        }
//    }
//    else {
//        cout << "Error: could not open file." << endl;
//    }
//
//
//
//    inputFile.close(); // close the input file
//
//}
//void team1(int over,char arrteam1[10][20], char arrteam2[10][20]) {                                                 // function if team 1 won the toss 
//    cout << endl << "press enter to continue game." << endl;
//    cin.get();
//    // declare variables for team 1.
//    int runs_team_1[7] = { 0 }, balls_team_1[7] = { 0 }, fours_team_1[7] = { 0 }, sixes_team_1[7] = { 0 }, out_team_1[7] = { 0 }, wicket_taken_1[7] = { 0 }, runs_conceded_1[7] = { 0 }, over_deleved_1[7] = { 0 };
//    float strikerate_team_1[7] = { 0.00 };
//    float economy_team_1[7] = { 0.00 };
//    int striker = 0, nonstriker = 1;
//    int totalscore_team_1 = 0, totalwickets_team_1 = 0;
//    int total_over1 = 0;
//    // seed the random number generator
//    (srand(time(nullptr)));
//
//    // input data for each ball
//    for (int i = 0; i < over && totalwickets_team_1 < 6; i++) {
//        int wicket = 0, run = 0;
//        for (int j = 0; j < 6; j++) {
//            int wicket1 = 0;
//            if (totalwickets_team_1 < 4) {
//                int n = rand() % 11 - 1;
//                cout << endl;
//                cout << " n= " << n << endl;
//                if (n >= 0 && n < 10) {
//                    int score = rand() % 7;
//                    if (score >= 0) {
//                        cout << endl << "score= " << score;
//                        runs_team_1[striker] += score;
//                        balls_team_1[striker]++;
//                        if (score == 4)
//                        {
//                            fours_team_1[striker]++;
//                            total_score1(4, totalscore_team_1);
//                            run = run + 4;
//                        }
//                        else if (score == 6)
//                        {
//                            sixes_team_1[striker]++;
//                            total_score1(6, totalscore_team_1);
//                            run = run + 6;
//                        }
//                        else if (score == 2) {
//                            total_score1(2, totalscore_team_1);
//                            run = run + 2;
//                        }
//
//                        // switch the strike if necessary
//                        if (score == 1 || score == 3 || score == 5 || i % 6 == 5) {
//                            if (score == 1) {
//                                total_score1(1, totalscore_team_1);
//                                run = run + 1;
//                            }
//                            else if (score == 3) {
//                                total_score1(3, totalscore_team_1);
//                                run = run + 3;
//                            }
//                            else if (score == 5) {
//                                total_score1(5, totalscore_team_1);
//                                run = run + 5;
//                            }
//                            int temp = striker;
//                            striker = nonstriker;
//                            nonstriker = temp;
//                        }
//                    }
//                }
//                else {
//                    out_team_1[totalwickets_team_1] = 1;
//                    wicket1++;
//                    total_wickets1(wicket1, totalwickets_team_1);
//                    wicket++;
//                    balls_team_1[striker]++;
//                    // switch to the next player 
//                    if (totalwickets_team_1 < 7) {
//                        if (striker < nonstriker)
//                        {
//                            striker = nonstriker;
//                            striker++;
//                        }
//                        else
//                        {
//                            striker++;
//                        }
//                    }
//                }
//            }
//
//            else if (totalwickets_team_1 >= 4 && totalwickets_team_1 < 6) {
//                int n = rand() % 2 - 1;
//                if (n == 0) {
//                    int score = rand() % 7;
//                    if (score >= 0) {
//                        cout << endl << "score= " << score;
//                        runs_team_1[striker] += score;
//                        balls_team_1[striker]++;
//                        if (score == 4)
//                        {
//                            fours_team_1[striker]++;
//                            total_score1(4, totalscore_team_1);
//                            run = run + 4;
//                        }
//                        else if (score == 6)
//                        {
//                            sixes_team_1[striker]++;
//                            total_score1(6, totalscore_team_1);
//
//                            run = run + 6;
//                        }
//                        else if (score == 2) {
//                            total_score1(2, totalscore_team_1);
//                            run = run + 2;
//                        }
//
//                        // switch the strike if necessary
//                        if (score == 1 || score == 3 || score == 5 || i % 6 == 5) {
//                            if (score == 1) {
//                                total_score1(1, totalscore_team_1);
//                                run = run + 1;
//                            }
//                            else if (score == 3) {
//                                total_score1(3, totalscore_team_1);
//                                run = run + 3;
//                            }
//                            else if (score == 5) {
//                                total_score1(5, totalscore_team_1);
//                                run = run + 5;
//                            }
//                            int temp = striker;
//                            striker = nonstriker;
//                            nonstriker = temp;
//                        }
//                    }
//                }
//                else {
//                    out_team_1[totalwickets_team_1] = 1;
//                    wicket1++;
//                    total_wickets1(wicket1, totalwickets_team_1);
//                    wicket++;
//                    balls_team_1[striker]++;
//                    // switch to the next player 
//                    if (totalwickets_team_1 < 7) {
//                        if (striker < nonstriker)
//                        {
//                            striker = nonstriker;
//                            striker++;
//                        }
//                        else
//                        {
//                            striker++;
//                        }
//                    }
//                }
//
//            }
//            if (totalwickets_team_1 == 6) {
//                break;
//                cout << endl << endl;
//                cout << "----live score----" << endl;                                     // live scorecard after every ball
//                cout << arrteam1[striker] << "*" << "\t" << runs_team_1[striker] << "\t" << arrteam1[nonstriker] << "\t" << runs_team_1[nonstriker] << endl;
//                cout << endl << endl;
//               /* cout << "Bowler: " << arrteam2[];
//                cout << endl << endl;*/
//                cout << "total after " << i << "." << j + 1 << " overs: " << totalscore_team_1 << " / " << totalwickets_team_1 << endl;
//            }
//            cout << endl << endl;
//            cout << "----live score----" << endl;;                                     // live scorecard after every ball
//            cout << arrteam1[striker] << "*" << "\t" << runs_team_1[striker] << "\t" << arrteam1[nonstriker] << "\t" << runs_team_1[nonstriker] << endl;
//            cout << endl << endl;
//          /*cout << "Bowler: " << score;
//            cout << endl << endl;*/
//            cout << "total after " << i << "." << j + 1 << " overs: " << totalscore_team_1 << " / " << totalwickets_team_1 << endl;
//        }
//        if (i == 0 || i == 7 || i == 14) {
//            wicket_taken_1[6] = wicket_taken_1[6] + wicket;
//            runs_conceded_1[6] = runs_conceded_1[6] + run;
//            over_deleved_1[6] = over_deleved_1[6] + 1;
//        }
//        else if (i == 1 || i == 8 || i == 15) {
//            wicket_taken_1[5] = wicket_taken_1[5] + wicket;
//            runs_conceded_1[5] = runs_conceded_1[5] + run;
//            over_deleved_1[5] = over_deleved_1[5] + 1;
//        }
//        else if (i == 2 || i == 9 || i == 16) {
//            wicket_taken_1[4] = wicket_taken_1[4] + wicket;
//            runs_conceded_1[4] = runs_conceded_1[4] + run;
//            over_deleved_1[4] = over_deleved_1[4] + 1;
//        }
//        else if (i == 3 || i == 10 || i == 17) {
//            wicket_taken_1[3] = wicket_taken_1[3] + wicket;
//            runs_conceded_1[3] = runs_conceded_1[3] + run;
//            over_deleved_1[3] = over_deleved_1[3] + 1;
//        }
//        else if (i == 4 || i == 11 || i == 18) {
//            wicket_taken_1[2] = wicket_taken_1[2] + wicket;
//            runs_conceded_1[2] = runs_conceded_1[2] + run;
//            over_deleved_1[2] = over_deleved_1[2] + 1;
//        }
//        else if (i == 5 || i == 12 || i == 19) {
//
//            wicket_taken_1[1] = wicket_taken_1[1] + wicket;
//            runs_conceded_1[1] = runs_conceded_1[1] + run;
//            over_deleved_1[1] = over_deleved_1[1] + 1;
//        }
//        else if (i == 6 || i == 13 || i == 20) {
//            wicket_taken_1[0] = wicket_taken_1[0] + wicket;
//            runs_conceded_1[0] = runs_conceded_1[0] + run;
//            over_deleved_1[0] = over_deleved_1[0] + 1;
//        }
//        total_over(1, total_over1);
//
//        strikerate(runs_team_1, balls_team_1, strikerate_team_1);
//        cout << endl << "press enter to continue game." << endl;
//
//        cin.get();
//        // display scorecard
//        battingboard(arrteam1, runs_team_1, fours_team_1, sixes_team_1, balls_team_1, strikerate_team_1);
//        cout << "total score: " << totalscore_team_1 << " / " << totalwickets_team_1 << " in " << total_over1 << " overs." << endl;
//        cout << endl << "------- NEW ZEALAND ---------" << endl;
//        economy(runs_conceded_1, over_deleved_1, economy_team_1);
//        BowlingBoard(arrteam2, over_deleved_1, runs_conceded_1, wicket_taken_1, economy_team_1);
//        cout << endl << "press enter to continue game." << endl;
//
//        cin.get();
//    }
//
//    cout << "press enter to see summary of first innings." << endl;
//    cin.get();
//    cout << endl << "SCORECARD AT THE END OF FIRST INNINGS Is: " << endl;
//
//    cout << endl << "------------- PAKISTAN BATTING --------" << endl;
//    strikerate(runs_team_1, balls_team_1, strikerate_team_1);
//
//    // display scorecard
//    battingboard(arrteam1, runs_team_1, fours_team_1, sixes_team_1, balls_team_1, strikerate_team_1);
//    // most runs scored by any batsman for team 1
//    most_runs(arrteam1, runs_team_1);
//
//    cout << endl << endl;
//
//    cout << endl << "----------- NEW ZEALAND BOWLING -----------" << endl;
//    economy(runs_conceded_1, over_deleved_1, economy_team_1);
//    BowlingBoard(arrteam2, over_deleved_1, runs_conceded_1, wicket_taken_1, economy_team_1);
//    // most wicket taken bowler for team 2
//    most_wickets(arrteam2, wicket_taken_1);
//    cout << endl << endl << endl;
//
//    cout << "TOTAL TARGET: " << totalscore_team_1 << "/" << totalwickets_team_1 << " in " << total_over1 << " overs." << endl;
//
//    cout << endl << endl;
//    cout << "------------- SECOND INNINGS: ----------------  " << endl << endl;
//    cout << "pess enter to continue game" << endl;
//    cin.get();
//    cout << "------------- NEW ZEALAND BATTING: ----------------  " << endl;
//    // second innings start
//    // declare variables for team 2.
//    cout << endl << "press enter to continue game." << endl;
//
//    cin.get();
//    //initailazing varaibles for team 2
//    int runs_team_2[7] = { 0 }, balls_team_2[7] = { 0 }, fours_team_2[7] = { 0 }, sixes_team_2[7] = { 0 }, out_team_2[7] = { 0 }, wicket_taken_2[7] = { 0 }, runs_conceded_2[7] = { 0 }, over_deleved_2[7] = { 0 };
//    float strikerate_team_2[7] = { 0.00 };
//    float economy_team_2[7] = { 0.00 };
//    int striker_team_2 = 0, nonstriker_team_2 = 1;
//    int totalscore_team_2 = 0, totalwickets_team_2 = 0;
//    bool flag = 0;
//    int total_over2 = 0;
//    // seed the random number generator
//    (srand(time(nullptr)));
//    // input data for each ball
//    for (int i = 0; i < over && totalwickets_team_2 < 6 && flag == 0 ; i++) {
//        int wicket = 0, run_team_2 = 0;
//        for (int j = 0; j < 6 && flag == 0; j++) {
//            int wicket1 = 0;
//            if (totalwickets_team_2 < 4) {
//                int n = rand() % 11 - 1;
//                cout << endl;
//                cout << " n= " << n << endl;
//                if (n >= 0 && n < 10) {
//                    int score = rand() % 7;
//                    if (score >= 0) {
//                        cout << endl << "score= " << score;
//                        runs_team_2[striker_team_2] += score;
//                        balls_team_2[striker_team_2]++;
//                        if (score == 4)
//                        {
//                            fours_team_2[striker_team_2]++;
//                            total_score1(4, totalscore_team_2);
//
//                            run_team_2 = run_team_2 + 4;
//                        }
//                        else if (score == 6)
//                        {
//                            sixes_team_2[striker_team_2]++;
//                            total_score1(6, totalscore_team_2);
//                            run_team_2 = run_team_2 + 6;
//                        }
//                        else if (score == 2) {
//                            total_score1(2, totalscore_team_2);
//                            run_team_2 = run_team_2 + 2;
//                        }
//
//                        // switch the strike if necessary
//                        if (score == 1 || score == 3 || score == 5 || i % 6 == 5) {
//                            if (score == 1) {
//                                total_score1(1, totalscore_team_2);
//                                run_team_2 = run_team_2 + 1;
//                            }
//                            else if (score == 3) {
//                                total_score1(3, totalscore_team_2);
//                                run_team_2 = run_team_2 + 3;
//                            }
//                            else if (score == 5) {
//                                total_score1(5, totalscore_team_2);
//                                run_team_2 = run_team_2 + 5;
//                            }
//                            int temp = striker_team_2;
//                            striker_team_2 = nonstriker_team_2;
//                            nonstriker_team_2 = temp;
//                        }
//                    }
//                }
//                else {
//                    out_team_2[totalwickets_team_2] = 1;
//                    wicket1++;
//                    total_wickets1(wicket1, totalwickets_team_2);
//                    wicket++;
//                    balls_team_2[striker_team_2]++;
//                    // switch to the next player 
//                    if (totalwickets_team_2 < 7) {
//                        if (striker_team_2 < nonstriker_team_2)
//                        {
//                            striker_team_2 = nonstriker_team_2;
//                            striker_team_2++;
//                        }
//                        else
//                        {
//                            striker_team_2++;
//                        }
//                    }
//                }
//            }
//
//            else if (totalwickets_team_2 >= 4 && totalwickets_team_2 < 6) {
//                int n = rand() % 2 - 1;
//                if (n == 0) {
//                    int score = rand() % 7;
//                    if (score >= 0) {
//                        cout << endl << "score= " << score;
//                        runs_team_2[striker_team_2] += score;
//                        balls_team_2[striker_team_2]++;
//                        if (score == 4)
//                        {
//                            fours_team_2[striker_team_2]++;
//                            total_score1(4, totalscore_team_2);
//                            run_team_2 = run_team_2 + 4;
//                        }
//                        else if (score == 6)
//                        {
//                            sixes_team_2[striker_team_2]++;
//                            total_score1(6, totalscore_team_2);
//                            run_team_2 = run_team_2 + 6;
//                        }
//                        else if (score == 2) {
//                            total_score1(2, totalscore_team_2);
//                            run_team_2 = run_team_2 + 2;
//                        }
//
//                        // switch the strike if necessary
//                        if (score == 1 || score == 3 || score == 5 || i % 6 == 5) {
//                            if (score == 1) {
//                                total_score1(1, totalscore_team_2);
//                                run_team_2 = run_team_2 + 1;
//                            }
//                            else if (score == 3) {
//                                total_score1(3, totalscore_team_2);
//                                run_team_2 = run_team_2 + 3;
//                            }
//                            else if (score == 5) {
//                                total_score1(5, totalscore_team_2);
//                                run_team_2 = run_team_2 + 5;
//                            }
//                            int temp = striker_team_2;
//                            striker_team_2 = nonstriker_team_2;
//                            nonstriker_team_2 = temp;
//                        }
//                    }
//                }
//                else {
//                    out_team_2[totalwickets_team_2] = 1;
//                    wicket1++;
//                    total_wickets1(wicket1, totalwickets_team_2);
//                    wicket++;
//                    balls_team_2[striker_team_2]++;
//                    // switch to the next player 
//                    if (totalwickets_team_2 < 7) {
//                        if (striker_team_2 < nonstriker_team_2)
//                        {
//                            striker_team_2 = nonstriker_team_2;
//                            striker_team_2++;
//                        }
//                        else
//                        {
//                            striker_team_2++;
//                        }
//                    }
//                }
//
//            }
//            if (totalwickets_team_2 == 6) {
//                break;
//                cout << endl << endl;
//                cout << "----live score----" << endl;                                     // live scorecard after every ball
//                cout << arrteam2[striker_team_2] << "*" << "\t" << runs_team_2[striker_team_2] << "\t" << arrteam2[nonstriker_team_2] << "\t" << runs_team_2[nonstriker_team_2] << endl;
//                cout << endl << endl;
//                cout << "total after " << i << "." << j + 1 << " overs: " << totalscore_team_2 << " / " << totalwickets_team_2 << endl;
//            }
//            cout << endl << endl;
//            cout << "------------- live score -----------" << endl;                                     // live scorecard after every ball
//            cout << arrteam2[striker_team_2] << "*" << "\t" << runs_team_2[striker_team_2] << "\t" << arrteam2[nonstriker_team_2] << "\t" << runs_team_2[nonstriker_team_2] << endl;
//            cout << endl << endl;
//            cout << "total after " << i << "." << j + 1 << " overs: " << totalscore_team_2 << " / " << totalwickets_team_2 << endl;
//
//            if (totalscore_team_2 > totalscore_team_1) {
//                if (i == 0 || i == 7 || i == 14) {
//                    wicket_taken_2[6] = wicket_taken_2[6] + wicket;
//                    runs_conceded_2[6] = runs_conceded_2[6] + run_team_2;
//                    over_deleved_2[6] = over_deleved_2[6] + 1;
//                }
//                else if (i == 1 || i == 8 || i == 15) {
//                    wicket_taken_2[5] = wicket_taken_2[5] + wicket;
//                    runs_conceded_2[5] = runs_conceded_2[5] + run_team_2;
//                    over_deleved_2[5] = over_deleved_2[5] + 1;
//                }
//                else if (i == 2 || i == 9 || i == 16) {
//                    wicket_taken_2[4] = wicket_taken_2[4] + wicket;
//                    runs_conceded_2[4] = runs_conceded_2[4] + run_team_2;
//                    over_deleved_2[4] = over_deleved_2[4] + 1;
//                }
//                else if (i == 3 || i == 10 || i == 17) {
//                    wicket_taken_2[3] = wicket_taken_2[3] + wicket;
//                    runs_conceded_2[3] = runs_conceded_2[3] + run_team_2;
//                    over_deleved_2[3] = over_deleved_2[3] + 1;
//                }
//                else if (i == 4 || i == 11 || i == 18) {
//                    wicket_taken_2[2] = wicket_taken_2[2] + wicket;
//                    runs_conceded_2[2] = runs_conceded_2[2] + run_team_2;
//                    over_deleved_2[2] = over_deleved_2[2] + 1;
//                }
//                else if (i == 5 || i == 12 || i == 19) {
//
//                    wicket_taken_2[1] = wicket_taken_2[1] + wicket;
//                    runs_conceded_2[1] = runs_conceded_2[1] + run_team_2;
//                    over_deleved_2[1] = over_deleved_2[1] + 1;
//                }
//                else if (i == 6 || i == 13 || i == 20) {
//                    wicket_taken_2[0] = wicket_taken_2[0] + wicket;
//                    runs_conceded_2[0] = runs_conceded_2[0] + run_team_2;
//                    over_deleved_2[0] = over_deleved_2[0] + 1;
//                }
//
//                cout << endl << endl << endl;
//                cout << "Press enter to see to summary of second innings" << endl;
//                cin.get();
//                cout << "--------- NEW ZEALAND WON THE MATCH BY " << (6 - totalwickets_team_2) << " WICKETS ---------" << endl << endl;
//                cout << endl;
//                cout << "--------------- SCORECARD AT THE END OF SECOND INNINGS -------" << endl;
//                strikerate(runs_team_2, balls_team_2, strikerate_team_2);
//                battingboard(arrteam2, runs_team_2, fours_team_2, sixes_team_2, balls_team_2, strikerate_team_2);
//                // most runs scored by any batsman for New zealand
//                most_runs(arrteam2, runs_team_2);
//                economy(runs_conceded_2, over_deleved_2, economy_team_2);
//                cout << endl << endl;
//                BowlingBoard(arrteam1, over_deleved_2, runs_conceded_2, wicket_taken_2, economy_team_2);
//                cout << endl << endl;
//                // most wicket taken bowler for team 1
//                most_wickets(arrteam1, wicket_taken_2);
//                cout << endl << endl << endl;
//                ofstream outfile("match_summary.txt");                  // file handling to save the match summary
//                if (outfile.is_open()) {
//                    outfile << "------------------- MATCH SUMMARY ---------------- " << endl << endl;
//                    outfile << endl << "--------- NEW ZEALAND WON THE MATCH BY " << (6 - totalwickets_team_2) << " WICKETS ---------" << endl << endl;
//                    outfile << "------------- BATTING STATISTICS. ------------- " << endl;
//                    outfile << endl << "------- PAKISTAN ---------" << endl;
//
//
//
//                    outfile << "SCORECARD:" << endl;
//                    strikerate(runs_team_1, balls_team_1, strikerate_team_1);
//                    outfile << "PLAYERS      RUNS      BALLS      4s      6s      str" << endl;
//                    for (int i = 0; i < 7; i++) {
//                        outfile << arrteam1[i] << "        " << runs_team_1[i] << "        " << balls_team_1[i] << "        " << fours_team_1[i] << "        " << sixes_team_1[i] << "        " << strikerate_team_1[i] << endl;
//                    }
//                    outfile << endl;
//                    // most runs scored by any batsman for team 1
//                    for (int j = 0; j < 1; j++) {
//                        int most_runs_1 = 0;
//                        int most_run_1 = 0;
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_runs_1 <= runs_team_1[i]) {
//                                most_runs_1 = runs_team_1[i];
//                                most_run_1 = i;
//                            }
//                        }
//                        outfile << "MOST RUNS SCORED BY ANY BATSMAN FOR PAKISTAN IS: " << arrteam1[most_run_1] << " = " << runs_team_1[most_run_1];
//                    }
//                    outfile << endl;
//                    outfile << "TOTAL SCORE: " << totalscore_team_1 << "/" << totalwickets_team_1 << " in " << total_over1 << " overs." << endl;
//
//
//
//                    outfile << endl << "------- NEW ZEALAND ---------" << endl;
//                    outfile << "SCORECARD:" << endl;
//                    strikerate(runs_team_2, balls_team_2, strikerate_team_2);
//                    outfile << "PLAYERS      RUNS      BALLS      4s      6s      str" << endl;
//                    for (int i = 0; i < 7; i++) {
//                        outfile << arrteam2[i] << "        " << runs_team_2[i] << "        " << balls_team_2[i] << "        " << fours_team_2[i] << "        " << sixes_team_2[i] << "        " << strikerate_team_2[i] << endl;
//                    }
//                    outfile << endl;
//                    // most runs scored by any batsman for New zealand
//                    for (int j = 0; j < 1; j++) {
//                        int most_runs_2 = 0;
//                        int most_run_2 = 0;
//                        for (int i = 0; i <= 7; i++) {
//
//                            if (most_runs_2 < runs_team_2[i]) {
//                                most_runs_2 = runs_team_2[i];
//                                most_run_2 = i;
//                            }
//                        }
//                        outfile << "MOST RUNS SCORED BY ANY BATSMAN FOR PAKISTAN IS: " << arrteam2[most_run_2] << " = " << runs_team_2[most_run_2];
//                    }
//                    outfile << endl;
//                    outfile << "TOTAL SCORE: " << totalscore_team_2 << "/" << totalwickets_team_2 << " in " << total_over2 << " overs." << endl;
//
//
//
//
//                    outfile << endl << "------------- BOWLING STATISTICS. -------------" << endl;
//
//                    outfile << endl << "------- PAKISTAN ---------" << endl;
//                    outfile << "NAME      OVERS      RUNS      WICKETS      ECONOMY" << endl;
//
//                    economy(runs_conceded_2, over_deleved_2, economy_team_2);
//                    for (int k = 0; k < 7; k++)
//                    {
//                        outfile << arrteam1[k] << "        " << over_deleved_2[k] << "        " << runs_conceded_2[k] << "        " << wicket_taken_2[k] << "          " << economy_team_2[k] << "      " << endl;
//                    }
//                    outfile << endl;
//                    outfile << endl;
//
//                    // most wicket taken bowler for team 1
//                    for (int j = 0; j < 1; j++) {
//                        int most_wickets_1 = 0;
//                        int most_wicket_1 = 0;
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_wickets_1 <= wicket_taken_2[i]) {
//                                most_wickets_1 = wicket_taken_2[i];
//                                most_wicket_1 = i;
//                            }
//                        }
//                        outfile << "MOST WICKETS TAKEN BY ANY BOWLER IN SECOND INNINGS IS: " << arrteam1[most_wicket_1] << " = " << wicket_taken_2[most_wicket_1];
//                    }
//
//                    outfile << endl << "------- NEW ZEALAND ---------" << endl;
//                    outfile << "NAME      OVERS      RUNS      WICKETS      ECONOMY" << endl;
//                    economy(runs_conceded_1, over_deleved_1, economy_team_1);
//                    for (int k = 0; k < 7; k++)
//                    {
//                        outfile << arrteam2[k] << "        " << over_deleved_1[k] << "        " << runs_conceded_1[k] << "        " << wicket_taken_1[k] << "        " << economy_team_1[k] << "\t" << endl;
//                    }
//                    outfile << endl;
//                    outfile << endl;
//                    outfile << endl;
//                    // most wicket taken bowler for team 2
//                    for (int j = 0; j < 1; j++) {
//                        int most_wickets_2 = 0;
//                        int most_wicket_2 = 0;
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_wickets_2 <= wicket_taken_1[i]) {
//                                most_wickets_2 = wicket_taken_1[i];
//                                most_wicket_2 = i;
//                            }
//                        }
//                        outfile << "MOST WICKETS TAKEN BY BOWLER IN SECOND INNINGS IS: " << arrteam2[most_wicket_2] << " = " << wicket_taken_1[most_wicket_2];
//                    }
//                    outfile << endl;
//                    outfile << endl;
//                    outfile << endl;
//                    outfile << endl;
//                    // LOOP FOR BOWLER OF THE MATCH
//                    for (int j = 0; j < 1; j++) {
//                        int most_wickets_2 = 0;
//                        int most_wicket_2 = 0;
//                        int most_wickets_1 = 0;
//                        int most_wicket_1 = 0;
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_wickets_2 <= wicket_taken_1[i]) {
//                                most_wickets_2 = wicket_taken_1[i];
//                                most_wicket_2 = i;
//                            }
//                        }
//
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_wickets_1 <= wicket_taken_2[i]) {
//                                most_wickets_1 = wicket_taken_2[i];
//                                most_wicket_1 = i;
//                            }
//                        }
//                        if (wicket_taken_1[most_wicket_2] > wicket_taken_2[most_wicket_1]) {
//                            outfile << "BOWLER OF THE MARCH IS: " << arrteam2[most_wicket_2] << " = " << wicket_taken_1[most_wicket_2];
//
//                        }
//                        else {
//                            outfile << "BOWLER OF THE MARCH IS: " << arrteam1[most_wicket_1] << " = " << wicket_taken_2[most_wicket_1];
//
//                        }
//                        outfile << endl;
//                        outfile << endl;
//                        outfile << endl;
//                        outfile << endl;
//                        // LOOP FOR MAN OF THE MATCH
//                        for (int j = 0; j < 1; j++) {
//                            int most_runs_1 = 0;
//                            int most_run_1 = 0;
//                            int most_runs_2 = 0;
//                            int most_run_2 = 0;
//                            for (int i = 0; i < 7; i++) {
//
//                                if (most_runs_1 <= runs_team_1[i]) {
//                                    most_runs_1 = runs_team_1[i];
//                                    most_run_1 = i;
//                                }
//                            }
//                            for (int i = 0; i < 7; i++) {
//
//                                if (most_runs_2 <= runs_team_2[i]) {
//                                    most_runs_2 = runs_team_2[i];
//                                    most_run_2 = i;
//                                }
//                            }
//                            if (runs_team_2[most_run_2] > runs_team_1[most_run_1]) {
//                                outfile << "MAN OF THE MATCH IS: " << arrteam2[most_run_2] << " = " << runs_team_2[most_run_2];
//
//                            }
//                            else {
//                                outfile << "MAN OF THE MATCH IS: " << arrteam1[most_run_1] << " = " << runs_team_1[most_run_1];
//
//                            }
//                        }
//                    }
//                }
//                else {
//                    cout << "Failed to create file." << endl;
//                    system("CLS");
//                }
//                int m ;
//                cout << "Press 0 to see the match summary" << endl;
//                cin >> m;
//                if (m == 0) {
//                    display_match_summary_file();
//                }
//                else {
//                    system("CLS");
//                }
//                flag = 1;
//            }
//        }
//        total_over(1, total_over2);
//
//        if (i == 0 || i == 7 || i == 14) {
//            wicket_taken_2[6] = wicket_taken_2[6] + wicket;
//            runs_conceded_2[6] = runs_conceded_2[6] + run_team_2;
//            over_deleved_2[6] = over_deleved_2[6] + 1;
//        }
//        else if (i == 1 || i == 8 || i == 15) {
//            wicket_taken_2[5] = wicket_taken_2[5] + wicket;
//            runs_conceded_2[5] = runs_conceded_2[5] + run_team_2;
//            over_deleved_2[5] = over_deleved_2[5] + 1;
//        }
//        else if (i == 2 || i == 9 || i == 16) {
//            wicket_taken_2[4] = wicket_taken_2[4] + wicket;
//            runs_conceded_2[4] = runs_conceded_2[4] + run_team_2;
//            over_deleved_2[4] = over_deleved_2[4] + 1;
//        }
//        else if (i == 3 || i == 10 || i == 17) {
//            wicket_taken_2[3] = wicket_taken_2[3] + wicket;
//            runs_conceded_2[3] = runs_conceded_2[3] + run_team_2;
//            over_deleved_2[3] = over_deleved_2[3] + 1;
//        }
//        else if (i == 4 || i == 11 || i == 18) {
//            wicket_taken_2[2] = wicket_taken_2[2] + wicket;
//            runs_conceded_2[2] = runs_conceded_2[2] + run_team_2;
//            over_deleved_2[2] = over_deleved_2[2] + 1;
//        }
//        else if (i == 5 || i == 12 || i == 19) {
//
//            wicket_taken_2[1] = wicket_taken_2[1] + wicket;
//            runs_conceded_2[1] = runs_conceded_2[1] + run_team_2;
//            over_deleved_2[1] = over_deleved_2[1] + 1;
//        }
//        else if (i == 6 || i == 13 || i == 20) {
//            wicket_taken_2[0] = wicket_taken_2[0] + wicket;
//            runs_conceded_2[0] = runs_conceded_2[0] + run_team_2;
//            over_deleved_2[0] = over_deleved_2[0] + 1;
//        }
//
//        if (flag == 0) {
//            cout << endl << "press enter to continue game." << endl;
//
//            cin.get();
//            strikerate(runs_team_2, balls_team_2, strikerate_team_2);
//            // display scorecard
//            battingboard(arrteam2, runs_team_2, fours_team_2, sixes_team_2, balls_team_2, strikerate_team_2);
//            cout << "total score: " << totalscore_team_2 << " / " << totalwickets_team_2 << " in " << total_over2 << " overs." << endl;
//
//            cout << endl << "------- pakistan ---------" << endl;
//            economy(runs_conceded_2, over_deleved_2, economy_team_2);
//            BowlingBoard(arrteam1, over_deleved_2, runs_conceded_2, wicket_taken_2, economy_team_2);
//
//
//            cout << endl << "press enter to continue game." << endl;
//
//            cin.get();
//        }
//    }
//
//    if (totalscore_team_1 > totalscore_team_2 && flag == 0) {
//        cout << endl << endl << endl;
//        cout << "---------- PAKISTAN WON THE MATCH BY " << (totalscore_team_1 - totalscore_team_2) << " RUNS ---------" << endl << endl;
//        cout << endl << "SCORECARD AT THE END OF THE SEDOND INNINGS IS: " << endl;
//        strikerate(runs_team_2, balls_team_2, strikerate_team_2);
//        cout << endl << "press enter to continue game." << endl;
//        cin.get();
//        // display scorecard
//        battingboard(arrteam2, runs_team_2, fours_team_2, sixes_team_2, balls_team_2, strikerate_team_2);
//        // most runs scored by new zealand batsman
//        most_runs(arrteam2, runs_team_2);
//
//        cout << endl << endl;
//        economy(runs_conceded_2, over_deleved_2, economy_team_2);
//        BowlingBoard(arrteam1, over_deleved_2, runs_conceded_2, wicket_taken_2, economy_team_2);                        //bowling board
//        cout << endl << endl;
//        most_wickets(arrteam1, wicket_taken_2);
//        cout << endl << endl;
//        cout << "TOTAL SCORE: " << totalscore_team_2 << "/" << totalwickets_team_2 << " in " << total_over2 << " overs." << endl;
//        ofstream outfile("match_summary.txt");                  // file handling to save the match summary
//        if (outfile.is_open()) {
//            outfile << "------------------- MATCH SUMMARY ---------------- " << endl << endl;
//            outfile << endl << "---------- PAKISTAN WON THE MATCH BY " << (totalscore_team_1 - totalscore_team_2) << " RUNS ---------" << endl << endl;
//            outfile << "------------- BATTING STATISTICS. ------------- " << endl;
//            outfile << endl << "------- PAKISTAN ---------" << endl;
//
//
//
//            outfile << "SCORECARD:" << endl;
//            strikerate(runs_team_1, balls_team_1, strikerate_team_1);
//            outfile << "PLAYERS      RUNS      BALLS      4s      6s      str" << endl;
//            for (int i = 0; i < 7; i++) {
//                outfile << arrteam1[i] << "        " << runs_team_1[i] << "        " << balls_team_1[i] << "        " << fours_team_1[i] << "        " << sixes_team_1[i] << "        " << strikerate_team_1[i] << endl;
//            }
//            outfile << endl;
//            outfile << endl;
//
//            // most runs scored by any batsman for team 1
//            for (int j = 0; j < 1; j++) {
//                int most_runs_1 = 0;
//                int most_run_1 = 0;
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_runs_1 <= runs_team_1[i]) {
//                        most_runs_1 = runs_team_1[i];
//                        most_run_1 = i;
//                    }
//                }
//                outfile << "MOST RUNS SCORED BY ANY BATSMAN FOR PAKISTAN IS: " << arrteam1[most_run_1] << " = " << runs_team_1[most_run_1];
//            }
//            outfile << endl;
//            outfile << endl;
//
//            outfile << "TOTAL SCORE: " << totalscore_team_1 << "/" << totalwickets_team_1 << " in " << total_over1 << " overs." << endl;
//
//
//
//            outfile << endl << "------- NEW ZEALAND ---------" << endl;
//            outfile << "SCORECARD:" << endl;
//            strikerate(runs_team_2, balls_team_2, strikerate_team_2);
//            outfile << "PLAYERS      RUNS      BALLS      4s      6s      str" << endl;
//            for (int i = 0; i < 7; i++) {
//                outfile << arrteam2[i] << "        " << runs_team_2[i] << "        " << balls_team_2[i] << "        " << fours_team_2[i] << "        " << sixes_team_2[i] << "        " << strikerate_team_2[i] << endl;
//            }
//            outfile << endl;
//            outfile << endl;
//
//            // most runs scored by any batsman for New zealand
//            for (int j = 0; j < 1; j++) {
//                int most_runs_2 = 0;
//                int most_run_2 = 0;
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_runs_2 <= runs_team_2[i]) {
//                        most_runs_2 = runs_team_2[i];
//                        most_run_2 = i;
//                    }
//                }
//                outfile << "MOST RUNS SCORED BY ANY BATSMAN FOR PAKISTAN IS: " << arrteam2[most_run_2] << " = " << runs_team_2[most_run_2];
//            }
//            outfile << endl;
//            outfile << endl;
//
//            outfile << "TOTAL SCORE: " << totalscore_team_2 << "/" << totalwickets_team_2 << " in " << total_over2 << " overs." << endl;
//
//
//
//            outfile << endl;
//
//            outfile << endl << "------------- BOWLING STATISTICS. -------------" << endl;
//            outfile << endl;
//
//            outfile << endl << "------- PAKISTAN ---------" << endl;
//            outfile << "NAME      OVERS      RUNS      WICKETS      ECONOMY" << endl;
//
//            economy(runs_conceded_2, over_deleved_2, economy_team_2);
//            for (int k = 0; k < 7; k++)
//            {
//                outfile << arrteam1[k] << "        " << over_deleved_2[k] << "        " << runs_conceded_2[k] << "        " << wicket_taken_2[k] << "          " << economy_team_2[k] << "      " << endl;
//            }
//            outfile << endl;
//            outfile << endl;
//
//            // most wicket taken bowler for team 1
//            for (int j = 0; j < 1; j++) {
//                int most_wickets_1 = 0;
//                int most_wicket_1 = 0;
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_wickets_1 <= wicket_taken_2[i]) {
//                        most_wickets_1 = wicket_taken_2[i];
//                        most_wicket_1 = i;
//                    }
//                }
//                outfile << "MOST WICKETS TAKEN BY ANY BOWLER IN SECOND INNINGS IS: " << arrteam1[most_wicket_1] << " = " << wicket_taken_2[most_wicket_1];
//            }
//            outfile << endl;
//
//            outfile << endl << "------- NEW ZEALAND ---------" << endl;
//            outfile << "NAME      OVERS      RUNS      WICKETS      ECONOMY" << endl;
//            economy(runs_conceded_1, over_deleved_1, economy_team_1);
//            for (int k = 0; k < 7; k++)
//            {
//                outfile << arrteam2[k] << "        " << over_deleved_1[k] << "        " << runs_conceded_1[k] << "        " << wicket_taken_1[k] << "        " << economy_team_1[k] << "\t" << endl;
//            }
//            outfile << endl;
//            outfile << endl;
//
//            // most wicket taken bowler for team 2
//            for (int j = 0; j < 1; j++) {
//                int most_wickets_2 = 0;
//                int most_wicket_2 = 0;
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_wickets_2 <= wicket_taken_1[i]) {
//                        most_wickets_2 = wicket_taken_1[i];
//                        most_wicket_2 = i;
//                    }
//                }
//                outfile << "MOST WICKETS TAKEN BY ANY BOWLER IN SECOND INNINGS IS: " << arrteam2[most_wicket_2] << " = " << wicket_taken_1[most_wicket_2];
//            }
//            outfile << endl;
//            outfile << endl;
//
//            // LOOP FOR MAN OF THE MATCH
//            for (int j = 0; j < 1; j++) {
//                int most_runs_1 = 0;
//                int most_run_1 = 0;
//                int most_runs_2 = 0;
//                int most_run_2 = 0;
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_runs_1 <= runs_team_1[i]) {
//                        most_runs_1 = runs_team_1[i];
//                        most_run_1 = i;
//                    }
//                }
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_runs_2 <= runs_team_2[i]) {
//                        most_runs_2 = runs_team_2[i];
//                        most_run_2 = i;
//                    }
//                }
//                if (runs_team_2[most_run_2] > runs_team_1[most_run_1]) {
//                    outfile << "MAN OF THE MATCH: " << arrteam2[most_run_2] << " = " << runs_team_2[most_run_2] << endl;
//
//                }
//                else {
//                    outfile << "MAN OF THE MATCH: " << arrteam1[most_run_1] << " = " << runs_team_1[most_run_1] << endl;
//
//                }
//            }
//            // LOOP FOR BOWLER OF THE MATCH
//            for (int j = 0; j < 1; j++) {
//                int most_wickets_2 = 0;
//                int most_wicket_2 = 0;
//                int most_wickets_1 = 0;
//                int most_wicket_1 = 0;
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_wickets_2 <= wicket_taken_1[i]) {
//                        most_wickets_2 = wicket_taken_1[i];
//                        most_wicket_2 = i;
//                    }
//                }
//
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_wickets_1 <= wicket_taken_2[i]) {
//                        most_wickets_1 = wicket_taken_2[i];
//                        most_wicket_1 = i;
//                    }
//                }
//                if (wicket_taken_1[most_wicket_2] > wicket_taken_2[most_wicket_1]) {
//                    outfile << "BOWLER OF THE MATCH IS: " << arrteam2[most_wicket_2] << " = " << wicket_taken_1[most_wicket_2];
//
//                }
//                else {
//                    outfile << "BOWLER OF THE MATCH IS: " << arrteam1[most_wicket_1] << " = " << wicket_taken_2[most_wicket_1];
//                }
//            }
//            outfile << endl;
//            outfile << endl;
//
//
//        }
//        else {
//            cout << "Failed to create file." << endl;
//            system("CLS");
//        }
//        int m;
//        cout << "Press 0 to see the match summary";
//        cin >> m;
//        if (m == 0) {
//            display_match_summary_file();
//        }
//        else {
//            system("CLS");
//        }
//    }
//}
//void team2(int over, char arrteam1[10][20], char arrteam2[10][20]) {                                                                    // function if team 2 won the toss
//    cout << endl << "press enter to continue game." << endl;
//    cin.get();
//    // declare variables for team 1.
//    int runs_team_2[7] = { 0 }, balls_team_2[7] = { 0 }, fours_team_2[7] = { 0 }, sixes_team_2[7] = { 0 }, out_team_2[7] = { 0 }, wicket_taken_2[7] = { 0 }, runs_conceded_2[7] = { 0 }, over_deleved_2[7] = { 0 };
//    float strikerate_team_2[7] = { 0.00 };
//    float economy_team_2[7] = { 0.00 };
//    int  striker_team_2 = 0, nonstriker_team_2 = 1;
//    int totalscore_team_2 = 0, totalwickets_team_2 = 0;
//    int total_over3 = 0;
//    // seed the random number generator
//    (srand(time(nullptr)));
//    // input data for each ball
//    for (int i = 0; i < over && totalwickets_team_2 < 6; i++) {
//        int wicket = 0, run_team_2 = 0;
//        for (int j = 0; j < 6; j++) {
//            int wicket1 = 0;
//            if (totalwickets_team_2 < 4) {
//                int n = rand() % 11 - 1;
//                cout << endl;
//                cout << " n= " << n << endl;
//                if (n >= 0 && n < 10) {
//                    int score = rand() % 7;
//                    if (score >= 0) {
//                        cout << endl << "score= " << score;
//                        runs_team_2[striker_team_2] += score;
//                        balls_team_2[striker_team_2]++;
//                        if (score == 4)
//                        {
//                            fours_team_2[striker_team_2]++;
//                            total_score1(4, totalscore_team_2);
//
//                            run_team_2 = run_team_2 + 4;
//                        }
//                        else if (score == 6)
//                        {
//                            sixes_team_2[striker_team_2]++;
//                            total_score1(6, totalscore_team_2);
//                            run_team_2 = run_team_2 + 6;
//                        }
//                        else if (score == 2) {
//                            total_score1(2, totalscore_team_2);
//                            run_team_2 = run_team_2 + 2;
//                        }
//
//                        // switch the strike if necessary
//                        if (score == 1 || score == 3 || score == 5 || i % 6 == 5) {
//                            if (score == 1) {
//                                total_score1(1, totalscore_team_2);
//                                run_team_2 = run_team_2 + 1;
//                            }
//                            else if (score == 3) {
//                                total_score1(3, totalscore_team_2);
//                                run_team_2 = run_team_2 + 3;
//                            }
//                            else if (score == 5) {
//                                total_score1(5, totalscore_team_2);
//                                run_team_2 = run_team_2 + 5;
//                            }
//                            int temp = striker_team_2;
//                            striker_team_2 = nonstriker_team_2;
//                            nonstriker_team_2 = temp;
//                        }
//                    }
//                }
//                else {
//                    out_team_2[totalwickets_team_2] = 1;
//                    wicket1++;
//                    total_wickets1(wicket1, totalwickets_team_2);
//                    wicket++;
//                    balls_team_2[striker_team_2]++;
//                    // switch to the next player 
//                    if (totalwickets_team_2 < 7) {
//                        if (striker_team_2 < nonstriker_team_2)
//                        {
//                            striker_team_2 = nonstriker_team_2;
//                            striker_team_2++;
//                        }
//                        else
//                        {
//                            striker_team_2++;
//                        }
//                    }
//                }
//            }
//            else if (totalwickets_team_2 >= 4 && totalwickets_team_2 < 6) {
//                int n = rand() % 2 - 1;
//                if (n == 0) {
//                    int score = rand() % 7;
//                    if (score >= 0) {
//                        cout << endl << "score= " << score;
//                        runs_team_2[striker_team_2] += score;
//                        balls_team_2[striker_team_2]++;
//                        if (score == 4)
//                        {
//                            fours_team_2[striker_team_2]++;
//                            total_score1(4, totalscore_team_2);
//                            run_team_2 = run_team_2 + 4;
//                        }
//                        else if (score == 6)
//                        {
//                            sixes_team_2[striker_team_2]++;
//                            total_score1(6, totalscore_team_2);
//                            run_team_2 = run_team_2 + 6;
//                        }
//                        else if (score == 2) {
//                            total_score1(2, totalscore_team_2);
//                            run_team_2 = run_team_2 + 2;
//                        }
//
//                        // switch the strike if necessary
//                        if (score == 1 || score == 3 || score == 5 || i % 6 == 5) {
//                            if (score == 1) {
//                                total_score1(1, totalscore_team_2);
//                                run_team_2 = run_team_2 + 1;
//                            }
//                            else if (score == 3) {
//                                total_score1(3, totalscore_team_2);
//                                run_team_2 = run_team_2 + 3;
//                            }
//                            else if (score == 5) {
//                                total_score1(5, totalscore_team_2);
//                                run_team_2 = run_team_2 + 5;
//                            }
//                            int temp = striker_team_2;
//                            striker_team_2 = nonstriker_team_2;
//                            nonstriker_team_2 = temp;
//                        }
//                    }
//                }
//                else {
//                    out_team_2[totalwickets_team_2] = 1;
//                    wicket1++;
//                    total_wickets1(wicket1, totalwickets_team_2);
//                    wicket++;
//                    balls_team_2[striker_team_2]++;
//                    // switch to the next player 
//                    if (totalwickets_team_2 < 7) {
//                        if (striker_team_2 < nonstriker_team_2)
//                        {
//                            striker_team_2 = nonstriker_team_2;
//                            striker_team_2++;
//                        }
//                        else
//                        {
//                            striker_team_2++;
//                        }
//                    }
//                }
//
//            }
//            if (totalwickets_team_2 == 6) {
//                break;
//                cout << endl << endl;                                    // live score after every ball
//                cout << "----live score----" << endl;
//                cout << arrteam2[striker_team_2] << "*" << "\t" << runs_team_2[striker_team_2] << "\t" << arrteam2[nonstriker_team_2] << "\t" << runs_team_2[nonstriker_team_2] << endl;
//                cout << endl << endl;
//                cout << "total after " << i << "." << j + 1 << " overs: " << totalscore_team_2 << " / " << totalwickets_team_2 << endl;
//            }
//            cout << endl << endl;
//            cout << "----live score----" << endl;                               // live score after every ball
//            cout << arrteam2[striker_team_2] << "*" << "\t" << runs_team_2[striker_team_2] << "\t" << arrteam2[nonstriker_team_2] << "\t" << runs_team_2[nonstriker_team_2] << endl;
//            cout << endl << endl;
//            cout << "total after " << i << "." << j + 1 << " overs: " << totalscore_team_2 << " / " << totalwickets_team_2 << endl;
//        }
//        total_over(1, total_over3);
//        if (i == 0 || i == 7 || i == 14) {
//            wicket_taken_2[6] = wicket_taken_2[6] + wicket;
//            runs_conceded_2[6] = runs_conceded_2[6] + run_team_2;
//            over_deleved_2[6] = over_deleved_2[6] + 1;
//        }
//        else if (i == 1 || i == 8 || i == 15) {
//            wicket_taken_2[5] = wicket_taken_2[5] + wicket;
//            runs_conceded_2[5] = runs_conceded_2[5] + run_team_2;
//            over_deleved_2[5] = over_deleved_2[5] + 1;
//        }
//        else if (i == 2 || i == 9 || i == 16) {
//            wicket_taken_2[4] = wicket_taken_2[4] + wicket;
//            runs_conceded_2[4] = runs_conceded_2[4] + run_team_2;
//            over_deleved_2[4] = over_deleved_2[4] + 1;
//        }
//        else if (i == 3 || i == 10 || i == 17) {
//            wicket_taken_2[3] = wicket_taken_2[3] + wicket;
//            runs_conceded_2[3] = runs_conceded_2[3] + run_team_2;
//            over_deleved_2[3] = over_deleved_2[3] + 1;
//        }
//        else if (i == 4 || i == 11 || i == 18) {
//            wicket_taken_2[2] = wicket_taken_2[2] + wicket;
//            runs_conceded_2[2] = runs_conceded_2[2] + run_team_2;
//            over_deleved_2[2] = over_deleved_2[2] + 1;
//        }
//        else if (i == 5 || i == 12 || i == 19) {
//
//            wicket_taken_2[1] = wicket_taken_2[1] + wicket;
//            runs_conceded_2[1] = runs_conceded_2[1] + run_team_2;
//            over_deleved_2[1] = over_deleved_2[1] + 1;
//        }
//        else if (i == 6 || i == 13 || i == 20) {
//            wicket_taken_2[0] = wicket_taken_2[0] + wicket;
//            runs_conceded_2[0] = runs_conceded_2[0] + run_team_2;
//            over_deleved_2[0] = over_deleved_2[0] + 1;
//        }
//        strikerate(runs_team_2, balls_team_2, strikerate_team_2);
//        cout << endl << "press enter to continue game." << endl;
//        cin.get();
//        // display scorecard
//        cout << endl << "------- NEW ZEALAND BATTING ---------" << endl;
//        battingboard(arrteam2, runs_team_2, fours_team_2, sixes_team_2, balls_team_2, strikerate_team_2);
//        cout << "total score: " << totalscore_team_2 << " / " << totalwickets_team_2 << " in " << total_over3 << " overs." << endl;
//        cout << endl << "------- pakistan bowling ---------" << endl;
//        economy(runs_conceded_2, over_deleved_2, economy_team_2);
//        BowlingBoard(arrteam1, over_deleved_2, runs_conceded_2, wicket_taken_2, economy_team_2);
//        cout << endl << "press enter to continue game." << endl;
//        cin.get();
//    }
//    cout << "press enter to see summary of first innings." << endl;
//    cin.get();
//    cout << endl << "SCORECARD AT THE END OF THE FIRST INNINGS IS: " << endl;
//    cout << endl << "------- NEW ZEALAND BATTING ---------" << endl;
//    strikerate(runs_team_2, balls_team_2, strikerate_team_2);
//    // display scorecard
//    battingboard(arrteam2, runs_team_2, fours_team_2, sixes_team_2, balls_team_2, strikerate_team_2);
//    cout << endl << endl;
//    // most runs scored by any batsman for new zealand
//    most_runs(arrteam2, runs_team_2);
//    cout << endl << endl;
//    //bowling board
//    economy(runs_conceded_2, over_deleved_2, economy_team_2);
//    BowlingBoard(arrteam1, over_deleved_2, runs_conceded_2, wicket_taken_2, economy_team_2);
//    cout << endl;
//    // most wicket taken bowler for pakistan
//    most_wickets(arrteam1, wicket_taken_2);
//    cout << endl;
//    cout << "TOTAL TARGET: " << totalscore_team_2 << "/" << totalwickets_team_2 << " in " << total_over3 << " overs." << endl;
//    cout << endl << endl;
//    cout << "------------- SECOND INNINGS: ----------------  " << endl << endl;
//    cout << endl << "press enter to continue game." << endl;
//    cin.get();
//    cout << "------------- PAKISTAN BATTING: ----------------  " << endl << endl;
//    // declare variables for team 2.
//    cout << endl << "press enter to continue game." << endl;
//    cin.get();
//    int runs_team_1[7] = { 0 }, balls_team_1[7] = { 0 }, fours_team_1[7] = { 0 }, sixes_team_1[7] = { 0 }, out_team_1[7] = { 0 }, wicket_taken_1[7] = { 0 }, runs_conceded_1[7] = { 0 }, over_deleved_1[7] = { 0 };
//    float strikerate_team_1[7] = { 0.00 };
//    float economy_team_1[7] = { 0.00 };
//    int striker_team_1 = 0, nonstriker_team_1 = 1;
//    int totalscore_team_1 = 0, totalwickets_team_1 = 0;
//    int total_over4 = 0;
//    bool flag = 0;
//    // seed the random number generator
//    (srand(time(nullptr)));
//    // input data for each ball
//    for (int i = 0; i < over && totalwickets_team_1 < 6; i++) {
//        int wicket = 0, run_team_1 = 0;
//        for (int j = 0; j < 6 && flag == 0; j++) {
//            int wicket1 = 0;
//            if (totalwickets_team_1 < 4) {
//                int n = rand() % 11 - 1;
//                cout << endl;
//                cout << " n= " << n << endl;
//                if (n >= 0 && n < 10) {
//                    int score = rand() % 7;
//                    if (score >= 0) {
//                        cout << endl << "score= " << score;
//                        runs_team_1[striker_team_1] += score;
//                        balls_team_1[striker_team_1]++;
//                        if (score == 4)
//                        {
//                            fours_team_1[striker_team_1]++;
//                            total_score1(4, totalscore_team_1);
//
//                            run_team_1 = run_team_1 + 4;
//                        }
//                        else if (score == 6)
//                        {
//                            sixes_team_1[striker_team_1]++;
//                            total_score1(6, totalscore_team_1);
//                            run_team_1 = run_team_1 + 6;
//                        }
//                        else if (score == 2) {
//                            total_score1(2, totalscore_team_1);
//                            run_team_1 = run_team_1 + 2;
//                        }
//
//                        // switch the strike if necessary
//                        if (score == 1 || score == 3 || score == 5 || i % 6 == 5) {
//                            if (score == 1) {
//                                total_score1(1, totalscore_team_1);
//                                run_team_1 = run_team_1 + 1;
//                            }
//                            else if (score == 3) {
//                                total_score1(3, totalscore_team_1);
//                                run_team_1 = run_team_1 + 3;
//                            }
//                            else if (score == 5) {
//                                total_score1(5, totalscore_team_1);
//                                run_team_1 = run_team_1 + 5;
//                            }
//                            int temp = striker_team_1;
//                            striker_team_1 = nonstriker_team_1;
//                            nonstriker_team_1 = temp;
//                        }
//                    }
//                }
//                else {
//                    out_team_2[totalwickets_team_1] = 1;
//                    wicket1++;
//                    total_wickets1(wicket1, totalwickets_team_1);
//                    wicket++;
//                    balls_team_1[striker_team_1]++;
//                    // switch to the next player 
//                    if (totalwickets_team_1 < 7) {
//                        if (striker_team_1 < nonstriker_team_1)
//                        {
//                            striker_team_1 = nonstriker_team_1;
//                            striker_team_1++;
//                        }
//                        else
//                        {
//                            striker_team_1++;
//                        }
//                    }
//                }
//            }
//            else if (totalwickets_team_1 >= 4 && totalwickets_team_1 < 6) {
//                int n = rand() % 2 - 1;
//                if (n == 0) {
//                    int score = rand() % 7;
//                    if (score >= 0) {
//                        cout << endl << "score= " << score;
//                        runs_team_1[striker_team_1] += score;
//                        balls_team_1[striker_team_1]++;
//                        if (score == 4)
//                        {
//                            fours_team_1[striker_team_1]++;
//                            total_score1(4, totalscore_team_1);
//                            run_team_1 = run_team_1 + 4;
//                        }
//                        else if (score == 6)
//                        {
//                            sixes_team_1[striker_team_1]++;
//                            total_score1(6, totalscore_team_1);
//                            run_team_1 = run_team_1 + 6;
//                        }
//                        else if (score == 2) {
//                            total_score1(2, totalscore_team_1);
//                            run_team_1 = run_team_1 + 2;
//                        }
//
//                        // switch the strike if necessary
//                        if (score == 1 || score == 3 || score == 5 || i % 6 == 5) {
//                            if (score == 1) {
//                                total_score1(1, totalscore_team_1);
//                                run_team_1 = run_team_1 + 1;
//                            }
//                            else if (score == 3) {
//                                total_score1(3, totalscore_team_1);
//                                run_team_1 = run_team_1 + 3;
//                            }
//                            else if (score == 5) {
//                                total_score1(5, totalscore_team_1);
//                                run_team_1 = run_team_1 + 5;
//                            }
//                            int temp = striker_team_1;
//                            striker_team_1 = nonstriker_team_1;
//                            nonstriker_team_1 = temp;
//                        }
//                    }
//                }
//                else {
//                    out_team_1[totalwickets_team_1] = 1;
//                    wicket1++;
//                    total_wickets1(wicket1, totalwickets_team_1);
//                    wicket++;
//                    balls_team_1[striker_team_1]++;
//                    // switch to the next player 
//                    if (totalwickets_team_1 < 7) {
//                        if (striker_team_1 < nonstriker_team_1)
//                        {
//                            striker_team_1 = nonstriker_team_1;
//                            striker_team_1++;
//                        }
//                        else
//                        {
//                            striker_team_1++;
//                        }
//                    }
//                }
//
//            }
//            if (totalwickets_team_1 == 6) {
//                break;
//                cout << endl << endl;
//                cout << "----live score----" << endl;
//                cout << arrteam1[striker_team_1] << "*" << "\t" << runs_team_1[striker_team_1] << "\t" << arrteam1[nonstriker_team_1] << "\t" << runs_team_1[nonstriker_team_1] << endl;
//                cout << endl << endl;
//                cout << "total after " << i << "." << j + 1 << " overs: " << totalscore_team_1 << " / " << totalwickets_team_1 << endl;
//            }
//            cout << endl << endl;                                   // live scorecard after every ball
//            cout << "------------- live score -----------" << endl;
//            cout << arrteam1[striker_team_1] << "*" << "\t" << runs_team_1[striker_team_1] << "\t" << arrteam1[nonstriker_team_1] << "\t" << runs_team_1[nonstriker_team_1] << endl;
//            cout << endl << endl;
//            cout << "total after " << i << "." << j + 1 << " overs: " << totalscore_team_1 << " / " << totalwickets_team_1 << endl;
//            if (totalscore_team_1 > totalscore_team_2) {
//                if (i == 0 || i == 7 || i == 14) {
//                    wicket_taken_1[6] = wicket_taken_1[6] + wicket;
//                    runs_conceded_1[6] = runs_conceded_1[6] + run_team_1;
//                    over_deleved_1[6] = over_deleved_1[6] + 1;
//                }
//                else if (i == 1 || i == 8 || i == 15) {
//                    wicket_taken_1[5] = wicket_taken_1[5] + wicket;
//                    runs_conceded_1[5] = runs_conceded_1[5] + run_team_1;
//                    over_deleved_1[5] = over_deleved_1[5] + 1;
//                }
//                else if (i == 2 || i == 9 || i == 16) {
//                    wicket_taken_1[4] = wicket_taken_1[4] + wicket;
//                    runs_conceded_1[4] = runs_conceded_1[4] + run_team_1;
//                    over_deleved_1[4] = over_deleved_1[4] + 1;
//                }
//                else if (i == 3 || i == 10 || i == 17) {
//                    wicket_taken_1[3] = wicket_taken_1[3] + wicket;
//                    runs_conceded_1[3] = runs_conceded_1[3] + run_team_1;
//                    over_deleved_1[3] = over_deleved_1[3] + 1;
//                }
//                else if (i == 4 || i == 11 || i == 18) {
//                    wicket_taken_1[2] = wicket_taken_1[2] + wicket;
//                    runs_conceded_1[2] = runs_conceded_1[2] + run_team_1;
//                    over_deleved_1[2] = over_deleved_1[2] + 1;
//                }
//                else if (i == 5 || i == 12 || i == 19) {
//
//                    wicket_taken_1[1] = wicket_taken_1[1] + wicket;
//                    runs_conceded_1[1] = runs_conceded_1[1] + run_team_1;
//                    over_deleved_1[1] = over_deleved_1[1] + 1;
//                }
//                else if (i == 6 || i == 13 || i == 20) {
//                    wicket_taken_1[0] = wicket_taken_1[0] + wicket;
//                    runs_conceded_1[0] = runs_conceded_1[0] + run_team_1;
//                    over_deleved_1[0] = over_deleved_1[0] + 1;
//                }
//                cout << endl << endl << endl;
//                cout << "Press enter to see to summary of second innings" << endl;
//                cin.get();
//                cout << endl << "--------- PAKISTAN WON THE MATCH BY " << (6 - totalwickets_team_1) << " WICKETS ---------" << endl << endl;
//                cout << endl;
//                cout << "--------------- SCORECARD AT THE END OF SECOND INNINGS IS -------" << endl;
//                strikerate(runs_team_1, balls_team_1, strikerate_team_1);
//                battingboard(arrteam1, runs_team_1, fours_team_1, sixes_team_1, balls_team_1, strikerate_team_1);
//                cout << endl;
//                // most runs scored by any batsman for pakistan
//                most_runs(arrteam1, runs_team_1);
//                cout << endl << "TOTAL SCORE: " << totalscore_team_1 << "/" << totalwickets_team_1 << " in " << total_over4 << " overs." << endl;
//                economy(runs_conceded_1, over_deleved_1, economy_team_1);
//                BowlingBoard(arrteam2, over_deleved_1, runs_conceded_1, wicket_taken_1, economy_team_1);
//                // most wicket taken bowler for new zealand
//                most_wickets(arrteam2, wicket_taken_1);
//                cout << endl << endl << endl;
//                cout << "enter to see the match summary" << endl;
//                cin.get();
//                cout << endl << endl;
//                ofstream outfile("match_summary.txt");                          // file handling to save the match summary
//                if (outfile.is_open()) {
//                    outfile << "------------------- MATCH SUMMARY ---------------- " << endl << endl;
//                    outfile << endl << "--------- PAKISTAN WON THE MATCH BY " << (6 - totalwickets_team_2) << " WICKETS ---------" << endl << endl;
//                    outfile << "------------- BATTING STATISTICS. ------------- " << endl;
//                    outfile << endl << "------- PAKISTAN ---------" << endl;
//                    outfile << "SCORECARD:" << endl;
//                    strikerate(runs_team_1, balls_team_1, strikerate_team_1);
//                    outfile << "PLAYER      RUNS      BALLS      4s      6s      str" << endl;
//                    for (int i = 0; i < 7; i++) {
//                        outfile << arrteam1[i] << "        " << runs_team_1[i] << "        " << balls_team_1[i] << "        " << fours_team_1[i] << "        " << sixes_team_1[i] << "        " << strikerate_team_1[i] << endl;
//                    }
//                    // most runs scored by any batsman for pakistan
//                    for (int j = 0; j < 1; j++) {
//                        int most_runs_1 = 0;
//                        int most_run_1 = 0;
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_runs_1 <= runs_team_1[i]) {
//                                most_runs_1 = runs_team_1[i];
//                                most_run_1 = i;
//                            }
//                        }
//                        outfile << "MOST RUNS SCORED BY ANY BATSMAN FOR PAKISTAN IS: " << arrteam1[most_run_1] << " = " << runs_team_1[most_run_1];
//                    }
//                    outfile << endl << endl << endl;
//                    outfile << "TOTAL SCORE: " << totalscore_team_1 << "/" << totalwickets_team_1 << endl;
//                    outfile << endl << "------- NEW ZEALAND ---------" << endl;
//                    outfile << "SCORECARD:" << endl;
//                    strikerate(runs_team_2, balls_team_2, strikerate_team_2);
//                    outfile << "PLAYER      RUNS      BALLS      4s      6s      str" << endl;
//                    for (int i = 0; i < 7; i++) {
//                        outfile << arrteam2[i] << "        " << runs_team_2[i] << "        " << balls_team_2[i] << "        " << fours_team_2[i] << "        " << sixes_team_2[i] << "        " << strikerate_team_2[i] << endl;
//                    }
//                    // most runs scored by any batsman for new zealand
//                    for (int j = 0; j < 1; j++) {
//                        int most_runs_2 = 0;
//                        int most_run_2 = 0;
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_runs_2 <= runs_team_2[i]) {
//                                most_runs_2 = runs_team_2[i];
//                                most_run_2 = i;
//                            }
//                        }
//                        outfile << "MOST RUNS SCORED BY ANY BATSMAN FOR PAKISTAN IS: " << arrteam2[most_run_2] << " = " << runs_team_2[most_run_2];
//                    }
//                    outfile << endl;
//                    outfile << "TOTAL SCORE: " << totalscore_team_2 << "/" << totalwickets_team_2 << endl;
//                    outfile << endl << "------------- BOWLING STATISTICS. -------------" << endl;
//                    outfile << endl << "------- PAKISTAN ---------" << endl;
//                    outfile << "NAME      OVERS      RUNS      WICKETS      ECONOMY" << endl;
//                    economy(runs_conceded_2, over_deleved_2, economy_team_2);
//                    for (int k = 0; k < 7; k++)
//                    {
//                        outfile << arrteam1[k] << "        " << over_deleved_2[k] << "        " << runs_conceded_2[k] << "          " << wicket_taken_2[k] << "            " << economy_team_2[k] << "      " << endl;
//                    }
//                    outfile << endl << endl << endl;
//                    // most wicket taken bowler for pakistan
//                    for (int j = 0; j < 1; j++) {
//                        int most_wickets_2 = 0;
//                        int most_wicket_2 = 0;
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_wickets_2 <= wicket_taken_2[i]) {
//                                most_wickets_2 = wicket_taken_2[i];
//                                most_wicket_2 = i;
//                            }
//                        }
//                        outfile << "MOST WICKETS TAKEN BY ANY BOWLER FOR PAKISTAN IS: " << arrteam1[most_wicket_2] << " = " << wicket_taken_2[most_wicket_2];
//                    }
//                    outfile << endl << "------- NEW ZEALAND---------" << endl;
//                    outfile << "NAME      OVERS      RUNS      WICKETS      ECONOMY" << endl;
//                    economy(runs_conceded_1, over_deleved_1, economy_team_1);
//                    for (int k = 0; k < 7; k++)
//                    {
//                        outfile << arrteam2[k] << "        " << over_deleved_1[k] << "        " << runs_conceded_1[k] << "          " << wicket_taken_1[k] << "          " << economy_team_1[k] << "\t" << endl;
//                    }
//                    // most wicket taken bowler for new zealand
//                    for (int j = 0; j < 1; j++) {
//                        int most_wickets_1 = 0;
//                        int most_wicket_1 = 0;
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_wickets_1 <= wicket_taken_1[i]) {
//                                most_wickets_1 = wicket_taken_1[i];
//                                most_wicket_1 = i;
//                            }
//                        }
//                        outfile << "MOST WICKETS TAKEN BY ANY BOWLER FOR NEW ZEALAND IS: " << arrteam2[most_wicket_1] << " = " << wicket_taken_1[most_wicket_1];
//                    }           
//                    outfile << endl << endl << endl;
//                    // man of the match
//                    for (int j = 0; j < 1; j++) {
//                        int most_runs_1 = 0;
//                        int most_run_1 = 0;
//                        int most_runs_2 = 0;
//                        int most_run_2 = 0;
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_runs_1 <= runs_team_1[i]) {
//                                most_runs_1 = runs_team_1[i];
//                                most_run_1 = i;
//                            }
//                        }
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_runs_2 <= runs_team_2[i]) {
//                                most_runs_2 = runs_team_2[i];
//                                most_run_2 = i;
//                            }
//                        }
//                        if (runs_team_2[most_run_2] > runs_team_1[most_run_1]) {
//                            outfile << "MAN OF THE MATCH IS: " << arrteam2[most_run_2] << " = " << runs_team_2[most_run_2];
//                        }
//                        else {
//                            outfile << "MAN OF THE MATCH IS: " << arrteam1[most_run_1] << " = " << runs_team_1[most_run_1];
//
//                        }
//                    }
//                    outfile << endl << endl << endl;
//                    // bowler of the match
//                    for (int j = 0; j < 1; j++) {
//                        int most_wickets_1 = 0;
//                        int most_wicket_1 = 0;
//                        int most_wickets_2 = 0;
//                        int most_wicket_2 = 0;
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_wickets_1 <= wicket_taken_1[i]) {
//                                most_wickets_1 = wicket_taken_1[i];
//                                most_wicket_1 = i;
//                            }
//                        }
//
//                        for (int i = 0; i < 7; i++) {
//
//                            if (most_wickets_2 <= wicket_taken_2[i]) {
//                                most_wickets_2 = wicket_taken_2[i];
//                                most_wicket_2 = i;
//                            }
//                        }
//                        if (wicket_taken_2[most_wicket_2] > wicket_taken_1[most_wicket_1]) {
//                            outfile << "BOWLER OF THE MATCH IS: " << arrteam1[most_wicket_2] << " = " << wicket_taken_2[most_wicket_2];
//
//                        }
//                        else {
//                            outfile << "BOWLER OF THE MATCH IS: " << arrteam2[most_wicket_1] << " = " << wicket_taken_1[most_wicket_1];
//
//                        }
//                    }
//                    outfile << endl << endl << endl;
//                }
//                else {
//                    cout << "Failed to create file." << endl;
//                    system("CLS");
//                }
//                int m;
//                cout << "Press 0 to see the match summary" << endl;
//                cin >> m;
//                if (m == 0) {
//                    display_match_summary_file();
//                }
//                else {
//                    system("CLS");
//                }
//                flag = 1;
//            }
//        }
//        total_over(1, total_over4);
//        if (i == 0 || i == 7 || i == 14) {
//            wicket_taken_1[6] = wicket_taken_1[6] + wicket;
//            runs_conceded_1[6] = runs_conceded_1[6] + run_team_1;
//            over_deleved_1[6] = over_deleved_1[6] + 1;
//        }
//        else if (i == 1 || i == 8 || i == 15) {
//            wicket_taken_1[5] = wicket_taken_1[5] + wicket;
//            runs_conceded_1[5] = runs_conceded_1[5] + run_team_1;
//            over_deleved_1[5] = over_deleved_1[5] + 1;
//        }
//        else if (i == 2 || i == 9 || i == 16) {
//            wicket_taken_1[4] = wicket_taken_1[4] + wicket;
//            runs_conceded_1[4] = runs_conceded_1[4] + run_team_1;
//            over_deleved_1[4] = over_deleved_1[4] + 1;
//        }
//        else if (i == 3 || i == 10 || i == 17) {
//            wicket_taken_1[3] = wicket_taken_1[3] + wicket;
//            runs_conceded_1[3] = runs_conceded_1[3] + run_team_1;
//            over_deleved_1[3] = over_deleved_1[3] + 1;
//        }
//        else if (i == 4 || i == 11 || i == 18) {
//            wicket_taken_1[2] = wicket_taken_1[2] + wicket;
//            runs_conceded_1[2] = runs_conceded_1[2] + run_team_1;
//            over_deleved_1[2] = over_deleved_1[2] + 1;
//        }
//        else if (i == 5 || i == 12 || i == 19) {
//
//            wicket_taken_1[1] = wicket_taken_1[1] + wicket;
//            runs_conceded_1[1] = runs_conceded_1[1] + run_team_1;
//            over_deleved_1[1] = over_deleved_1[1] + 1;
//        }
//        else if (i == 6 || i == 13 || i == 20) {
//            wicket_taken_1[0] = wicket_taken_1[0] + wicket;
//            runs_conceded_1[0] = runs_conceded_1[0] + run_team_1;
//            over_deleved_1[0] = over_deleved_1[0] + 1;
//        }
//        if (flag == 0) {                                    // displaying score card at end of each over
//            cout << endl << "press enter to continue game." << endl;
//            cin.get();
//            strikerate(runs_team_1, balls_team_1, strikerate_team_1);
//            // display scorecard
//            battingboard(arrteam1, runs_team_1, fours_team_1, sixes_team_1, balls_team_1, strikerate_team_1);
//            cout << "total after " << i + 1 << " overs: " << totalscore_team_1 << " / " << totalwickets_team_1 << " in " << total_over4 << " overs." << endl;
//            cout << endl << "------- new zealand bowling ---------" << endl;
//            economy(runs_conceded_1, over_deleved_1, economy_team_1);
//            cout << endl << "name" << "\t" << "overs " << "\t" << "runs" << "\t" << "wickets" << "\t" << "economy" << endl;
//            for (int k = 0; k < 7; k++) {
//                cout << arrteam2[k] << "\t" << over_deleved_1[k] << "\t" << runs_conceded_1[k] << "\t" << wicket_taken_1[k] << "\t" << economy_team_1[k] << endl;
//            }
//            cout << endl << "press enter to continue game." << endl;
//            cin.get();
//        }
//    }
//    if (totalscore_team_2 > totalscore_team_1 ) {                                // if team 2 won the game
//        cout << endl << endl << endl;
//        cout << endl << "press enter to see summary of second innings." << endl;
//        cin.get();
//        cout << "---------- NEW ZEALAND WON THE MATCH BY " << (totalscore_team_2 - totalscore_team_1) << " RUNS ---------" << endl << endl;
//        cout << endl << "SCORECARD AT THE END OF SECOND INNINGS: " << endl;
//        strikerate(runs_team_1, balls_team_1, strikerate_team_1);
//        // display scorecard
//        battingboard(arrteam1, runs_team_1, fours_team_1, sixes_team_1, balls_team_1, strikerate_team_1);
//        cout << endl << endl;
//        // most runs scored by any batsman for pakistan
//        most_runs(arrteam1, runs_team_1);
//        cout << endl << endl;
//        economy(runs_conceded_1, over_deleved_1, economy_team_1);
//        BowlingBoard(arrteam2, over_deleved_1, runs_conceded_1, wicket_taken_1, economy_team_1);
//        // most wicket taken bowler for new zealand
//        most_wickets(arrteam2, wicket_taken_1);
//        cout << endl << endl;
//        cout << "TOTAL SCORE: " << totalscore_team_1 << "/" << totalwickets_team_1 << " in " << total_over4 << " overs." << endl;
//        cout << endl << "press enter to see match summary." << endl;
//        cin.get();
//        cout << endl;
//        ofstream outfile("match_summary.txt");                                         // file handling to create and store match summary data in a file
//        if (outfile.is_open()) {
//            outfile << "------------------- MATCH SUMMARY ---------------- " << endl << endl;
//            outfile << "---------- NEW ZEALAND WON THE MATCH BY " << (totalscore_team_2 - totalscore_team_1) << " RUNS ---------" << endl << endl;
//            outfile << "------------- BATTING STATISTICS. ------------- " << endl;
//            outfile << endl << "------- PAKISTAN ---------" << endl;
//            outfile << "SCORECARD:" << endl;
//            strikerate(runs_team_1, balls_team_1, strikerate_team_1);
//            outfile << "PLAYER      RUNS      BALLS      4s      6s      str" << endl;
//            for (int i = 0; i < 7; i++) {
//                outfile << arrteam1[i] << "        " << runs_team_1[i] << "        " << balls_team_1[i] << "        " << fours_team_1[i] << "        " << sixes_team_1[i] << "        " << strikerate_team_1[i] << endl;
//            }
//            // most runs scored by any batsman for pakistan
//            for (int j = 0; j < 1; j++) {
//                int most_runs_1 = 0;
//                int most_run_1 = 0;
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_runs_1 <= runs_team_1[i]) {
//                        most_runs_1 = runs_team_1[i];
//                        most_run_1 = i;
//                    }
//                }
//                outfile << "MOST RUNS SCORED BY ANY BATSMAN FOR PAKISTAN IS: " << arrteam1[most_run_1] << " = " << runs_team_1[most_run_1];
//            }
//            outfile << endl << endl << endl;
//            outfile << "TOTAL SCORE: " << totalscore_team_1 << "/" << totalwickets_team_1 << endl;
//            outfile << endl << "------- NEW ZEALAND ---------" << endl;
//            outfile << "SCORECARD:" << endl;
//            strikerate(runs_team_2, balls_team_2, strikerate_team_2);
//            outfile << "PLAYER      RUNS      BALLS      4s      6s      str" << endl;
//            for (int i = 0; i < 7; i++) {
//                outfile << arrteam2[i] << "        " << runs_team_2[i] << "        " << balls_team_2[i] << "        " << fours_team_2[i] << "        " << sixes_team_2[i] << "        " << strikerate_team_2[i] << endl;
//            }
//            // most runs scored by any batsman for new zealand
//            for (int j = 0; j < 1; j++) {
//                int most_runs_2 = 0;
//                int most_run_2 = 0;
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_runs_2 <= runs_team_2[i]) {
//                        most_runs_2 = runs_team_2[i];
//                        most_run_2 = i;
//                    }
//                }
//                outfile << "MOST RUNS SCORED BY ANY BATSMAN FOR PAKISTAN IS: " << arrteam2[most_run_2] << " = " << runs_team_2[most_run_2];
//            }
//            outfile << endl;
//            outfile << "TOTAL SCORE: " << totalscore_team_2 << "/" << totalwickets_team_2 << endl;
//            outfile << endl << "------------- BOWLING STATISTICS. -------------" << endl;
//            outfile << endl << "------- PAKISTAN ---------" << endl;
//            outfile << "NAME      OVERS      RUNS      WICKETS      ECONOMY" << endl;
//            economy(runs_conceded_2, over_deleved_2, economy_team_2);
//            for (int k = 0; k < 7; k++)
//            {
//                outfile << arrteam1[k] << "        " << over_deleved_2[k] << "        " << runs_conceded_2[k] << "          " << wicket_taken_2[k] << "            " << economy_team_2[k] << "      " << endl;
//            }
//            outfile << endl << endl << endl;
//            // most wicket taken bowler for pakistan
//            for (int j = 0; j < 1; j++) {
//                int most_wickets_2 = 0;
//                int most_wicket_2 = 0;
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_wickets_2 <= wicket_taken_2[i]) {
//                        most_wickets_2 = wicket_taken_2[i];
//                        most_wicket_2 = i;
//                    }
//                }
//                outfile << "MOST WICKETS TAKEN BY ANY BOWLER FOR PAKISTAN IS: " << arrteam1[most_wicket_2] << " = " << wicket_taken_2[most_wicket_2] << endl << endl << endl;
//            }
//            outfile << endl << "------- NEW ZEALAND---------" << endl;
//            outfile << "NAME      OVERS      RUNS      WICKETS      ECONOMY" << endl;
//            economy(runs_conceded_1, over_deleved_1, economy_team_1);
//            for (int k = 0; k < 7; k++)
//            {
//                outfile << arrteam2[k] << "        " << over_deleved_1[k] << "        " << runs_conceded_1[k] << "          " << wicket_taken_1[k] << "          " << economy_team_1[k] << "\t" << endl;
//            }
//            // most wicket taken bowler for new zealand
//            for (int j = 0; j < 1; j++) {
//                int most_wickets_1 = 0;
//                int most_wicket_1 = 0;
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_wickets_1 <= wicket_taken_1[i]) {
//                        most_wickets_1 = wicket_taken_1[i];
//                        most_wicket_1 = i;
//                    }
//                }
//                outfile << "MOST WICKETS TAKEN BY ANY BOWLER FOR NEW ZEALAND IS: " << arrteam2[most_wicket_1] << " = " << wicket_taken_1[most_wicket_1];
//            }
//            outfile << endl << endl << endl;
//            // man of the match
//            for (int j = 0; j < 1; j++) {
//                int most_runs_1 = 0;
//                int most_run_1 = 0;
//                int most_runs_2 = 0;
//                int most_run_2 = 0;
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_runs_1 <= runs_team_1[i]) {
//                        most_runs_1 = runs_team_1[i];
//                        most_run_1 = i;
//                    }
//                }
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_runs_2 <= runs_team_2[i]) {
//                        most_runs_2 = runs_team_2[i];
//                        most_run_2 = i;
//                    }
//                }
//                if (runs_team_2[most_run_2] > runs_team_1[most_run_1]) {
//                    outfile << "MAN OF THE MATCH IS: " << arrteam2[most_run_2] << " = " << runs_team_2[most_run_2];
//                }
//                else {
//                    outfile << "MAN OF THE MATCH IS: " << arrteam1[most_run_1] << " = " << runs_team_1[most_run_1];
//
//                }
//            }
//            outfile << endl << endl << endl;
//            // bowler of the match
//            for (int j = 0; j < 1; j++) {
//                int most_wickets_1 = 0;
//                int most_wicket_1 = 0;
//                int most_wickets_2 = 0;
//                int most_wicket_2 = 0;
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_wickets_1 <= wicket_taken_1[i]) {
//                        most_wickets_1 = wicket_taken_1[i];
//                        most_wicket_1 = i;
//                    }
//                }
//
//                for (int i = 0; i < 7; i++) {
//
//                    if (most_wickets_2 <= wicket_taken_2[i]) {
//                        most_wickets_2 = wicket_taken_2[i];
//                        most_wicket_2 = i;
//                    }
//                }
//                if (wicket_taken_2[most_wicket_2] > wicket_taken_1[most_wicket_1]) {
//                    outfile << "BOWLER OF THE MATCH IS: " << arrteam1[most_wicket_2] << " = " << wicket_taken_2[most_wicket_2];
//
//                }
//                else {
//                    outfile << "BOWLER OF THE MATCH IS: " << arrteam2[most_wicket_1] << " = " << wicket_taken_1[most_wicket_1];
//
//                }
//            }
//        }
//        else {
//            cout << "Failed to create file." << endl;
//            system("CLS");
//        }
//        int m;
//        cout << "Press 0 to see the match summary" << endl;
//        cin >> m;
//        if (m == 0) {
//            display_match_summary_file();
//        }
//        else {
//            system("CLS");
//        }
//    }
//}
//int main() {
//    char arrteam1[10][20] = { "Diyan", "Ruban" ,"Muhab","Ahsan","Aqeel","Rafey","Hayee" };                                                          // initialization for team 1
//    char arrteam2[10][20] = { "Tyler", "Wells" ,"bowes","Raven","Robin","boult","sodhi" };                                                          // initialization for team 2
//    (srand(time(nullptr)));
//    display_over_file();
//    int over;
//    get_overs(over);
//    over = 2;
//    if (over <= 50 && over > 0) {
//        cout << endl << endl << endl << endl;
//        int a = toss(over);
//        teams(arrteam1, arrteam2);                                                                      //if team 1 won the toss then this loop will execueted
//        if (a == 1) {
//            team1(over,arrteam1, arrteam2);
//        }
//        else {
//            team2(over, arrteam1, arrteam2);                                                             //if team 2 won the toss then this loop will execueted
//        }
//    }
//    else {
//        cout << endl << endl << endl << "invalid overs entered" << endl;                                  // if overs are more than 50 than code will terminate
//        return 0;
//    }
//    cout << endl << endl << endl << endl;
//    system("pause");
//    return 0;
//}