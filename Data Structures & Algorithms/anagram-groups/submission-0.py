class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ##using sort
        group = collections.defaultdict(list)

        def normalized(word):
            return "".join(sorted(word))


        for word in strs:
            group[normalized(word)].append(word)

        return list(group.values())
        