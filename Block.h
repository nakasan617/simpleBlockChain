#ifndef BLOCK_H
#define BLOCK_H
#include <string>
#include <vector> 
#include <iostream>

class BlockRecord 
{
public:
    // Big4
    BlockRecord() = delete;
    BlockRecord(const BlockRecord&) = default;
    BlockRecord& operator = (const BlockRecord&) = default; 
    ~BlockRecord() = default;

    BlockRecord(std::string);

    //BlockRecord *getNext();
    //void setNext(BlockRecord *);

    //std::string getPreviousHash();
    //void setPreviousHash(std::string);

    //UUID getUUID();
    //void setUUID(UUID uid);

    //std::string getRandomSeed();
    //void setRandomSeed(std::string rs);
    
    //std::string getWinningHash();
    //void setWinningHash(std::string wh);
    
    int verifyBlock(); // haven't implemented yet
    std::string createHashValue(); // haven't implemented yet
    
    friend std::ostream& operator << (std::ostream& os, BlockRecord const&);

private:
    std::string data; 
    std::string previousHash;
    std::string randomSeed;
    std::string winningHash;
    //UUID uuid;
    std::string timeStampString;
    BlockRecord *next;
};

class BlockChain
{
public:
    // Big 4
    BlockChain() = default;
    BlockChain(const BlockChain&) = default;
    BlockChain& operator = (const BlockChain&) = default;
    ~BlockChain();

    BlockRecord *getHead();
    void appendBlock(BlockRecord *);

    friend std::ostream& operator << (std::ostream& os, BlockChain const& blockChain);
private:
    std::vector<BlockRecord *> __BlockChain; 
};

#endif /* BLOCK_H */
