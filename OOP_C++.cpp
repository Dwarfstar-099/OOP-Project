# include <iostream>
using namespace std;

class myclub{
    private :
    string admin, coadmin, moderator;

    public :
    int memberCount, projectCreated;
    string project[3] = {"MySpace", "Tech Hunt", "Ninja Spot"};
    void infoAdmin (string a, string b, string c);
    void dataExtract(){
        cout << "Admin : " << admin << endl;
        cout << "Co-Admin : " << coadmin << endl;
        cout << "Moderator : " << moderator << endl;
        cout << "Total Members : " << memberCount << endl;
        cout << "Project Created : " << projectCreated << endl;
        for (int i = 0; i<3; i++){
            cout << project[i] << " ";
        }
        
    }
};
void myclub :: infoAdmin(string a, string b, string c){
    admin = a;
    coadmin = b;
    moderator = c;
}
int main (){
    myclub KraftyKoder;
    cin >> KraftyKoder.memberCount >> KraftyKoder.projectCreated;
    KraftyKoder.infoAdmin("Mark", "Tom", "Harry");
    KraftyKoder.dataExtract();

return 0;
}