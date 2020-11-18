#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using std::cout;
using std::string;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
using std::cin;
string openText = "[TRANSMISSIONRECIEVED]\n\nThis world consists of a Large Covenant Spire outpost surrounded by sand dunes and numerous mesas, \nwith some canyons in the northern part of the map. \nSpires are Covenant structures that serve as bases of operation during ground engagements.\nThey function as teleportation hubs for invading forces,\nand are also capable of projecting energy shields over a large radius.\nCovenant forces utilize these teleportation spires during large - scale operations";
string openText2 = "\n\nYour mission is to destroy Spire One, \none of the many large towers the Covenant have placed around their landing zone \nby deactivating Spire One's energy shield, \nThen leave the area on a Falcon accompanied by Carter - A259 and Jorge - 052 \nas the UNSC Grafton will destroy the Spire. \n\n\n[ENDOFTRANSMISSION]\n\n\n";
void type(const string& text, unsigned int millis_per_char)
{
    for (const char c : text)
    {
        cout << c << flush;
        sleep_for(milliseconds(millis_per_char));
    }
}
void typeD(const string& text, unsigned int millis_per_char)
{
    for (const char c : text)
    {
        cout << c << flush;
        sleep_for(milliseconds(millis_per_char));
    }
    sleep_for(milliseconds(200));

}
void Open()
{
    type(openText, 20);
    sleep_for(milliseconds(1000));
    type(openText2, 40);
    for (int i = 0; i < 30; i++) {
        cout << "\n";
        sleep_for(milliseconds(50));
    }
    sleep_for(milliseconds(3000));
}
int main() 
{
    Open();
   
    typeD("As the Falcon lands and the dust settles, the Master Chief disembarks the UH-144 Falcon after a long journey.\nHe knows his mission and will waste no time to deal a heavy blow to the Covenants reign of terror.\n\n", 50);
    type("\n    /------------------\\\n    |  ^   ^    ^    ^ |\n    |__|___|___ |____|_|\n    |  I   I    I    I |\n    |_|#[_|#[__|#[__|#[|\n    |  |   |    |    | |\n    |  _   _    _    _ |\n    |		       |\n    |_O__O_O_O_O_O__O__|\n    \\__________________/\n", 15);
    type("\nAlly: Chief!\n<You walk over to a soldier gesturing to a large crate holding a variety of rifles and a long row of grenades at the bottom>\nAlly: Only the best for the Spartans sir, your pick.", 60);
    type("\n\n1: Sniper Rifle\n\n2: Assault Rifle\n\n3: DMR\n\nChoose by typing 1/2/3: ", 30);
    int weapon;
    int path1;
    cin >> weapon;
    switch (weapon) {
    case 1:
        type("\n\n          ________________\n_________(                )_____________________\n|                ||||||||||||| _________________|--->\n|     \\  | |---|____|---------|\n \____|  /_/   |____|       \\----\n", 15);
        type("\n\nAlly: Good weapon for long range engagement.", 30);
        break;
        
    case 2:
        type("\n\n           ______\n|---___|-----------______\n| |||  \"\"\" ========== -----> / \n \\|||||||()___---______/--\n  \\\\\\ _ ///\n    ----\n", 15);
        type("\n\nAlly: Close-Range weapon, but I hear spartans aren't afraid to run right in", 30);
        break;
        
    case 3:
        type("\n\n                         |------\\\n_______________          |-\\     )_______________\n|  ||||||||||||\\--------/         |||||||||||||| \\_____\n|  |||||||||||||||     :::::::::::::\"\"\"           _____-------->\n|  |||||||||||||||   ---|   |----\\---------------/\n|____         / --------|   |  )  |\n     \\-------/          \\-------/\n", 15);
        type("\n\nAlly: Good choice, a medium range weapon with a lot of power behind it, but watch that recoil.", 30);
        break;
        
    }
    sleep_for(milliseconds(400));
    //-------------------------------------------Choice1 Done
    type("\n\nAlly: Now you're all geared up Chief, your Warthog is over there\n\n<The soldier points to a pristine Warthog that has yet to see combat.>\n", 30);
    sleep_for(milliseconds(400));
    type("\n<You enter the vehicles driver's seat and look out the windshield to see 3 possible routes to the Spire.>\n", 30);
    type("\n\n1: To the left up a hill there is a path that seems to lead to a Covenant outpost.\n\n2: On the Right, there is a black road that seems to be a straight shot to the Spire, cutting through Covenant hunting parties\n\n3: Behind you there is an abandoned tunnel that ends inside of the Covenant base near the Spire.\n\n\nChoose by typing 1/2/3: ", 30);
    cin >> path1;
    switch (path1) {

    case 1:
        if (weapon == 1) {
            type("\n<Now armed with a Sniper Rifle and a new sense of determination, you steer the wheel left, up the sandy hill>", 30);
        }
        else if (weapon == 2) {
            type("\n<With the weapon most associated with the UNSC, you set your sights to the top of the sandy hill>", 30);
        }
        else if (weapon == 3) {
            type("\n<The Warthog hums on and you sling the DMR over your back as you drive up the hill, awaiting what danger lies on the other side.>", 30);
        }
        else {
            type("\nYou go left", 30);
        }
        break;

    case 2:
        if (weapon == 1) {
            type("\n<The Sniper Rifle is thought to only be for long range combat, but the Spartans are known for uncoventional but effective techniques.>", 30);
        }
        else if (weapon == 2) {
            type("\n<With an Assault Rifle, A risky plan, and a little bit of luck, you steer right, with the Spire on the horizon.>", 30);
        }
        else if (weapon == 3) {
            type("\n<Your trusty DMR has not failed you before, and you know it will not fail you today as you drive straight towards the Covenants Spire>", 30);
        }
        else {
            type("\nYou go Right", 30);
        }
        break;
    case 3:
        if (weapon == 1) {
            type("\n<Sniper Rifles have long been used to suprise opponents, your talent for sneak may bring you victory on this mission.>", 30);
        }
        else if(weapon == 2) {
            type("\n<The covenant have no idea what kind of chaos is upon them as you drive into the shadowy tunnel with your Assault Rifle on your back>", 30);
        }
        else if (weapon == 3) {
            type("\n<You believe the weapon should match the strategy, and you take the sly route to the heart of the Covenant on this world with the DMR at your side.>", 30);
        }
        else {
            type("\nYou go Flank", 30);
        }
        break;
    }
    //-------------------------------------------Choice2 Done
    sleep_for(milliseconds(1000));
    for (int i = 0; i < 30; i++) {
        cout << "\n";
        sleep_for(milliseconds(50));
    }
    type("              _______--*--_______\n             /        / \\        \\\n           -         | | |	  -\n          /          | | |         \\\n         -           | | |	    -\n        /            | | |           \\\n       -            -  |  -	      -\n      /             -  ^  -            \\\n     -              /. - .\\             -\n    /               -------              \\\n", 10);
    sleep_for(milliseconds(6000));
}