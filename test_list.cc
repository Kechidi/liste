#include <string>
#include <iostream>
#include "liste.cc"
using namespace std;

int main() {
    Liste<string> personnel;

    cout << "ajout des elements" << endl;
    personnel.ajouter("tete de liste");
    personnel.ajouter("milo");
    personnel.ajouter("toto");

    Iterateur<string> pos = personnel.debut();

    personnel.inserer(pos, "titi");
    cout << personnel<< endl;

    //---------  inserer au melieu----------/
    cout << "inserer a la troisiem position (milieu)" << endl;
    pos++;
    pos++;
    personnel.inserer(pos, "lkjh");
    cout << personnel << endl;
}
  /*

    //-------- supprimer en tete ---------/
    cout << "test" << endl;
    pos--;pos--;pos--;
    l.supprimer(pos);
    cout << "list2 :" << l << endl;

//------- supprimer à la fin ----------/
  // Iterateur<string> pos = l.debut();
    cout << "test" << endl;
    pos++; pos++; ++pos;++pos;++pos;
    l.supprimer(pos);
    cout << "list2 :" << l << endl;

    l.ajouter("coucou hh");

    cout << l << endl;



}*/