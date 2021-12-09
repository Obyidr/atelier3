#include <iostream>
#include <string>
#include <math.h>
using namespace std;
using std::pow;

////ex1
//creation du classe
class MyClass
{
public:
    int numero;
public:
    //constructeur
    MyClass(int numero)
    {
        numero = numero;
        cout<<"votre nombre est:"<<numero<<endl;
    }
    //destructeurZ
    ~MyClass()
    {
         cout<< "le numero a été suprimer:" <<numero<<endl;
    }
};

int main()
{
    MyClass n = MyClass(10);
    return 0;
}


////ex2
//création de classe shape
class Shape
{
public:
  float h, l;
public:
  Shape(float l, float h){
    h = h;
    l = l;
  }
};

//création des classes hérités
class Rectangle: public Shape
{
public:
  Rectangle(float L, float H): Shape(l,h)
  {
      l=L;
      h=H;
  }
  float area()
  {
    return (h*l);
  }
};
class Triangle: public Shape
{
public:
  Triangle(float L, float H) : Shape(l, h)
  {
      l=L;
      h=H;
  }
  float area()
  {
    return (h * l / 2);
  }
};

 main (){
  float htr,lgr;
  cout << "entrer votre hauteur de rectangle: ";
  cin >>htr;
  cout << "entrer votre largeur de rectangle: ";
  cin >>lgr;
  Rectangle rectangle(htr,lgr);
  cout<<"la surface de cett rectangle est : " << rectangle.area() << endl;
  float htt,lgt;
  cout << "entrer votre hauteur de triangle: ";
  cin >>htt;
  cout << "entrer votre largeur de triangle: ";
  cin >>lgt;
  Triangle triangle(htt,lgt);
  cout<<"la surface de cett triangle est : "  << triangle.area() << endl;
}

////ex3;
class complexe
{
public:
    int rel,img;
    complexe(int x,int y)
    {
        rel =x;
        img =y;
    }
    void display(int x,int y)
    {
        cout << "le résultat est :" << x << " + i" << y << endl;
    }
};

int main()
{
    //creation des nombres complexes
    int re1,im1,x;
    int re2,im2;
    //premier nombre
    cout << "creation de premier nombre \n";
        cout << "Entrez la partie reelle: ";
        cin >> re1;
        cout << "Entrez la partie imaginaire: ";
        cin >> im1;
    //desieme nombre
     cout << "creation de desiem nombre \n";
        cout << "Entrez la partie reelle: ";
        cin >> re2;
        cout << "Entrez la partie imaginaire: ";
        cin >> im2;

    //le menu
    cout << "quelle operateur vous pouvez choisir:"<<endl;
    cout << "1- addition" << endl << "2- soustraction" <<endl << "3- multiplication" <<endl;
    cout << "4- égalité" << endl;
    cout << "entrer votre choix: ";

    //les codton de choix
        cin >>x;
    while( x<=0 || x>4 ){
        cout << "entrer un nombre entre 1 et 5"<<endl;
        cout << "entrer votre choix: ";
        cin >>x;}
if(x == 1){
     complexe z1(re1,im1);
    complexe z2(re2,im2);
    int r1 = z1.rel+z2.rel;
    int ii = z1.img+z2.img;
    complexe z3(r1,ii);
    z3.display(r1,ii);}
if(x==2){
    complexe z1(re1,im1);
    complexe z2(re2,im2);
    int r1 = z1.rel-z2.rel;
    int ii = z1.img-z2.img;
    complexe z3(r1,ii);
    z3.display(r1,ii);}
if(x==3){
    complexe z1(re1,im1);
    complexe z2(re2,im2);
    int r1 = (z1.rel*z2.rel)-(z1.img*z2.img);
    int ii = (z1.rel*z2.img)+(z1.img*z2.rel);
    complexe z3(r1,ii);
    z3.display(r1,ii);}
if(x==4){
    complexe z1(re1,im1);
    complexe z2(re2,im2);
    if(z1.rel==z2.rel & z1.img==z2.img)
        cout << "les deux complexes sont egaux"<<endl;
    else
        cout << "les deux complexes sont diffents" <<endl;
}

}

