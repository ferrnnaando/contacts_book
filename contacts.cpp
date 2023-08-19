#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>

int main() {
     std::string names[] = {
        "Alice", "Bob", "Charlie", "David", "Emma", "Fiona", "George", "Hannah",
        "Isaac", "Jane", "Kevin", "Laura", "Michael", "Nina", "Oscar", "Pamela",
        "Quincy", "Rachel", "Samuel", "Tina", "Ulysses", "Victoria", "William", "Xena",
        "Yasmine", "Zachary", "Alex", "Bella", "Caleb", "Diana", "Ethan", "Felicity",
        "Gavin", "Holly", "Ian", "Jasmine", "Kyle", "Lily", "Mason", "Natalie",
        "Oliver", "Penelope", "Quinn", "Riley", "Sophia", "Tristan", "Uma", "Vincent",
        "Wendy", "Xander", "Yara", "Zane", "Amy", "Benjamin", "Chloe", "Daniel",
        "Emily", "Frank", "Grace", "Henry", "Isabella", "Jacob", "Katherine", "Liam",
        "Madison", "Noah", "Olivia", "Peter", "Quincy", "Ryan", "Sarah", "Thomas",
        "Ulyana", "Victor", "Willa", "Xavier", "Yvonne", "Zara"
    };

    std::string gmails[] = {
        "john.doe@gmail.com", "jane.smith@gmail.com", "michael.johnson@gmail.com", "emily.wilson@gmail.com", "david.jackson@gmail.com",
        "olivia.roberts@gmail.com", "william.jones@gmail.com", "sophia.miller@gmail.com", "ethan.thompson@gmail.com", "ava.anderson@gmail.com",
        "matthew.davis@gmail.com", "oliver.moore@gmail.com", "emma.taylor@gmail.com", "liam.wilson@gmail.com", "mia.johnson@gmail.com",
        "noah.anderson@gmail.com", "isabella.martinez@gmail.com", "logan.garcia@gmail.com", "amelia.miller@gmail.com", "james.brown@gmail.com",
        "oliver.taylor@gmail.com", "olivia.martinez@gmail.com", "emma.jones@gmail.com", "william.garcia@gmail.com", "ava.smith@gmail.com",
        "olivia.miller@gmail.com", "noah.johnson@gmail.com", "isabella.jones@gmail.com", "liam.davis@gmail.com", "mia.martinez@gmail.com",
        "james.anderson@gmail.com", "amelia.smith@gmail.com", "logan.johnson@gmail.com", "emily.davis@gmail.com", "david.wilson@gmail.com",
        "oliver.jones@gmail.com", "jane.miller@gmail.com", "michael.brown@gmail.com", "william.miller@gmail.com", "sophia.garcia@gmail.com",
        "ethan.garcia@gmail.com", "ava.jones@gmail.com", "noah.moore@gmail.com", "isabella.brown@gmail.com", "liam.taylor@gmail.com",
        "mia.anderson@gmail.com", "james.jones@gmail.com", "amelia.brown@gmail.com", "logan.brown@gmail.com", "olivia.anderson@gmail.com",
        "emily.brown@gmail.com", "david.miller@gmail.com", "oliver.smith@gmail.com", "emma.garcia@gmail.com", "william.anderson@gmail.com",
        "sophia.brown@gmail.com", "ethan.martinez@gmail.com", "ava.brown@gmail.com", "noah.taylor@gmail.com", "isabella.taylor@gmail.com",
        "liam.garcia@gmail.com", "mia.brown@gmail.com", "james.miller@gmail.com", "amelia.jones@gmail.com", "logan.garcia@gmail.com",
        "oliver.garcia@gmail.com", "emily.martinez@gmail.com", "david.garcia@gmail.com", "olivia.jones@gmail.com", "william.jones@gmail.com",
        "sophia.moore@gmail.com", "ethan.anderson@gmail.com", "ava.martinez@gmail.com", "noah.smith@gmail.com", "isabella.garcia@gmail.com",
        "liam.brown@gmail.com", "mia.jones@gmail.com", "james.taylor@gmail.com", "amelia.taylor@gmail.com", "logan.martinez@gmail.com",
        "oliver.martinez@gmail.com", "emily.jones@gmail.com", "david.jones@gmail.com", "olivia.taylor@gmail.com", "william.moore@gmail.com",
        "sophia.anderson@gmail.com", "ethan.brown@gmail.com", "ava.taylor@gmail.com", "noah.martinez@gmail.com", "isabella.smith@gmail.com",
        "liam.jones@gmail.com", "mia.moore@gmail.com", "james.garcia@gmail.com", "amelia.garcia@gmail.com", "logan.taylor@gmail.com"
    };

    std::string phone_numbers[] = {
        "555-123-4567",
        "555-987-6543",
        "555-555-1234",
        "555-789-0123",
        "555-456-7890",
        "555-234-5678",
        "555-876-5432",
        "555-321-0987",
        "555-789-4561",
        "555-654-2319",
        "555-987-1230",
        "555-345-6789",
        "555-567-8901",
        "555-890-1234",
        "555-432-1098",
        "555-678-4321",
        "555-987-6540",
        "555-210-5432",
        "555-876-9012",
        "555-543-2109",
        "555-890-4567",
        "555-123-8901",
        "555-456-1234",
        "555-789-5678",
        "555-234-9012",
        "555-567-2345",
        "555-901-5678",
        "555-123-4560",
        "555-789-0123",
        "555-234-5678",
        "555-567-8901",
        "555-890-1234",
        "555-234-5678",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
        "555-345-6789",
        "555-678-9012",
        "555-901-2345",
    };

    struct contact_fields {
        std::string gmail;
        std::string phone;
    };

    std::unordered_map<std::string, contact_fields> contact;
    std::unordered_map<std::string, contact_fields>::iterator it;
    int count = sizeof(names) / sizeof(names[0]);

    for(int i = 0; i < count; i++) {
        contact[names[i]] = {gmails[i], phone_numbers[i]};
        std::cout << "New contact!:\n  " << names[i] << ": " << contact[names[i]].gmail << " | " << contact[names[i]].phone << std::endl;
    }

    return 0;
}