#include <iostream>

#include "textcomponent.h"

TextComponent::TextComponent()
    : m_text("")
{
}

std::string TextComponent::text() const
{
    return m_text;
}

void TextComponent::setText(std::string const& value)
{
    m_text = value;
}

void TextComponent::superSecretFunction()
{
    std::cout << "HOW DID YOU FIND ME" << std::endl;
}

