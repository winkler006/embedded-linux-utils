#include <elu/logger.hpp>

int main()
{
    elu::Logger logger;

    logger.info("Application started");

    logger.warning("Low memory");

    logger.error("Configuration file missing");
}
