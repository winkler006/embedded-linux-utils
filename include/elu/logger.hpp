#pragma once

#include <string>

namespace elu
{

class Logger
{
public:
    Logger() = default;

    void info(const std::string& message);

    void warning(const std::string& message);

    void error(const std::string& message);

private:
    void log(const std::string& level,
             const std::string& message);
};

}
