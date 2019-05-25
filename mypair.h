#ifndef MYPAIR_H
#define MYPAIR_H
#include<bits/stdc++.h> // todas bibliotecas do c++ ,  para usar as classes como  a string
using namespace std;
 // inline é para deixar a chamada na função mais rapida
template<class type1,class type2>
class myPair
{
public:
   type1 first;
   type2 second;
  myPair<type1,type2> &operator=(const myPair<type1,type2> &);//atribuição
  bool operator ==(const myPair<type1,type2> &);//overloading sing equal
  bool operator !=(const myPair<type1,type2> &); // diference
  bool operator > (const myPair<type1,type2> &); // bigger
  bool operator >=(const myPair<type1,type2> &); // bigger equal
  bool operator < (const myPair<type1,type2> &);
  bool operator <=(const myPair<type1,type2> &);
  friend  ostream &operator<<(ostream & os,myPair<type1,type2> &__p){
      os<<"[|P| "<<__p.second<<" ,|V| "<<__p.first<<" ]";
      return os;}


  //myPair();
};
template<class type1, class type2>
inline myPair<type1,type2> &myPair<type1,type2>::operator=(const myPair<type1, type2> &__p){//atribuição de um myPair
    first = __p.first;
    second = __p.second;
    return *this;
}

template<class type1, class type2>
inline bool myPair<type1,type2>::operator ==(const myPair<type1, type2> &__p){ // verificar se são iguais
    return (__p.first==first&&second==__p.second);
}

template<class type1, class type2>
inline bool myPair<type1,type2>::operator !=(const myPair<type1, type2> &__p){
    return !(this==__p);
}

template<class type1, class type2>
inline bool myPair<type1,type2>::operator >(const myPair<type1, type2> &__x){ //!(__x.first>first) verificando se os dois são iguais
    return (first>__x.first||(!(__x.first>first)&&__x.second<second)); // se O primiro são iguais então compara o segundo
}

template<class type1, class type2>
inline bool myPair<type1,type2>::operator >=(const myPair<type1, type2> &__p){ // verificando se e maior ou igual
    return (__p>this||__p==this);
}

template<class type1, class type2>
 inline bool myPair<type1,type2>::operator <(const myPair<type1, type2> &__p){//verificar se e menor ,se o primeiro for igual compara o segundo
    return first<__p.first||(!(__p.first<first)&&second<__p.second);
}

template<class type1, class type2>
inline bool myPair<type1,type2>::operator <=(const myPair<type1, type2> &__p){
    return (this<__p||this==__p);
}



#endif // MYPAIR_H
