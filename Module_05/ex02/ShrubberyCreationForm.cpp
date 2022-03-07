#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
    std::cout << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(obj)
{
    std::cout << "ShrubberyCreationForm copied" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destroyed" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    if (this != &obj)
    {
        Form::operator=(obj);
    }
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (!getSigned())
            throw ShrubberyCreationForm::NotSignedException();
        if (executor.getGrade() > getGradeToExecute())
            throw ShrubberyCreationForm::GradeTooLowException();
        std::ofstream file;
        file.open(executor.getName() + "_shrubbery");
        file << GRN <<"                                                         .\n";
        file << "                                      .         ;  \n";
        file << "         .              .              ;%     ;;   \n";
        file << "           ,           ,                :;%  %;   \n";
        file << "            :         ;                   :;%;'     .,   \n";
        file << "   ,.        %;     %;            ;        %;'    ,;\n";
        file << "     ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
        file << "      %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
        file << "       ;%;      %;        ;%;        % ;%;  ,%;'\n";
        file << "        `%;.     ;%;     %;'         `;%%;.%;'\n";
        file << "         `:;%.    ;%%. %@;        %; ;@%;%'\n";
        file << "            `:%;.  :;bd%;          %;@%;'\n";
        file << "              `@%:.  :;%.         ;@@%;'   \n";
        file << "                `@%.  `;@%.      ;@@%;         \n";
        file << "                  `@%%. `@%%    ;@@%;        \n";
        file << "                    ;@%. :@%%  %@@%;       \n";
        file << "                      %@bd%%%bd%%:;     \n";
        file << "                        #@%%%%%:;;\n";
        file << "                        %@@%%%::;\n";
        file << "                        %@@@%(o);  . '         \n";
        file << "                        %@@@o%;:(.,'         \n";
        file << "                    `.. %@@@o%::;         \n";
        file << "                       `)@@@o%::;         \n";
        file << "                        %@@(o)::;        \n";
        file << "                       .%@@@@%::;         \n";
        file << "                       ;%@@@@%::;.          \n";
        file << "                      ;%@@@@%%:;;;. \n";
        file << "                  ...;%@@@@@%%:;;;;,.. \n";
        file.close();
    }
    catch (ShrubberyCreationForm::GradeTooLowException &e)
    {
        std::cout << RED << e.what() << WHT << std::endl;
    }
}