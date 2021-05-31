/*
 * Description: extension to Bitcoin Core software to enable analysis of
 *              transactions by querying relevant data and writing to
 *              files
 * Changelog:
 * 2019-08-29 - an4s - tx analyzer implemented for v0.15.2
 * 2021-05-30 - an4s - clean up implementation of tx analyzer for making it
 *                     public-facing
 */

#ifndef __TX_ANALYZER__H
#define __TX_ANALYZER__H

#include <string>

const bool DEFAULT_TX_ANALYSIS_STATUS = false;
const char * DEFAULT_TA_INPUT_FILENAME = "ta-input-file";

// function prototypes
bool initTXAnalyzer(std::string ifname); // name of file containing paths to input files
void txAnalyzerThread();

#endif /* __TX_ANALYZER__H */
