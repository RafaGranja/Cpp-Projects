#include "google_password.hpp"

#include <iostream>
#include <stdio.h>

void GooglePassword::insert(const std::string& url,
                            const std::string& login,
                            const std::string& password) {
  // TODO: Implemente este metodo
  /**
   * Lembre-se que as credenciais so podem ser inseridas com as seguintes
   * condicoes:
   * Condicao 1: A senha nao pode ter a seguencia '123456'.
   * Condicao 2: A senha nao pode ter mais do que 50 caracteres (no maximo 50).
   * Condicao 3: A senha nao pode ter menos do que 6 caracteres (no minimo 6).
   * Condicao 4: A senha nao pode ter caracteres em branco ' '.
   *
   * Exemplos de senhas invalidas:
   * 123456
   * test_123456
   * 123456_test
   * test_123456_test
   * senha test
   */
   if(this->checkPassword(password)==1){
       Usuario usuario=Usuario(login,password);
       this->m_passwords.insert(std::pair<std::string,Usuario>(url,usuario));
   }
   else{
       return;
   }
}

void GooglePassword::remove(const std::string& url) {
  // TODO: Implemente este metodo
  for (auto it = this->m_passwords.begin(); it != this->m_passwords.end(); it++){
      if(it->first==url){
          this->m_passwords.erase(it);
      }
      else{
          continue;
      }
  }
}


void GooglePassword::update(const std::string& url,
                            const std::string& login,
                            const std::string& old_password,
                            const std::string& new_password) {
  // TODO: Implemente este metodo
  /**
   * Caso a url nao seja encontrada, o metodo update deve ser ignorado, ou seja,
   * este metodo nao pode inserir novas credenciais. Alem disso, as informacoes
   * do usuario so podem ser atualizadas se a senha antiga for igual a senha
   * atual. Nao esqueca de verificar se o novo password tambem e valido.
   */
   for (auto it = this->m_passwords.begin(); it != this->m_passwords.end(); it++){
       if(it->first==url && it->second.getPassword()==old_password && this->checkPassword(new_password)==1){
           it->second.setPassword(new_password);
           it->second.setLogin(login);
       }
       else{
           continue;
       }
   }
}

void GooglePassword::printPasswords() {
  // TODO: Implemente este metodo
  /**
   * Exemplo de saida:
   * www.site.com: login and password
   *
   */
    int i=0;
    for (auto it = this->m_passwords.begin(); it != this->m_passwords.end(); it++){
        i++;
    }
    std::cout<<i<<std::endl;
    for (auto it = this->m_passwords.begin(); it != this->m_passwords.end(); it++){
        std::cout<<it->first<<": "<<it->second.getLogin()<< " and "<<it->second.getPassword()<<std::endl;   
    }
}

bool GooglePassword::checkPassword(const std::string& password) const {
    std::size_t found;
    if(password.size()<6 || password.size()>50){
        return 0;
    }
    found = password.find("123456");
    if(found!=std::string::npos){
        return 0;
    }
    found = password.find(' ');
    if(found!=std::string::npos){
        return 0;
    }
   return 1;
}

