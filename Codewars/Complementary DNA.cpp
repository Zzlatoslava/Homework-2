#include <string>

std::string DNAStrand(const std::string& dna)
{
    std::string dna_2;
    for (int i = 0; i < dna.length(); i++) {
        if (dna[i] == 'A') {
            dna_2 += 'T';
        }
        else if (dna[i] == 'T') {
            dna_2 += 'A';
        }
        else if (dna[i] == 'C') {
            dna_2 += 'G';

        }
        else if (dna[i] == 'G') {
            dna_2 += 'C';
        }
        else {
            dna_2 += dna[i];
        }
    }
    return dna_2;
}