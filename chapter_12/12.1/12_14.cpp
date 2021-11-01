#include<iostream>
#include<memory>
#include<string>
using namespace std;
struct connection{
    string ip;
    int port;
    connection(string i, int p):ip(i), port(p){};
};
struct destination{
    string ip;
    int port;
    destination(string i, int p):ip(i), port(p){};
};
connection connect(destination *pdest){
    shared_ptr<connection> ptr(new connection(pdest -> ip, pdest -> port));
    cout << "连接建立：(" << ptr.use_count() << ")" << endl;
    return *ptr;
}
void disconnect(connection pConn){
    cout << "connection close(" << pConn. ip << ";" <<pConn.port << ")" << endl;
}
void end_conection(connection *pConn){
    disconnect(*pConn);
}
int main(){
    destination dest("192.168.1.1", 10086);
    connection conn = connect(&dest);
    shared_ptr<connection> ptr(&conn, end_conection);
    cout << "connecing now(" << ptr.use_count() << ")" << endl;
}