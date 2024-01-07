
#include <stdio.h>
//run this thru gdb again
/*
next one will be sequence of the fibs
or percent gain calc

usin gcc [-c|-S|-E] [-std=standard]

-update progress in G1 via backtesting
-CEN stuff via remote desktop
-CAP stuff rn 10.20.23 via normal desktop
-CAP stuff finished for the most part broke main.dart tho
^check old commit to fix the routing
  
 10.30.23
 -fixed allat stuff above
 -found link for CEN page to clone, get tailwind working again
 and faq + routing and other stuff to be  handled today via remote desktop
  
  10.31.23
  -finished the faq + routing stuff, pasting whatever tasks r pertinent
  -get tailwind working again
  -5 cs electives, operating sys, and 1 nat sci elective 
  -spring24' ^ cuts that to 3 cs electives and 1 sci elective
  -sum 24' ^ cuts that to 2 cs electives
  -fall24' ^ we take the last 2 and it cuts that to done 
  -
  -backtest more, n avoid fomc news trades tmmrw after open

  11.2.23
  -g1.5 in morning
  -g1 if ready by 8
  -g2 after 4(CEN css stuff)
  11.3.23
  -g1 taken care of
  
  7pm cutoff
  11.4.23
  -ALL CEN stuff
  & intro 2 ml

  11.5.23
  -CEN stuff:
  That api key stuff being hidden is whats causing this page 
  to not run after npm start

  11.17.23
  -CEN stuff:
  1. routing to the profile and about
  2. waiting on last minute changes from sum1
  3. $$$?

  11.19.23
  -More CEN stuff:
  1.Read documentation to understand whats gonna be said 
  for presentation. 
  2.complete finishing touches to site 
  3.implement mp4's to site's dashboard?

  11.20.23
  ^Same as above tho new variables hav enetered
  -4n4 pushes code but where? GH Desktop pushes? find it & implement to our version
  -issue of about us page persists format it best to your ability

  11.27.23
  -find my average RR from trades and create a risk mngment strat based on tjr's
  funded acc 2%

  11.28.23
  g2: psh chngs 2 sc, make vid, read instrucions doc
  g1: same as 11.27.23
  
  11.29.23
  backtest for 1hr ish
  sys progrmmn for 1hr ish 
  
  11.30.23
  sys programm for8:35-9:35
  then backtstng till 10:35
  
  12.14.23
  reconfigure TR document
  
  12.16.23
  -finish the plan for dfw to hnd
  -small proj w/ C#
  -backtest n get the plan even more defined, remove the worry
  from the trades. focus on setting up the bare .20 move

  12.20.23
  -backtest open from days missed
  **-for jp get da days(call tmrw + mssg snt)
  -follow that yt vid on dev work where it suggests to build and then deploy a program
   my 1st thought was to make a more accessible/free version of tradezella as it is essentially
   a planner but with api's from ppl's brokers. scale it as much as possible via tt marketing
  -

  1.1.24
  -jp trip done
  -check the 3 classes to see if theres a syllabus on Goog...
  check em', if textbooks required write it here,
  if more than 1 textbook is needed than get the bookpack
  else if its 1 textbook dont get the bookpack.

  
  cop4610 op sys taught by KBA (IN PERSON) (Tue. & Thur. 12:30pm-1:45pm) @ 105 in PG6
  ^syllbus not online must wait it out till 6th or sumn
  
  cop4751 adv DB mang taught by Bahreini (ONLINE)
  ^syllbus not online must wait it out till 6th or sumn
  
  cts4408 DB admin taught by Mikulski (ONLINE)
  ^syllbus not online must wait it out till 6th or sumn

  consensus: due to 2 of 3 being online i decline the panthr bookpack

  1.6.24
  -goalpost set: reverse engineer
  1.7.24
  -start with login page into dashboard, find best tool to use for this keeping in mind that
  we are deploying it for real users and need security stuff and what not.
  ----------------------------------------------------------------------------------------------------------------------------------------------------------
  
  Project Idea: *WebApp* TradeZella but Free,  (goal is to get a whole lotta users not 2 customers)
  
  Phases of development to follow https://theproductmanager.com/topics/software-development-life-cycle/
  Use the Weighted scoring for the features, for example, since we want to track the user's trades
  the highest weighted features/non-negotiables would be of course showing the user's trades neatly and 
  letting them type AND showing stats/trends in their behavior. Those 3 are necessary
  (trade's info being type of contract, time spent in the trade, profit, etc.)
  
  
    Software Requirements Specification
                  
    1. Introduction - Dango Trade Diary (named after dangos that got 3 rice balls, the design is similar its 3 circles 
    on your screen top one is your trade[green or red], middle is the details section / notes[white]), last is stats based
    on your trade/similarities noticed -->(3rd losing trade this week have all been counter trend and held over 10mins)

           1.1 Purpose - For traders to gain insight by entering their trades and seeing their statistics based on the data.

           1.2 Intended Audience - Unprofitable traders & profitable traders alike (talkin bout the software not the SRS doc)

           1.3 Intended Use - As a journal of sorts to be written into daily from the user's mobile phone or laptop/PC via browser.

           1.4 Product Scope - We hope to expand to 100k users as the product is free until further notice, accessible via chrome, safari
           EDGE, and most browsers.

           1.5 Definitions and Acronyms - SL stop loss, TP take profit, HOD high of day, LOD of day, 0dte 0 day to expration, cons contracts etc.

2. Overall Description

           2.1 User Needs - The product will be used by primary users which are traders, swing/day traders who would like to track their trades using
           the web app and recieve analytics based on their entered trades which they can learn from and notice pattern or behaviors.

           2.2 Assumptions and Dependencies - We are assuming they are on a laptop/desktop computer with at least 2GB of RAM with browsers commonly used in 2024 
           installed on said computers, Google Chrome, Microsoft Edge, Brave etc.

3. System Features and Requirements

            3.1 Functional Requirements - Heres a rough list but proper user stories with weight will be on Jira, espcially with that dot chart thing that gets more red
            the older the user story gets.
            #1. The system must have a text box where users type text, save, and load their saved text upon logging in to the web app.

            3.2 External Interface Requirements

            3.3 System Features

            3.4 Nonfunctional Requirements
            
  Planning phase- User stories
                  
   1.As a user I would like to see my trades on the main page of the app
   2.As a user I would like a text box to write text into under the trade details on the main page of the app.
   3.As a user I would like there to be stats showing me trends in my trades on the main page of the app.
   (Biggest losses on big news days, major losses during counter trend trades etc.)
   4.As a user I would like this to be saved for next time I use the app.
            
  
  
  */

int main()
{
  int num;
  do {
    printf("Enter a positive integer: ");
    scanf("%d", &num);
  } while(num < 0);

  int factorial = 1;
  for(int i=1; i<=num; i++)
    factorial = factorial*i;

  printf("%d! = %d\n", num, factorial);

  return 0;
}
