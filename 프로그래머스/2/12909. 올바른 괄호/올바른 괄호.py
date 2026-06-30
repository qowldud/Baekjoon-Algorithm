def solution(s):
    st = []
    
    for c in s:
        if c == '(':
            st.append(c)
        else:
            if len(st) == 0 or st[-1] != '(':
                return False
            else:
                st.pop()
    if len(st) == 0:
        return True
    else:
        return False