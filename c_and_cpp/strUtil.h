#pragma once

#ifdef __cplusplus  
extern "C" {               // ���߱��������д���Ҫ��C����Լ����ģʽ��������  
#endif  
	const char * std_remove_dot_dot(const char * path);
	const char * std_relative_path(const char * path1, const char * path2);
	void std_split(const char*text, const char*spe, char *** result, int *size);
	const char * std_replay_all(const char * text, const char * str1, const char * str2);
#ifdef __cplusplus  
}
#endif 