////ex4
class mere
{
public:
    string name;
    int age;
     void display()
    {
        cout << "bonjour" << name<< endl;
    }

};

class fille : public mere {
public:
    void display()
    {
        cout << "bonjour "<<name<<" votre age est "<<age<<endl;
    }
};
int main()
{
    fille f1;
    f1.age=20;
    f1.name="oubay";
    f1.display();
    return 0;
}


////ex5
class animal
{
public:
    string nom;
    int age;
    void set_value()
    {
        cout << "cette animal est tre different" <<endl;
    }
};
//creation de classe zebra et dolphin
class zebra : public animal
{
public:
    string lieu_origine;
    set_value()
    {
        cout<< "les information de votre animal est :-l'age: "<<age<< " -le nome:  " <<nom<< " -le lieu origine de zebra est: " << lieu_origine <<endl;
    }
};

class dolphin : public animal
{
public:
    string lieu_origine;
    set_value()
    {
         cout<< "les information de votre animal est :-l'age: "<<age<< " -le nome: " <<nom<< " -le lieu origine de dolphin est: " << lieu_origine <<endl;
    }
}
int main()
{
    string z1,l1;
    int a1;
    cout << "entrer le nome de zebra l'age est le lieu origine"<<endl;
    cin>> z1 >> a1 >> l1;
    zebra zeb;
    zeb.nom=z1;
    zeb.age=a1;
    zeb.lieu_origine=l1;
    zeb.set_value();
    string d2,l2;
    int a2;
    cout << "entrer le nome de dolphin l'age est le lieu origine"<<endl;
    cin>> d2 >> a2 >> l2;
    dolphin dol;
    dol.nom=d2;
    dol.age=a2;
    dol.lieu_origine=l2;
    dol.set_value();
    return 0;
}

//// ex6
class personne {
private:
    string nom , prenom;
    int age;
public:
     personne(string n,string p,int a){
         nom=n;
         prenom=p;
         age=a;
     }
     virtual void afficher();
};


class employe : public personne {
  private:
    float salaire;
  public:
    employe(string n,string p,int a,float sa):personne(n,p,a)
    {
      salaire=sa;
    }
    virtual void afficher();
  };


class chef : public employe {
private:
  string service;
public:
  chef(string n,string p,int a,float sa,string se):employe(n,p,a,sa)
  {
      service=se;
  }

    virtual void afficher();
};

class directeur : public chef {
private:
  string societe;
public:
  directeur(string n,string p,int a,float sa,string se,string so):chef(n,p,a,sa,se)
  {
      societe=so;
  }

    virtual void afficher();
};

void personne::afficher()
{
    cout << "le nome est: "<< nom<<endl<< "prenom: "<<prenom<<endl<<"age:" <<age<<endl;
}
void employe::afficher()
{
    personne::afficher();
    cout << "le salaire est :"<<salaire<<endl;
}
void chef ::afficher()
{
    employe::afficher();
    cout << "le service est: "<<service<<endl;
}
void directeur::afficher()
{
    chef::afficher();
    cout << "la societe est: "<<societe<<endl;
}
int  main()
{
    personne *pr[3];
    pr[0]=new employe("oubay", "el idrissi", 20,1200);
    pr[1]=new chef("oubay", "el idrissi", 20,12000,"service");
    pr[2]=new directeur("oubay","el idrissi",20,12000,"service", "societe");
    cout<<endl;
    for (int i=0;i<3;i++)
    {
        pr[i]->afficher();
        cout<<endl;
    }
}

////ex7
class vecteur3d
{
private:
    float x,y,z;
public:
    vecteur3d(float x1=0,float y1=0,float z1=0);
    friend ostream&  operator << (ostream& COUT,vecteur3d &v1);
    friend vecteur3d operator + (vecteur3d &v1,vecteur3d &v2);
    friend vecteur3d operator * (vecteur3d &v1,vecteur3d &v2);
    friend bool operator ==(vecteur3d &v1,vecteur3d &v2);
    friend float norme  (vecteur3d &v1);
    friend float normax (vecteur3d &v1,vecteur3d &v2);
    void afficher() {
		cout << "f("<<x<<","<<y<<","<<z<<")" << endl;
	}
};

