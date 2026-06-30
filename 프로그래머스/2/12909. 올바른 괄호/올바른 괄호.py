def solution(s):
    st = []
    
    for c in s:
        if c == '(':
            st.append(c)
        else:
            if not st:
                return False
            st.pop()
    return not st