#pragma once 

#include <string>

#ifdef __CODE_GENERATOR__
#define HIDDEN __attribute__((annotate("hidden")))
#else
#define HIDDEN
#endif

class TextComponent  
{
public:
    TextComponent();

    std::string text() const;
    void setText(const std::string& value);

    HIDDEN void superSecretFunction();

private:
    std::string m_text;
};
