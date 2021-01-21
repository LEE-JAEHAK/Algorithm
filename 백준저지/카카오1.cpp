//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <cstring>
//using namespace std;
//
////vector<string> split(string& str){
////    vector<string> value;
////    char tmp[101];
////    strcpy(tmp,str.c_str());
////    char* ptr = strtok(tmp," ");
////    while(ptr!=NULL){
////        string str1  = string(ptr);
////        ptr = strtok(NULL," ");
////        value.push_back(str1);
////    }
////    return value;
////}
////
////vector<string> solution(vector<string> record) {
////   vector<string> answer;
////    map<string,string> m;
////    for(int i=0;i<record.size();i++){
////        string str = record[i];
////        vector<string> line = split(str);
////        //map<string,string>::iterator it = m.find(line[1]);
////        if(line[0]=="Enter"){
////            m[line[1]] = line[2];
////            //if(it==m.end()){
////                //m.insert(make_pair(line[1],line[2]));
////            //}
////           // else{
////            //    it->second = line[2];
////           // }
////        }
////        else if(line[0]=="Change"){
////            m[line[1]] = line[2];
////            //it->second = line[2];
////        }
////    }
////
////    for(int i=0;i<record.size();i++){
////        string str = record[i];
////        vector<string> line = split(str);
////        string name = m[line[1]];
////        //string name = (*m.find(line[1])).second;
////        if(line[0]=="Enter"){
////            answer.push_back(name+"´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.");
////        }
////        else if(line[0]=="Leave"){
////            answer.push_back(name+"´ÔÀÌ ³ª°¬½À´Ï´Ù.");
////        }
////    }
////    return answer;
////}
//
//map<string, string> ma;
//string str[100005][5];
//vector<string> events;
//
//vector<string> solution(vector<string> record) {
//	vector<string> answer;
//	for (int i = 0; i < record.size(); i++) {
//		int idx = 0;
//		for (int j = 0; j < record[i].size(); j++) {
//			if (record[i][j] != ' ') {
//				str[i][idx].push_back(record[i][j]);
//			}
//			else if (record[i][j] == ' ') {
//				idx++;
//			}
//		}
//
//		if (str[i][0] == "Enter") {
//			ma[str[i][1]] = str[i][2];
//		}
//		else if (str[i][0] == "Change") {
//			ma[str[i][1]] = str[i][2];
//		}
//	}
//
//	for (int i = 0; i < record.size(); i++) {
//		if (str[i][0] == "Enter") {
//			events.push_back(ma[str[i][1]] + "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.");
//		}
//		else if (str[i][0] == "Leave") {
//			events.push_back(ma[str[i][1]] + "´ÔÀÌ ³ª°¬½À´Ï´Ù.");
//		}
//	}
//	answer = events;
//	return answer;
//}
//
//int main() {
//	string s1 = "Enter uid1234 Muzi";
//	string s2 = "Enter uid4567 Prodo";
//	string s3 = "Leave uid1234";
//	string s4 = "Enter uid1234 Prodo";
//	string s5 = "Change uid4567 Ryan";
//	vector<string> rec;
//	rec.push_back(s1);
//	rec.push_back(s2);
//	rec.push_back(s3);
//	rec.push_back(s4);
//	rec.push_back(s5);
//	rec = solution(rec);
//
//	for (int i = 0; i < rec.size(); i++) {
//		cout << rec[i] << endl;
//	}
//}