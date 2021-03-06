#ifdef __cplusplus
extern "C" {
#endif
extern int cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGameCount(void *);
extern bool cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame(void *, int, uint32 *, uint32 *, uint16 *, uint32 *, uint32 *);
extern int cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame(void *, uint32, uint32, uint16, uint32, uint32);
extern bool cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame(void *, uint32, uint32, uint16, uint32);
extern bool cppISteamMatchmaking_SteamMatchMaking001_GetFavoriteGame2(void *, int, uint32 *, uint32 *, uint16 *, uint16 *, uint32 *, uint32 *);
extern int cppISteamMatchmaking_SteamMatchMaking001_AddFavoriteGame2(void *, uint32, uint32, uint16, uint16, uint32, uint32);
extern bool cppISteamMatchmaking_SteamMatchMaking001_RemoveFavoriteGame2(void *, uint32, uint32, uint16, uint16, uint32);
extern void cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyList(void *, uint64, MatchMakingKeyValuePair_t *, uint32);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking001_GetLobbyByIndex(void *, int);
extern void cppISteamMatchmaking_SteamMatchMaking001_CreateLobby(void *, uint64, bool);
extern void cppISteamMatchmaking_SteamMatchMaking001_JoinLobby(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking001_LeaveLobby(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking001_InviteUserToLobby(void *, CSteamID, CSteamID);
extern int cppISteamMatchmaking_SteamMatchMaking001_GetNumLobbyMembers(void *, CSteamID);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberByIndex(void *, CSteamID, int);
extern const char * cppISteamMatchmaking_SteamMatchMaking001_GetLobbyData(void *, CSteamID, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking001_SetLobbyData(void *, CSteamID, const char *, const char *);
extern const char * cppISteamMatchmaking_SteamMatchMaking001_GetLobbyMemberData(void *, CSteamID, CSteamID, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking001_SetLobbyMemberData(void *, CSteamID, const char *, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking001_SendLobbyChatMsg(void *, CSteamID, const void *, int);
extern int cppISteamMatchmaking_SteamMatchMaking001_GetLobbyChatEntry(void *, CSteamID, int, CSteamID *, void *, int, EChatEntryType *);
extern bool cppISteamMatchmaking_SteamMatchMaking001_RequestLobbyData(void *, CSteamID);
#ifdef __cplusplus
}
#endif
