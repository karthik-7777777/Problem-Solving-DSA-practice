class Solution:
    def checkStatus(self, a, b, flag):
        # code here
        if a<0 and b<0:
            return flag
        elif a<0 and b>=0 or a>=0 and b<0:
            if flag==True:
                flag=False
                return flag
            else:
                flag=True
                return flag
        else:
            flag=False
            return flag