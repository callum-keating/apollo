#include <vector>
#include "../sysapis/getConsoleDimensions.h"

namespace terminal
{
    std::vector<std::vector<char>> consoleMap(1, std::vector<char>(1));
    int init()
    {
        int *dimensions;
        getConsoleDimensions(dimensions);
        consoleMap.resize(dimensions[0]);
        for (int i = 0; i < consoleMap.size(); ++i)
        {
            consoleMap[i].resize(dimensions[1]);
        }
    }
    int refit()
    {
        int *dimensions;
        getConsoleDimensions(dimensions);
        consoleMap.resize(dimensions[0]);
        for (int i = 0; i < consoleMap.size(); ++i)
        {
            consoleMap[i].resize(dimensions[1]);
        }
    }
    void getSize(int *dimensionOutput)
    {
        dimensionOutput[0] = consoleMap.size();
        dimensionOutput[1] = consoleMap[0].size();
    }
}