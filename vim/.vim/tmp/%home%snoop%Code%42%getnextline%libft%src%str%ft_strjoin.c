Vim�UnDo� ���"u���	�w�4���>:\����}}��   6                                  XW��    _�                            ����                                                                                                                                                                                                                                                                                                                                                  V        XW�     �                }�                	return (join);�                ,	join[ft_strlen(s1) + ft_strlen(s2)] = '\0';�                4	ft_memcpy(join + ft_strlen(s1), s2, ft_strlen(s2));�                $	ft_memcpy(join, s1, ft_strlen(s1));�                		return (NULL);�                	if (join == NULL)�                5	join = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);�                		return (NULL);�                	if (!s1 && !s2)�                 �                	char *join;�                {�                0char	*ft_strjoin(char const *s1, char const *s2)�                 �               �                 �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        XW�!     �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        XW�"     �      &          �             5�_�                    %        ����                                                                                                                                                                                                                                                                                                                            '           4           V        XW�%     �   %   '   5    5�_�                    &        ����                                                                                                                                                                                                                                                                                                                            (           5           V        XW�'    �                P/*   ft_strjoin.c                                       :+:      :+:    :+:   */�      
          P/*   Updated: 2016/12/17 00:14:34 by mplanell         ###   ########.fr       */5�_�                            ����                                                                                                                                                                                                                                                                                                                            %                      V        XW�[     �   %   '          }�   $   &          	return (new_str);�   #   %          		*(new_str + i++) = *(s2 + j);�   "   $          	while (++j < s2_len)�   !   #          		*(new_str + i) = *(s1 + i);�       "          	while (++i < s1_len)�      !          	j = -1;�                 	i = -1;�                		return (NULL);�                	if (!new_str)�                &	new_str = ft_strnew(s1_len + s2_len);�                	s2_len = ft_strlen(s2);�                	s1_len = ft_strlen(s1);�                		return (NULL);�                	if (!s1 || !s2)�                 �                	size_t	s2_len;�                	size_t	s1_len;�                
	size_t	j;�                
	size_t	i;�                	char	*new_str;�                {�                0char	*ft_strjoin(char const *s1, char const *s2)�   &   (           �   &   (   7    �                 �         6    5�_�      	              )        ����                                                                                                                                                                                                                                                                                                                            )           8          V       XW�d     �   (   *          0char	*ft_strjoin(char const *s1, char const *s2)�   6   7          */�   (   )          /*�   6   8          ** }�   5   7          **     return (join);�   4   6          2**     join[ft_strlen(s1) + ft_strlen(s2)] = '\0';�   3   5          :**     ft_memcpy(join + ft_strlen(s1), s2, ft_strlen(s2));�   2   4          ***     ft_memcpy(join, s1, ft_strlen(s1));�   1   3          **         return (NULL);�   0   2          **     if (join == NULL)�   /   1          ;**     join = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);�   .   0          **         return (NULL);�   -   /          **     if (!s1 && !s2)�   ,   .          **�   +   -          **     char *join;�   *   ,          ** {�   )   +          3** char	*ft_strjoin(char const *s1, char const *s2)5�_�      
           	   !        ����                                                                                                                                                                                                                                                                                                                            )           7          V       XW�g    �                P/*   ft_strjoin.c                                       :+:      :+:    :+:   */�      
          P/*   Updated: 2016/12/19 12:48:39 by mplanell         ###   ########.fr       */5�_�   	              
   )        ����                                                                                                                                                                                                                                                                                                                            )           6           V        XWߟ     �   6   8          }�   5   7          	return (join);�   4   6          ,	join[ft_strlen(s1) + ft_strlen(s2)] = '\0';�   3   5          4	ft_memcpy(join + ft_strlen(s1), s2, ft_strlen(s2));�   2   4          $	ft_memcpy(join, s1, ft_strlen(s1));�   1   3          		return (NULL);�   0   2          	if (join == NULL)�   /   1          5	join = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);�   .   0          		return (NULL);�   -   /          	if (!s1 && !s2)�   ,   .           �   +   -          	char *join;�   *   ,          {�   )   +          0char	*ft_strjoin(char const *s1, char const *s2)�   7   9           �   7            �   (   *           �   (   *   6    5�_�   
                         ����                                                                                                                                                                                                                                                                                                                            &                      V        XWߥ     �                0char	*ft_strjoin(char const *s1, char const *s2)�   &   (          /*�   %   &          */�                /*�   %   '          ** }�   $   &          **     return (new_str);�   #   %          (**         *(new_str + i++) = *(s2 + j);�   "   $          **     while (++j < s2_len)�   !   #          &**         *(new_str + i) = *(s1 + i);�       "          **     while (++i < s1_len)�      !          **     j = -1;�                 **     i = -1;�                **         return (NULL);�                **     if (!new_str)�                ,**     new_str = ft_strnew(s1_len + s2_len);�                **     s2_len = ft_strlen(s2);�                **     s1_len = ft_strlen(s1);�                **         return (NULL);�                **     if (!s1 || !s2)�                **�                **     size_t	s2_len;�                **     size_t	s1_len;�                **     size_t	j;�                **     size_t	i;�                **     char	*new_str;�                ** {�                3** char	*ft_strjoin(char const *s1, char const *s2)5�_�                    '        ����                                                                                                                                                                                                                                                                                                                            %                      V        XWߨ    �                P/*   ft_strjoin.c                                       :+:      :+:    :+:   */�      
          P/*   Updated: 2016/12/19 13:23:51 by mplanell         ###   ########.fr       */5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XW��     �         6      	if (!s1 || !s2)5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             XW��    �                P/*   ft_strjoin.c                                       :+:      :+:    :+:   */�      
          P/*   Updated: 2016/12/19 13:24:56 by mplanell         ###   ########.fr       */5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             XW��    �                P/*   ft_strjoin.c                                       :+:      :+:    :+:   */5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             XW��     �         6      	if (!s1 && !s2)5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             XW��    �                P/*   ft_strjoin.c                                       :+:      :+:    :+:   */�      
          P/*   Updated: 2016/12/19 13:34:53 by mplanell         ###   ########.fr       */5�_�                            ����                                                                                                                                                                                                                                                                                                                               
       %          V       XW��     �   %   '          }�   $   &          	return (new_str);�   #   %          		*(new_str + i++) = *(s2 + j);�   "   $          	while (++j < s2_len)�   !   #          		*(new_str + i) = *(s1 + i);�       "          	while (++i < s1_len)�      !          	j = -1;�                 	i = -1;�                		return (NULL);�                	if (!new_str)�                &	new_str = ft_strnew(s1_len + s2_len);�                	s2_len = ft_strlen(s2);�                	s1_len = ft_strlen(s1);�                		return (NULL);�                	if (!s1 || !s2)�                 �                	size_t	s2_len;�                	size_t	s1_len;�                
	size_t	j;�                
	size_t	i;�                	char	*new_str;�                {�                0char	*ft_strjoin(char const *s1, char const *s2)�   &   (           �   &   (   7    �                 �         6    5�_�                    *        ����                                                                                                                                                                                                                                                                                                                            *           7           V        XW��     �   (   *          0char	*ft_strjoin(char const *s1, char const *s2)�   6   7          */�   (   )          /*�   6   8          ** }�   5   7          **     return (join);�   4   6          2**     join[ft_strlen(s1) + ft_strlen(s2)] = '\0';�   3   5          :**     ft_memcpy(join + ft_strlen(s1), s2, ft_strlen(s2));�   2   4          ***     ft_memcpy(join, s1, ft_strlen(s1));�   1   3          **         return (NULL);�   0   2          **     if (join == NULL)�   /   1          ;**     join = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);�   .   0          **         return (NULL);�   -   /          **     if (!s1 && !s2)�   ,   .          **�   +   -          **     char *join;�   *   ,          ** {�   )   +          3** char	*ft_strjoin(char const *s1, char const *s2)5�_�                     6        ����                                                                                                                                                                                                                                                                                                                            )           6           V        XW��    �                P/*   ft_strjoin.c                                       :+:      :+:    :+:   */�      
          P/*   Updated: 2016/12/19 13:38:15 by mplanell         ###   ########.fr       */5�_�                             ����                                                                                                                                                                                                                                                                                                                                                  V        XW�     �              �                 5��