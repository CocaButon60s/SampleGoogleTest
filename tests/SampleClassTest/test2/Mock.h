#pragma once
#include <nlohmann/json.hpp>

using namespace std;

unique_ptr<nlohmann::json> func();

struct MockConfig
{
    nlohmann::json config;
};
extern MockConfig conf;
