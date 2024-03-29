/* Copyright 2024 isaki */

#ifndef __MENPHINA_EXEC_HPP__
#define __MENPHINA_EXEC_HPP__

#include <string_view>

namespace menphina
{
    class Execution
    {
        public:
            virtual ~Execution();

            virtual void run(const std::string_view& launcherDir) = 0;
        protected:
            Execution();
    };
}

#endif
