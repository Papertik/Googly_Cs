// text based adventure game 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>

 bool containsWord(const std::string& sentence, const std::string& word) {
    // Iterate through each character of the sentence
    for (size_t i = 0; i < sentence.length(); ++i) {
        // Check if the current character matches the first character of the word
        if (sentence[i] == word[0]) {
            // Check if the substring from i matches the word
            bool found = true;
            for (size_t j = 1; j < word.length(); ++j) {
                if (sentence[i + j] != word[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                return true;
            }
        }
    }
    return false;
}

using namespace std;
int main(){
    string choice1;
    string choice2;
    string choice3;
    int choice3a;
    string choice4;
    bool check1 = false;
    bool check2 = false;
    bool check3 = false;
    srand(time(0));
    int chance = rand() % 3 + 1;
   


    // intro sequence
    system("cls");
    cout<<chance;
    cout<<"\nAs you slowly regain consciousness, a sense of disorientation envelops your mind.\n";
    cout<<"The rhythmic hum of the life support systems fills the air, accompanied by the blinking lights and futuristic displays surrounding you in your cockpit.\n";
    cout<<"Glancing out of the canopy, a stunning yet unfamiliar landscape unfolds before your eyes.\n";
    cout<<"\n";

    cout<<"Your memory begins to piece together fragments of the past.\n";
    cout<<"Your recall the intense vibrations of the spaceship during its descent, the emergency alarms blaring, and the last desperate attempts to stabilize the craft before impact.\n";
    cout<<"But what happened after that? How did you end up here on this unknown planet?\n";
    cout<<"\n";

    cout<<"You unbuckle your seatbelt, feeling the gravity that confirms the spaceship is no longer in flight.\n";
    cout<<"You scan the control panels, searching for any clues or data that could shed light on your situation.\n"; 
    cout<<"The ship's computer flickers to life, displaying fragments of critical system failures and corrupted navigational data.\n";
    cout<<"\n";
    //choice 1
    cout<<"You have two options\n 1) Leave your ship and look for help on foot \n 2) Stay with your still working lifesupport systems and set up shelter and hope help comes to you.\n";
    cin>>choice1;
//choice 2
    while(check1 == false){
        if (containsWord(choice1,"leave")||containsWord(choice1,"1")){
            system("cls");
            cout<<"Realizing that fixing the ship will be hopeless you decide to gather all the supplies you can and head off on foot in search of help.\n";
            cout<<"Getting out of the your cockpit you discover you've crashed in a large canyon running north/south. The walls look impossible to scale.\n";
            cout<<"You now have to choose which direction to go.\n";
            cin>>choice2;
            check1 = true;

        }else if(containsWord(choice1,"stay")||containsWord(choice1,"2")){
            system("cls");
            cout<<"Deciding to stay put, you begin taking stock of what is working and not working on the ship.\n";
            cout<<"Things that are working:\n-life support\n-axuilary power supply\n-ship central computer\n-water recycling systems.\n";
            cout<<"\nThings that are not working:\n-Communication systems\n-launch thrusters\n-primary thrusters\n-primary power supply\n-navigation systems\n-stability control\n-structual failure and leaks in several parts of the ship.\n";
            cout<<"\nWill you stay and build shelter?\nOr start working to fix the ship?\n";
            cin>>choice2;
            check1 = true;

        }else{
            system("cls");
            cout<<"INVALID IMPUT:\n";
            cout<<"Try rephrasing your response.\n";
            cin>>choice1;
        }
    }
//choice 3
    while (check2 == false){
        if(choice2 == "north" || choice2 == "North"){
            system("cls");
            cout<<"Choosing to go north you grab your ship's emergency survival kit and start walking up the canyon.\n";
            cout<<"After a couple days of traveling the canyon ends and you see a plume of smoke in the distance.\n";
            cout<<"Another day and half hike and you arrive at the smoke plume, nearly out of supplies and extremely tired.\n";
            cout<<"As it turns out the smoke plume is from another crashed and stranded star pilot.\n";
            cout<<"You can see that he chose to stay and start fixing his ship. He has a small temporary structure set up using tarps and debris from his spaceship.\n";
            cout<<"You could go closer and introduce yourself, or go around and hope the pilot doesn't see you.\n";
            cin>>choice3; // looking for closer or introduce yourself or go around
            check2=true;
        }else if(choice2 == "south"||choice2 =="South"){
            system("cls");
            cout<<"Choosing to go south you grab your ship's emergency survival kit and start walking up the canyon.\n";
            cout<<"After you walk for several hours the canyon abruptly ends in a sheer wall with a small cave entrance at the bottom.\n";
            cout<<"Do you choose to enter the cave?\n";
            cin>>choice3;//looking for yes or no
            check2=true;

        }else if(choice2 =="stay"||containsWord(choice2,"shelter")){
            system("cls");
            cout<<"You take stock of the materials available to you. You have debris from your ship, some emergency tarps from the survival kit.\n";
            cout<<"With the rations in the emergency kit from the spaceship you determine that you have about a weeks worth of food and unlimited water\n";
            cout<<"Undetered you go about constructing a simple lean-to structure using debris from your spaceship and the emergency tarps\n";
            cout<<"Having no idea what the weather on this planet will be like you make the structure as durable as possible.\n";
            cout<<"After a week, you still haven't found any food and are starting to loose hope of any rescue.\n";
            cout<<"Late one evening you hear rocks tumbling down the canyon. Something was there.\n";
            cout<<"After a few minutes of waiting you see that the noise was a weary looking star pilot. His helmet is cracked and jumpsuit torn in multiple places.\n";
            cout<<"By the way he is stumbling towards you, you can tell he is about to colapse from exhaustion.\n";
            cout<<"You now have a choice, you can greet the weary traveller or turn him away?\n";
            cin>>choice3; // looking for  greet or turn away
            check2=true;
        }else if(containsWord(choice2,"ship")){
            system("cls");
            cout<<"You start by checking the survival kit for any spare parts.\n";
            cout<<"You find:\n-1)Spare fuses\n-2)spare air patches\n-3)A few sheets of spare hull plating\n-4)A handheld diognostics computer\n-5)Emergency radio\n ";
            cout<<"Choose one to use:";
            cin>>choice3a; // looking for a number into a switch case 
            check2=true;
        }else{
            system("cls");
            cout<<"INVALID IMPUT:\n";
            cout<<"Try rephrasing your response.\n";
            cin>>choice2;
        }
    }
    while (check3 == false){
        if (containsWord(choice3,"introduce")||containsWord(choice3,"closer")){
            system("cls");
            cout<<"Choosing to go closer you see that this stranded pilot hasnt gotten anywhere on fixing his ship.\nBroken parts lie everywhere and his ship is in far worse shape than yours was.\n:";
            cout<<"The pilot notices you and gets up. He shuffles over in a bit of a daze and asks if you know where we are. You tell him no.\n";
            cout<<"You then ask the pilot if he has any spare supplies, as you are just about out. He seems to go almost feral at the mention of supplies and impulsivly lunges toward you.\n";
            cout<<"You can choose to fight him and take his supplies to help you get off the planet or run.\n";
            cin>>choice4;
            if (choice4 == "fight"){
                cout<<"You choose to fight the pilot.\n";
                cout<<"Being weak from traveling for days, he easily overpowers you and snaps your neck.\n";
                check3 = true;
            }else if(choice4 == "run"){
                cout<<"You choose to start running back to your crash site.\n";
                cout<<"In your haste, you trip and fall breaking your ankle.\nAs you slowly crawl towards your far off crash site, the pilot jumps on you and starts ripping your spine out through your back.\n";
                check3 = true;
            }
            check3 = true;
        }else if(containsWord(choice3,"around")||containsWord(choice3,"avoid")){
            system("cls");
            cout<<"You start walking around the other pilot's crash site.\n";
            cout<<"You wander the alien planet until your supplies run out and you die of starvation.\n";
            check3 = true;
            // cool code for repeatatly asking if you want to continue wandering, does not work
            //     for(int i = 0; i <=3; i++){
            //         system("cls");
            //         cout<<"Continuing to the southeast you notice you are low on water, if you turn back now you might be able to get back to the other pilot's crash site before you run out.\n";
            //         cout<<"Keep going?\n";
            //         cin>>choice4;
            //         if(choice4 == "yes"|| choice4 == "Yes"){
            //             system("cls");
            //             cout<<"You run out of water and slowly dye of dehydration on the forign alien planet.\n";
            //             check3 =true;

            //         }else if(choice4 == "no"||containsWord(choice4,"back")){
            //             system("cls");
            //             cout<<"You start heading back to the crash site. The plume of smoke is barely visible when you collapse from exhaustion and slowly stave to death on the unfamiliar landscape.\n";
            //             check3 = true;
            //         }else{
            //             system("cls");
            //             cout<<"INVALID IMPUT:\n";
            //             cout<<"Try rephrasing your response.\n";
            //             cin>>choice4;
            //         }
            // }
                
                       
        }else if(choice3 == "yes"||choice3 == "Yes"){
            system("cls");
            cout<<"You enter the cave. It is damp and smells musty, a cold breeze blows past you. This is a deep cave.\n";
            cout<<"You continue through the narrow winding passages for another hour, by now you are so turned around that you couldn't get out if you tried.\n";
            cout<<"While squeezing through a particuarly tight section you feel your suit snag on something. This renders you stuck, as you cannot go backwards.\n";
            cout<<"You struggle to free yourself for a while, and then as the air begins to stale you feel something small creep into the leg of your suit.\n";
            cout<<"It's a small insect of sorts.\n";
            cout<<"The small insect begins biting you, you scream from the pain as more insects crawl in through the same tear and start biting you as well.\n";
            cout<<"You die slowly as the insects feed on your asphiciating body, leaving just a skeleton in a space suit, stuck in a cave.\n";
            
            check3 = true;             
        }else if(choice3 == "idk"){
            system("cls");
            cout<<"You take a while to make a decison, but eventually turn back, deciding the cave probably wasn't worth the risk.\n";
            cout<<"Part way through your multi-hour trek back to your crash site, you hear a rumble from far above.\n";
            cout<<"You look up in terror to realize that one of the sheer canyon wals has stated to crumble. A massive rock slide is headed directly for you.\n";
            cout<<"You begin to run away from the rock slide.\n";
            cout<<"You are hit first by a small boulder in the calf, your leg breaks instantly and you fall, your momentum ripping apart all the tendons in your knee.\n";
            cout<<"You lay on the ground in pain, unable to move as more rocks crash around you, first hitting your left arm, then other leg, pulvurizing bone on impact.\n";
            cout<<"Finally a rock comes and crushes your skull, and everything goes black.\n";
            
            check3 = true;             
        }else if(choice3 == "no"||choice3 == "No"){
            system("cls");
            chance = 2;
            cout<<"You turn around and start heading back, deciding the cave wasn't worth the risk.\n";
            cout<<"After a few hours you arrive back at your ship and decide to start fixing it.\n";
            cout<<"\nYou start by checking the survival kit for any spare parts.\n";
            cout<<"You find:\n-1)Spare fuses\n-2)spare air patches\n-3)A few sheets of spare hull plating\n-4)A handheld diognostics computer\n-5)Emergency radio\n ";
            cout<<"Choose one to use:";
            cin>>choice3a;
            system("cls");
            switch(choice3a){
                case 1:{//fuse
                    if(chance == 3){
                        cout<<"You dig into the bag of fuses and find one that says 'comms'.\n";
                        cout<<"Excitedly, you open the appropriate pannel and replace the destroyed fuse.\n";
                        cout<<"Once replaced the comms system comes online. You quicly send a repeating SOS message with coordinates.\n";
                        cout<<"Within a day a rescue ship lands and saves you.\n";
                        check3 = true;
                    
                    }else{
                        cout<<"You dig into the bag of fuses and find one that says 'comms'.\n";
                        cout<<"Excitedly, you open the appropriate pannel and replace the destroyed fuse.\n";
                        cout<<"This does not fix the comms system. In despair you wallow away the rest of your rations and die slowly from the spasms of starvation.\n";
                        check3 = true;

                    }
                    break;
                }
                case 2: {//spair air patches
                     cout<<"Spare air patches won't help you, the atmosphere is perfectly breathable.\n";
                     cout<<"While figuring how to use these, a fierce electrical storm rolls in, sitting in your metal spaceship, you are quickly struck with lightning and die instantly.\n";
                     check3 = true;
                    break;
                case 3://spare hull plating
                    if(chance == 2){
                    cout<<"You begin patching holes in the hull plating.\n";
                    cout<<"After a few hours, You hear a roar from above.\n";
                    cout<<"A similar ship to yours is approaching. It touches down farther up the canyon. The pilot says he is looking for you and to get in.\n";
                    cout<<"You are saved.\n";
                    check3 = true;
                    
                    }else{
                        cout<<"You begin patching holes in the hull plating.\n";
                        cout<<"After a while you give up out of despair and exhaustion.\n";
                        cout<<"In a depressive rage you bang your head into a the side of your ship untill you pass out. This kills you.\n";
                        check3 = true;
                    }
                    break;
                }
                case 4: {//handheld diognostics computer
                    if(chance == 1){
                        cout<<"Plugging the diognostics computer into your ships central computer, it tells you that one small relay is damaged and preventing the launch thrusters from opperating.\n";
                        cout<<"This is a quick fix and you are soon up and flying, on your way.\n";
                        check3 = true;
                        break;

                    }else{
                        cout<<"Plugging the diognostics computer into your ships central computer, it tells you that one small relay is damaged and preventing the launch thrusters from opperating.\n";
                        cout<<"This is a simple fix, as you open the appropriate panel, is causes an electrical current to course through your body.\nThis cooks your flesh instantly and killing you.\n";
                        check3=true;
                        
                    }
                    break;
                }
                
                case 5:{//emergency radio
                    cout<<"You try the radio, unaware that it was damaged in the crash.\n";
                    cout<<"You starve while waiting for a rescue that will never come.\n";
                    check3 = true;
                    break;
                }

                default:{
                    system("cls");
                    cout<<"INVALID IMPUT:\n";
                    cout<<"Try rephrasing your response.\n";
                    check3 = true;
                    break;
                }

            }
        }else if(containsWord(choice3,"greet")){
            system("cls");
            cout<<"You choose to greet the weary pilot and ofer him some of your few remaining supplies.\n";
            cout<<"He accepts these greatfully and after some time he suggests working on your ship.\n";
            cout<<"As you learn from talking to him, this pilot was shot down in a massive space battle above this planet.\n";
            cout<<"As he did not suffer major head injury he stil has all his memories and knowlege of how to repair your communications system.\n";
            cout<<"You two begin working on the comms system and after a few days of work, rations are running dangerously low but the comms system is working.\n";
            cout<<"Unfortunatly this came two late, as you both run out of supplies and begin to starve before rescue can come.\n";
            cout<<"";
            check3 = true;           
        }else if(containsWord(choice3,"away")){
            system("cls");
            cout<<"You decide you don't have enough supplies and decide to turn the pilot away.\n";
            cout<<"The pilot protests, but is too weak to put up much resistance, you dispatch his desprate attempts easily and watch as he slowly dies from exhaustion over the next few days.\n";
            cout<<"The dead body generates quite a smell, 5 days after you defeated him a predatory animal picks up the scent and comes looking.\n";
            cout<<"Being weak from starvation and dehydration you are quickly devoured as dessert once this animal finishes with the other pilot.\n";

            check3 = true;           
        }else if(containsWord(choice2,"fix")||containsWord(choice2,"ship")){
            system("cls");
            switch(choice3a){
                case 1:{//fuse
                    if(chance == 3){
                        cout<<"You dig into the bag of fuses and find one that says 'comms'.\n";
                        cout<<"Excitedly, you open the appropriate pannel and replace the destroyed fuse.\n";
                        cout<<"Once replaced the comms system comes online. You quicly send a repeating SOS message with coordinates.\n";
                        cout<<"Within a day a rescue ship lands and saves you.\n";
                        check3 = true;
                    
                    }else{
                        cout<<"You dig into the bag of fuses and find one that says 'comms'.\n";
                        cout<<"Excitedly, you open the appropriate pannel and replace the destroyed fuse.\n";
                        cout<<"This does not fix the comms system. In despair you wallow away the rest of your rations and die slowly from the spasms of starvation.\n";
                        check3 = true;

                    }
                    break;
                }
                case 2: {//spair air patches
                     cout<<"Spare air patches won't help you, the atmosphere is perfectly breathable.\n";
                     cout<<"While figuring how to use these, a fierce electrical storm rolls in, sitting in your metal spaceship, you are quickly struck with lightning and die instantly.\n";
                     check3 = true;
                    break;
                case 3://spare hull plating
                    if(chance == 2){
                    cout<<"You begin patching holes in the hull plating.\n";
                    cout<<"After a few hours, You hear a roar from above.\n";
                    cout<<"A similar ship to yours is approaching. It touches down farther up the canyon. The pilot says he is looking for you and to get in.\n";
                    cout<<"You are saved.\n";
                    check3 = true;
                    
                    }else{
                        cout<<"You begin patching holes in the hull plating.\n";
                        cout<<"After a while you give up out of despair and exhaustion.\n";
                        cout<<"In a depressive rage you bang your head into a the side of your ship untill you pass out. This kills you.\n";
                        check3 = true;
                    }
                    break;
                }
                case 4: {//handheld diognostics computer
                    if(chance == 1){
                        cout<<"Plugging the diognostics computer into your ships central computer, it tells you that one small relay is damaged and preventing the launch thrusters from opperating.\n";
                        cout<<"This is a quick fix and you are soon up and flying, on your way.\n";
                        check3 = true;
                        break;

                    }else{
                        cout<<"Plugging the diognostics computer into your ships central computer, it tells you that one small relay is damaged and preventing the launch thrusters from opperating.\n";
                        cout<<"This is a simple fix, as you open the appropriate panel, is causes an electrical current to course through your body.\nThis cooks your flesh instantly and killing you.\n";
                        check3=true;
                        
                    }
                    break;
                }
                
                case 5:{//emergency radio
                    cout<<"You try the radio, unaware that it was damaged in the crash.\n";
                    cout<<"You starve while waiting for a rescue that will never come.\n";
                    check3 = true;
                    break;
                }

                default:{
                    system("cls");
                    cout<<"INVALID IMPUT:\n";
                    cout<<"Try rephrasing your response.\n";
                    check3 = true;
                    break;
                }

            }

        }else{
            system("cls");
            cout<<"INVALID IMPUT:\n";
            cout<<"Try rephrasing your response.\n";
            cin>>choice3;            

        }
    }
this_thread::sleep_for(std::chrono::milliseconds(10000));
cout<<"----------\n";
cout<<"GAME OVER.\n";
cout<<"----------\n";

return 0;
}