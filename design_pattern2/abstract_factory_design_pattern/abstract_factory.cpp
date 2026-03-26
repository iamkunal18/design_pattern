#include <iostream>
using namespace std;

class IButton
{
public:
    virtual void press() = 0;
};

class MacButton : public IButton
{
public:
    void press() override
    {
        cout << "Mac Button Pressed!" << endl;
    }
};

class WinButton : public IButton
{
public:
    void press() override
    {
        cout << "Windows Button Pressed!" << endl;
    }
};

class ITextBox
{
public:
    virtual void showText() = 0;
};

class MacTextBox : public ITextBox
{
public:
    void showText() override
    {
        cout << "Showing Mac Text Box!" << endl;
    }
};

class WinTextBox : public ITextBox
{
public:
    void showText() override
    {
        cout << "Showing Windows Text Box!" << endl;
    }
};

class IFactory
{
public:
    virtual IButton* createButton() = 0;
    virtual ITextBox* createTextBox() = 0;
};

class MacFactory : public IFactory
{
public:
    IButton* createButton() override
    {
        return new MacButton();
    }

    ITextBox* createTextBox() override
    {
        return new MacTextBox();
    }
};

class WinFactory : public IFactory
{
public:
    IButton* createButton() override
    {
        return new WinButton();
    }

    ITextBox* createTextBox() override
    {
        return new WinTextBox();
    }
};

class GUIAbstractFactory
{
public:
    static IFactory* getFactory(const string& osType)
    {
        if (osType == "Mac" || osType == "mac") 
        {
            return new MacFactory();
        } 
        else if (osType == "Windows" || osType == "windows") 
        {
            return new WinFactory();
        }
        
        return nullptr; // Invalid OS type
    }
};

int main()
{
    cout << "Enter your machine OS: ";
    string OSType;
    cin >> OSType;

    IFactory* factory = GUIAbstractFactory::getFactory(OSType);
    if (factory == nullptr) {
        cout << "Invalid OS type!" << endl;
        return 1;
    }
    IButton* button = factory->createButton();
    button->press();

    ITextBox* textBox = factory->createTextBox();
    textBox->showText();

    return 0;
}
