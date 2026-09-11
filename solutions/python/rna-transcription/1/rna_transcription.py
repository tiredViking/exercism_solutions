def to_rna(dna_strand):
    if not dna_strand:
        return ""
    dna = dna_strand.strip()
    result = []
    for letter in dna:
        match letter:
            case "G": 
                result.append("C")
            case "C": 
                result.append("G")
            case "T": 
                result.append("A")
            case "A": 
                result.append("U")

    return "".join(result)

    
