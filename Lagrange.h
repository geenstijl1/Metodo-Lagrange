#ifndef Lagrange_h
#define Lagrange_h
 
using namespace std;
class Lagrange{
    private:
        float s, x, p, xp[10], yp[10];
        int n,j,i;
    public:
        void xn(); 
        void puntos();
        void calculos();
        void impresion();

};

void Lagrange::xn() {
    cout <<"Ingresa X y N " <<endl;
    cout << "X: -> ";
    cin >> x;
    cout << "N: -> ";
    cin >> n;
}

void Lagrange::puntos(){    
    for(int i = 1; i <= n; i++){
        cout << "Ingresa las x de los puntos: X(" << i <<")" <<endl;
        cin >> xp[i];  
        cout << "Ingresa las y de los puntos: Y("<<i<<")"<<endl;
        cin >> yp[i];
    }    
}
void Lagrange::calculos() {
    s = 0;
    for(i  = 1; i <= n; i++) {
        p = 1;
        for (j = 1; j <= n; j++) {
            if(i != j){
                p = (x - xp[j]) / (xp[i] - xp[j]) * p;
            }
        }
            s = s + (yp[i] * p); 
    }    
}

void Lagrange::impresion(){
    cout <<"Y --> " << s <<endl;


}

#endif