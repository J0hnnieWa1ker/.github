#include <stdio.h>

int main(){
    struct Company
    {
        char name[25];
        char address[50];
        char phone[15];
    };

    struct Position
    {
        char title[40];
        char start[10];
        char end[10];
        char description[1000];
    };
 
    const char summary[] =
    "`docker run --rm j0hnniewa1ker/readme:ecmc > README.md`                         \n"
    "# [J0hnniewa1ker](https://www.linkedin.com/in/j0hnniewa1ker/)                   \n"
    "## Summary                                                                      \n"
    "- After moving back to Kansas I lost motivation in competing in a high stress "
    "environment so I stepped back and focused on gardening. So a supportive, "
    "family-like culture sounds very attractive.                                     \n"
    "## Recommendations                                                              \n"
    "- Jon would be a great fit for any technical leadership role. His ability to solve"
    " problems, methodically tackle large projects, teach those who are less tenured, "
    "and his drive to always keep learning have always impressed me and will be sure "
    "to bring value to any future employers.\n"
    "  - Andrew \n"
    "- I strongly recommend Jon for any engineering leadership role. He brings a blend "
    "of technical depth, strategic thinking, and people-first leadership.\n"
    "  - Mike \n"
    "- His balanced approach and collaborative mindset elevate every project he "
    "touches.\n"
    "  - Steve \n"
    "- Jon’s leadership in this engagement demonstrated that he can absorb technical "
    "requirements and turn them into strategies that moves teams forward.\n"
    "  - Chris \n"
    "- more here: https://www.linkedin.com/in/j0hnniewa1ker/details/recommendations  \n"
    "## Experience                                                                   \n"
    "";
    printf("%s",summary);

    struct Company ibm = {"IBM",
                          "1 New Orchard Road, Armonk, NY 10504",
                          "1-800-426-4968" };
    struct Position client = {"Client Engineering Technology Engineer","6/2021","10/2023",
        "- Mentored clients and colleagues great practices around learning new skills.   \n"
        "- Wrote comprehensive workshops on Containers, Openshift, and Ansible           \n"
        "--------------------------------------------------------------------------------\n"
    };
    printf("### %s\n",ibm.name);
    printf("#### %s\n",client.title);
    printf("%s - %s\n",client.start,client.end);
    printf("%s \n", client.description);
 
    struct Company sbux = {"Starbucks",
                           "2401 Utah Avenue South, Seattle, WA 98134",
                           "1-206-318-7100" };
    struct Position dev = {"Application Developer","9/2016","5/2021",
        "- Nginx Project built with Chef Automate including Kitchen and Inspec validation\n"
        "  - Wrote workshops on Chef basics and nginx endpoint management using Automate \n"
        "  - Presented workshops to several teams throughout Starbucks                   \n"
        "- OpenStack project focused on improving image delivery to edge devices         \n"
        "- Packer qemu_builder project to manage changes to IoT images                   \n"
        "- Lead Performance Test team                                                    \n"
        "  - lead internal team standups, I also joined Developer standups               \n"
        "  - wrote stories and managed team Kanban board                                 \n"
        "  - pushed for code to be converted to .Net core                                \n"
        "    - we deployed 20,000 docker containers daily to test Azure IoT Hub solution \n"
        "--------------------------------------------------------------------------------\n"
    };
    printf("### %s\n",sbux.name);
    printf("#### %s\n",dev.title);
    printf("%s - %s\n",dev.start,dev.end);
    printf("%s \n", dev.description);

    struct Company aliss = {"Efinancial",
                            "1621 114th Ave SE Ste 118, Bellevue, WA 98015",
                            "1-800-482-6616" };
    struct Position devops = {"DevOps Engineer","11/2014","9/2016",
        "- Developed PowerShell Module to deploy environments in AWS                     \n"
        "- Upgraded TFS Server and mentored team how to use Release Manager              \n"
        "--------------------------------------------------------------------------------\n"
    };
    printf("### %s\n",aliss.name);
    printf("#### %s\n",devops.title);
    printf("%s - %s\n",devops.start,devops.end);
    printf("%s \n", devops.description);

    struct Company adbe = {"Adobe (contract)",
                           "801 N 34th St, Seattle, WA 98103",
                           "1-408-536-6000" };
    struct Position release = {"Release Engineer","6/2013","10/2014",
        "- Migrated legacy build systems to Jenkins and mentored teams how to manage them\n"
        "- Developed WinPE to automate Windows deployments                               \n"
        "- Developed DMG images to automate OSX deployments                              \n"
        "--------------------------------------------------------------------------------\n"
    };
    printf("### %s\n",adbe.name);
    printf("#### %s\n",release.title);
    printf("%s - %s\n",release.start,release.end);
    printf("%s \n", release.description); 

    struct Company msft = {"Microsoft (contract)",
                           "One Microsoft Way, Redmond, WA 98052",
                           "1-425-882-8080" };
    struct Position build = {"Build Engineer","2/2013","6/2013",
        "- Responsible for build automation, scripting, and release implementation       \n"
        "- Validated deployments passed QA before releasing HR and Staffing systems      \n"
        "--------------------------------------------------------------------------------\n"
    };
    printf("### %s\n",msft.name);
    printf("#### %s\n",build.title);
    printf("%s - %s\n",build.start,build.end);
    printf("%s \n", build.description);
 
    const char process[] =
    "```                                                                             \n"
    "gcc -o readme --static -g readme.c                                              \n"
    "docker build . -t j0hnniewa1ker/readme:ecmc                                     \n"
    "docker push j0hnniewa1ker/readme:ecmc                                           \n"
    "git checkout -b ecmc                                                            \n"
    "git add README.md readme.c                                                      \n"
    "git commit -m \"Ellsworth County Medical Center - IT Manager #8\"               \n"
    "git push                                                                        \n"
    "```                                                                             \n"
    "[ECMC - IT Manager #8](https://github.com/J0hnnieWa1ker/.github/issues/8)       \n"
    "";
    printf("%s",process);
    return 0;
}
