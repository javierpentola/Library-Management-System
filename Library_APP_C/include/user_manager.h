#ifndef USER_MANAGER_H
#define USER_MANAGER_H

void register_new_user(char* name, char* address, char* contact_details);
void renew_membership(int user_id);
void cancel_membership(int user_id);
void manage_users();

#endif
