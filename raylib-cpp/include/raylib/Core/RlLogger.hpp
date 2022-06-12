/*
** EPITECH PROJECT, 2022
** RlLogger.hpp
** File description:
** RlLogger.hpp
*/

#ifndef INDIESTUDIO_RLLOGGER_HPP
#define INDIESTUDIO_RLLOGGER_HPP

#include <string>
#include <iostream>
#include <boost/log/trivial.hpp>

namespace raylib {
    /**
     * @brief RlLogger class
     */
    class RlLogger {
    public:
        enum LogLevel {
            LOG_TRACE = 0,
            LOG_DEBUG,
            LOG_INFO,
            LOG_WARNING,
            LOG_ERROR,
            LOG_FATAL
        };

        /**
         * @brief RlLogger constructor
         */
        RlLogger() = default;

        /**
         * @brief log function
         * @param logLevel the log level
         */
        static std::ostream &log(const enum LogLevel &logLevel)
        {
            std::ostream &os = std::cout;
            os << "[RaylibCPP]" << "[";
            switch (logLevel) {
                case raylib::RlLogger::LogLevel::LOG_TRACE: os << "TRACE"; break;
                case raylib::RlLogger::LogLevel::LOG_DEBUG: os << "DEBUG"; break;
                case raylib::RlLogger::LogLevel::LOG_INFO: os << "INFO"; break;
                case raylib::RlLogger::LogLevel::LOG_WARNING: os << "WARNING"; break;
                case raylib::RlLogger::LogLevel::LOG_ERROR: os << "ERROR"; break;
                case raylib::RlLogger::LogLevel::LOG_FATAL: os << "FATAL";break;
            }
            os << "] ";
            return os;
        }

    };
}
#endif //INDIESTUDIO_RLLOGGER_HPP
