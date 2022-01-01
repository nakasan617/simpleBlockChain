#include "Block.h"

BlockRecord::BlockRecord(std::string _data)
    :data(_data), previousHash(), randomSeed(), winningHash(), timeStampString(), next(nullptr) 
{
}

int BlockRecord::verifyBlock()
{
    return 0;
}

std::string BlockRecord::createHashValue()
{
    return std::string("hello world");
}

std::ostream& operator << (std::ostream& os, BlockRecord const& br)
{
    os << br.data;
    return os;
}

BlockChain::~BlockChain()
{
    for(unsigned i = 0; i < __BlockChain.size(); i++)
    {
        delete __BlockChain[i];
    }
}

BlockRecord *BlockChain::getHead()
{
    if(__BlockChain.size() == 0) return nullptr;
    else return __BlockChain[__BlockChain.size() - 1];
}


void BlockChain::appendBlock(BlockRecord *newBlock)
{
    __BlockChain.push_back(newBlock); 
}

std::ostream& operator << (std::ostream& os, BlockChain const& bc)
{
    for(unsigned i = 0; i < bc.__BlockChain.size() - 1; i++)
    {
        os << *(bc.__BlockChain[i]) << ", "; 
    } 
    os << *(bc.__BlockChain[bc.__BlockChain.size() - 1]) << std::endl; 
    return os;
}
