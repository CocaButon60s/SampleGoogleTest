#include <SampleClass.h>
#include <Mock.h>
#include <nlohmann/json.hpp>

MockConfig conf;

void SampleClass::InternalMethod() {}

unique_ptr<nlohmann::json> func()
{
    return make_unique<nlohmann::json>(conf.config);
}
