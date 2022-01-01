
#include "Block.h"
#include <cstdlib>
#include <nlohmann/json.hpp>

using std;

void blockChain2JSON(BlockChain *bc)
{
    
}

int main(int argc, char **argv) 
{
    BlockChain *bc = new BlockChain();
    BlockRecord *br;
    for(int i = 0; i < 4; i++)
    {
        br = new BlockRecord("hello");
        bc->appendBlock(br);
    }
    cout << *bc;
    delete bc;
    return EXIT_SUCCESS;
}
