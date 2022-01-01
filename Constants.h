#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>

#include "BlockChain.h"
#include "AsymKeys.h"
#include "Block.h"

const int numProcesses = 3;
std::string serverName = "localhost";
const int publicKeyPortBase = 4710;
const int unverifiedBlockPortBase = 4820;
const int blockChainPortBase = 4930;
bool applicationReady = false;
bool JSONWritten = false;

int unverifiedBlockPort;
int publicKeyPort;
int blockChainPort;

BlockChain blockChain;
PrivateKey privateKey;
PublicKey [3] publicKeys;

std::vector<Block> priorityQueue; // you need to think about how to create the priority queue here
#endif /* CONSTANTS_H */
