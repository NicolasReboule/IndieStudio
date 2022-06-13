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
#include <fstream>

namespace raylib {
    /**
     * @brief RlLogger class
     */
    class RlLogger {
    public:
        class LoggerError : public std::exception {
        public:
            explicit LoggerError(const std::string &msg) : _msg(msg) {}

            const char *what() const noexcept override { return _msg.c_str(); }

        private:
            std::string _msg;
        };

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
        explicit RlLogger(const std::string &path)
        {
            this->_path = path;
            this->_file.open(path, std::ios::out | std::ios::trunc);
            if (!this->_file.is_open())
                throw LoggerError("Can't open file");
        }

        /**
         * @brief log function
         * @param logLevel the log level
         */
        std::ostream &log(const enum LogLevel &logLevel)
        {
            if (!this->_file.is_open())
                return std::cout;
            std::ostream &os = this->_file;
            os << "[RaylibCPP][" << __TIMESTAMP__ << "][";
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

    private:
        std::string _path;
        std::ofstream _file;
    };
}
#endif //INDIESTUDIO_RLLOGGER_HPP
