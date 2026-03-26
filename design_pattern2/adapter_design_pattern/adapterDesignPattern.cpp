#include <iostream>
using namespace std;

class XMLData
{
private:
    string xmlData;
public:
    XMLData(string data) : xmlData(data) {}
    string getXMLData() const { return xmlData; }
};


class DataAnalyticsTool
{
private:
    string jsonData;
public:
    DataAnalyticsTool() {}
    // DataAnalyticsTool(string data) : jsonData(data) {}
    void setData(const string& data)
    {
        jsonData = data; // Set the data
    }
    virtual void analyzeData() const 
    {
        cout << "Analyzing data: " << jsonData << endl;
    }
};

class Client
{
public:
    void processData(DataAnalyticsTool* tool)
    {
        // Simulate processing data
        cout << "Processing data..." << endl;
        tool->analyzeData();
    }
};

class Adapter : public DataAnalyticsTool
{
private:
    XMLData* xmlData;
public:
    Adapter(XMLData* pXmlData) : xmlData(pXmlData) {}
    void analyzeData() const override
    {
        // Convert XML data to JSON format (simulated)
        string jsonData = "{ \"data\": \"" + xmlData->getXMLData() + "\" }";
        cout << "Analyzing data in JSON format: \n";
        const_cast<Adapter*>(this)->setData(jsonData);  //const_cast used to call the non-const 
                                                        // setData method from a const method (analyzeData).
        DataAnalyticsTool::analyzeData();
        
    }
};

int main()
{
    XMLData* xmlData = new XMLData("<data>Sample XML Data</data>");
    DataAnalyticsTool* tool = new Adapter(xmlData);
    Client* client = new Client();
    client->processData(tool);

    return 0;
}