//constructeur
vecteur3d::vecteur3d(float x1,float y1,float z1)
{
    this->x=x1;
    this->y=y1;
    this->z=z1;
}
//l'operateur de produit
vecteur3d operator * (vecteur3d &v1,vecteur3d &v2)
{
    vecteur3d v=vecteur3d();
    v.x=v1.x*v2.x;
    v.y=v1.y*v2.y;
    v.z=v1.z*v2.z;
    v.afficher();
    return v;
}
//l'operateur de la somme
vecteur3d operator + (vecteur3d &v1,vecteur3d &v2)
{
    vecteur3d v=vecteur3d();
    v.x=v1.x+v2.x;
    v.y=v1.y+v2.y;
    v.z=v1.z+v2.z;
    v.afficher();
    return v;
}
//l'operateur de comparaison
bool operator ==(vecteur3d &v1,vecteur3d &v2)
{
    if(v1.x!=v2.x | v1.y!=v2.y | v1.z!=v2.z)
        return false;
    if (v1.x==v2.x & v1.y==v2.y & v1.z==v2.z)
        return true;
}

//le norme de vecteur
float norme  (vecteur3d &v1)
{
    vecteur3d v=vecteur3d();
    v.x=v1.x*v1.x;
    v.y=v1.y*v1.y;
    v.z= v1.z*v1.z;
    return  sqrt(v.x + v.y + v.z);
}
//le norme maximal
float normax(vecteur3d &v1,vecteur3d &v2)
{
    if(norme(v1) > norme(v2))
        {
        cout << "la norme maximal est:" << norme(v1)<<endl;
        return norme(v1);
        }
    else
    {
        cout << "la norme maximal est:" << norme(v2)<<endl;
        return norme(v2);
    }
}
ostream&  operator << (ostream& COUT,vecteur3d &v1)
{
    return COUT;
}

int main()
{
    vecteur3d v(0,0,2),w(0,0,2);
    v.afficher();
    vecteur3d z=v+w;
    vecteur3d k=v*w;
    cout << "votre vecteur est:"<<boolalpha<<(v==w)<<endl;
    cout << "la somme des vecteur est:";
    z.afficher();
    cout << "le produit scalaire des vecteur est:";
    k.afficher();
    norme(v);
    normax(v,w);

    return 0;
}

////ex8
class Media
{
protected:
    string titre;
public:
    virtual void imprimer()
    {
        cout << "mon classe audio.";
    }
    char* id();

};
//audio
class audio: public Media
{
public:
     virtual void imprimer()
    {
        cout << "mon classe audio."<<endl;
    }
     char *id();
};
//livre
class livre: public Media
{
public:
     void imprimer()
    {
        cout << "mon classe livre.";
    }
    char *id();
};
//presse
class presse: public Media
{
public:
    virtual void imprimer()
    {
        cout << "mon classe presse.";
    }
     char *id();
};

class cd:public audio
{
public:
    void imprimer()
    {
        cout << "mon class cd."<<endl;
    }
    char *id();
};
class cassette:public audio
{
public:
    void imprimer()
    {
        cout << "mon classe cassette.";
    }
    char *id();
};
class disque:public audio
{
public:
    void imprimer()
    {
        cout << "mon classe disque.";
    }
    char *id();
};

class magazine:public presse
{
public:
    void imprimer()
    {
        cout << "mon classe magazine.";
    }
    char *id();
};
class journal:public presse
{
public:
    void imprimer()
    {
        cout << "mon classe journal.";
    }
    char *id();
};
class revue:public presse
{
public:
    void imprimer()
    {
        cout << "mon classe revue.";
    }
    char *id();
};
int main()
{
    Media* m1= new cd();
    m1->imprimer();
    Media* m2= new audio();
    m2->imprimer();
    return 0;
}

////ex9
class test {
public:
 static int counter;
void display()
{
counter++;
cout<<"hello"<<endl;
}
};
int test::counter=0;

int main(void) {
test a1;
a1.display();
cout<<"le totale du rapelle de fonction call est: "<<test::counter<<endl;
return 0;
}

