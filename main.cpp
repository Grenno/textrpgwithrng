#include <iostream>

int main()
{
    std::string charName;
    std::string falseName;
    std::string charSpecies;
    std::string charSex;
    std::string charAge;
    int placeOfOrigin;
    bool greetDrowgal;
    bool tellName;
    std::string start;

    std::cout << "   ENTER THE WORLD OF . . .";
    std::cout << R"(
       _ __   __  _ __
      ' )  ) / ')' )  )
       /  / /  /  /--'
      /  (_(__/  /  \_'

)" << '\n';
// Character sheet
    std::cout << "What is your name? ";
// Input validation for name
    bool validName;
    do {
        std::getline(std::cin, charName);
        validName = true;
        for (std::size_t i{}; i < charName.length() && validName; ++i) {
            if (!(std::isalpha(static_cast<unsigned char>(charName[i])) ||
                  std::isspace(static_cast<unsigned char>(charName[i]))))
                validName = false;
        }
    } while (!validName);
    std::cout << "What is your species? ";
 // Input validation for species
    bool validSpecies;
    do {
        std::getline(std::cin, charSpecies);
        validSpecies = true;
        for (std::size_t i{}; i < charSpecies.length() && validSpecies; ++i) {
            if (!(std::isalpha(static_cast<unsigned char>(charSpecies[i])) || std::isspace (static_cast<unsigned char>(charSpecies[i]))))
                validSpecies = false;
        }
    } while (!validSpecies);



// Variables we will use in first adventure
// First adventure
    std::cout << std::endl;
    std::cout << "Are you ready to begin the adventure?" << std::endl;
    std::cout << std::endl;
    std::cout << "-----------------------------------------------------------------" << std::endl;
    std::cin >> start;
    if (!(start = 'Yes', 'Y', 'y', 'yes', 'Aye', 'aye', 'Ye', 'ye', 'YES'))
        {   std::cout << "Make ready, then!";
            std::cin.clear();
            std::cin.ignore(); }
    else
    {   std::cout << std::endl;
        std::cout << "The streambank is quiet, save for the rustle\n";
        std::cout << " of a gentle summer's breeze caressing the treetops\n";
        std::cout << " and the playful burble of the water beside you. The old\n";
        std::cout << " otter's footfalls behind you seem as natural as can be." << std::endl;
        std::cout << "He is tall and muscular, bronzed by many seasons of sun,\n";
        std::cout << " and though weatherbeaten about the face, you'd have been\n";
        std::cout << " hard-pressed to find a kinder pair of friendly brown eyes." << std:: endl;
        std::cout << "The otter smiles warmly. 'Grand day to be alive, ain't it?'" << std::endl;
        std::cout << std::endl;
        std::cout << "0) Ignore" << std::endl;
        std::cout << "1) Greet" << std::endl;
        std::cout << "-----------------------------------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cin >> greetDrowgal;

        //Input validation for greeting Drowgal
        switch (greetDrowgal)
        {   case 1:
            std::cout << std::endl;
            std::cout << "You nod blissfully and offer him a place to sit beside you on the bank." << std::endl;
            std::cout << std::endl;
            break;
            case 0:
            std::cout << std::endl;
            std::cout << "You turn up your nose at the pilgrim's paw of companionship.\n";
            std::cout << "He seems unaffected. With a shrug, he walks on his merry way,\n";
            std::cout << " leaving you to spend your summer noon as you wish.";
            std::cout << std::endl;
            std::cout << "------------------------------ The End ------------------------------";
            std::cout << std::endl;
        return 0;
        }

    // Successful greeting continues story
    std::cout << "The grizzled rover grins and extends a strong paw to shake. 'Wot's yore name, matey?' " << std::endl;
        std::cout << std::endl;
        std::cout << "0) Lie" << std::endl;
        std::cout << "1) Tell him" << std::endl;
        std::cout << "-----------------------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cin >> tellName;
    std::cout << std::endl;

    // Input validation for telling Drowgal your name
    if (tellName == 1)
    {
    std::cout << std::endl;
    std::cout << "'" << charName << ",' you say with a grin. \n";
    std::cout << std::endl;

    std::cout << "'" << charName << ", ye say? A grand name. Whither d'ye hail?' " << std::endl;
    std::cout << std::endl;
    std::cout << "1) Riveril" << std::endl;
    std::cout << "2) Under Tree" << std::endl;
    std::cout << "3) Gannivere" << std::endl;
    std::cout << "-----------------------------------------------------------------" << std::endl;
    std::cin >> placeOfOrigin;
    }
    else if (tellName == 0)
    {
            std::cout << std::endl;
    std::cout << "'Jerebar the Pilgrim,' you manage, avoiding his eyes. \n";
    std::cout << std::endl;
    std::cout << "He eyes you curiously. 'Jerebar, ye say? Where are ye from, Jerebar?' " << std::endl;
    std::cout << std::endl;
    std::cout << "1) Riveril" << std::endl;
    std::cout << "2) Under Tree" << std::endl;
    std::cout << "3) Gannivere" << std::endl;
    std::cout << "-----------------------------------------------------------------" << std::endl;
    std::cin >> placeOfOrigin;
    }
    else
    {
    std::cout << "The big creature scratches his head, stymied. 'Huh? That's no name as I ever 'eard. What's yore name?'";
    std::cin.clear();
    }
    std::cout << std::endl;

    // Input validation for place of origin
    switch (placeOfOrigin)
    {   case 1:
        std::cout << "'Tis a beautiful land we share, " << charName << ". Streams such as this slake the thirst an' cool the mind.'";
        std::cout << std::endl;
        break;
        case 2:
        std::cout << "'Hm. The squirrel lands are mysterious to match their years. Quiet in their own way, but not like my Riveril.'";
        std::cout << std::endl;
        break;
        case 3:
        std::cout << "'Ganniverian, eh. I wish I could say yore kind were more welcome 'ere in Riveril. Wounds too old, too deep.'";
        std::cout << std::endl;
        break;
        default: std::cout << "The otter shakes his whiskery head, moonstruck. ";
            std::cout << "'Eh? That ain't a place as I ever 'eard of!'";
            std::cin.clear();
    }
    }
    return 0;
}






