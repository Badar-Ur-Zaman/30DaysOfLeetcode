class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        
        dictionary.sort(key=len, reverse=True)

        sentence_list = sentence.split()
        for i, word in enumerate(sentence_list):
            for d in dictionary:
                if(word.startswith(d)):
                    sentence_list[i] = d
        
        return ' '.join(sentence_list)