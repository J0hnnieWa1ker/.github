#include <sys/syscall.h>
#include <unistd.h>

const char header[] =
"# docker run --rm j0hnniewa1ker/readme:docker > README.md                       \n"
"```                                                                             \n"
"        _  ___  _                 _                    _ _                      \n"
"       (_)/ _ \\| |__  _ __  _ __ (_) _____      ____ _/ | | _____ _ __         \n"
"       | | | | | '_ \\| '_ \\| '_ \\| |/ _ \\ \\ /\\ / / _` | | |/ / _ \\ '__|  \n"
"       | | |_| | | | | | | | | | | |  __/\\ V  V / (_| | |   <  __/ |           \n"
"      _/ |\\___/|_| |_|_| |_|_| |_|_|\\___| \\_/\\_/ \\__,_|_|_|\\_\\___|_|     \n"
"     |__/                                                                       \n"
"```                                                                             \n"
"";
const char summary[] =
"## Summary                                                                      \n"
"  - I want to work at Docker                                                    \n"
"- Inspiration from [scratch](https://hub.docker.com/_/scratch) this resume      \n"
"  - endevers to \"Write clear, accurate, well-structured, and consistent technical"
" content from scratch.\"                                                        \n"
"- Championing Workshops-as-Containers and `hello-world` style newsletters       \n"
"- This role appears to be the place to spend more of my time on improving demos:\n"
"  - [a1](https://hub.docker.com/r/j0hnniewa1ker/a1)                             \n"
"  - [scratch](https://github.com/J0hnnieWa1ker/containers/tree/main/scratch)    \n"
"  - [oc-pwsh](https://github.com/J0hnnieWa1ker/oc-pwsh)                         \n"
"  - [addload](https://github.com/client-engineering-devops/ocp/tree/customer/addload)\n"
" - SVG files make great diagrams in README.md files in git repos.               \n"
"![SVG](https://raw.githubusercontent.com/client-engineering-devops/ocp/customer/svg/oc.svg)\n"
"## Experience                                                                   \n"
"";
const char ibm[] =
"### IBM                                                 June 2021 - October 2023\n"
"Client Engineering Technology Engineer                                          \n"
"- Mentored clients and colleagues great practices around learning new skills    \n"
"- Created content for learning Cloud Native approaches                          \n"
"--------------------------------------------------------------------------------\n"
"";
const char starbucks[] =
"### Starbucks                                          September 2016 - May 2021\n"
"Application Developer                                                           \n"
"- Nginx Project built with Chef Automate including Kitchen and Inspec validation\n"
"  - Wrote workshops on Chef basics and nginx endpoint management using Automate \n"
"  - Presented this workshop to DevOps team                                      \n"
"- OpenStack project focused on improving image delivery to edge devices         \n"
"- Packer qemu_builder project to manage changes to VM images                    \n"
"- Lead Performance Test team                                                    \n"
"  - lead internal team standups, I also joined Dev and Test standups            \n"
"  - wrote stories and managed team Kanban board                                 \n"
"  - pushed for code to be converted to .Net core                                \n"
"  - deployed 20,000 docker containers daily to test IoT Hub application         \n"
"--------------------------------------------------------------------------------\n"
"";
const char efinancial[] =
"### Efinancial                                    November 2014 - September 2016\n"
"Devops Engineer                                                                 \n"
"- Built dev, test and pre-producion environments in AWS via PowerShell          \n"
"- Upgraded TFS Server and mentored team how to use Release Manager              \n"
"--------------------------------------------------------------------------------\n"
"";
const char adobe[] =
"### Adobe (contact)                                     June 2013 - October 2014\n"
"Release Engineer                                                                \n"
"- Migrated legacy build systems to Jenkins and mentored teams how to manage them\n"
"- Developed WinPE to automate Windows deployments as VMs or on bare metal       \n"
"--------------------------------------------------------------------------------\n"
"";
const char microsoft[] =
"### Microsoft (contract)                               February 2013 - June 2013\n"
"Build Engineer                                                                  \n"
"- Responsible for build automation, scripting, and release implementation       \n"
"- Validated deployments passed QA before releasing to Pre-Production|Production \n"
"--------------------------------------------------------------------------------\n"
"";
const char process[] =
"```                                                                             \n"
"gcc -o readme --static -g readme.c                                              \n"
"docker build . -t j0hnniewa1ker/readme:docker                                   \n"
"docker push j0hnniewa1ker/readme:docker                                         \n"
"git checkout -b docker                                                          \n"
"git add README.md readme.c                                                      \n"
"git commit -m \"Docker - Technical Writer #4\"                                  \n"
"git push                                                                        \n"
"```                                                                             \n"
"[Docker-Technical Writer #4](https://github.com/J0hnnieWa1ker/.github/issues/4) \n"
"";
int main() {
  syscall(SYS_write, STDOUT_FILENO, header, sizeof(header) - 1);
  syscall(SYS_write, STDOUT_FILENO, summary, sizeof(summary) - 1);
  syscall(SYS_write, STDOUT_FILENO, ibm, sizeof(ibm) - 1);
  syscall(SYS_write, STDOUT_FILENO, starbucks, sizeof(starbucks) - 1);
  syscall(SYS_write, STDOUT_FILENO, efinancial, sizeof(efinancial) - 1);
  syscall(SYS_write, STDOUT_FILENO, adobe, sizeof(adobe) - 1);
  syscall(SYS_write, STDOUT_FILENO, microsoft, sizeof(microsoft) - 1);
  syscall(SYS_write, STDOUT_FILENO, process, sizeof(process) - 1);
  return 0;
}
