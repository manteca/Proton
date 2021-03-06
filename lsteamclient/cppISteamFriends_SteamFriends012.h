#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends012_GetPersonaName(void *);
extern SteamAPICall_t cppISteamFriends_SteamFriends012_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends012_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends012_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends012_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends012_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends012_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends012_GetFriendPersonaName(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends012_GetFriendGamePlayed(void *, CSteamID, FriendGameInfo_t *);
extern const char * cppISteamFriends_SteamFriends012_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends012_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends012_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends012_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends012_GetClanName(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends012_GetClanTag(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends012_GetClanActivityCounts(void *, CSteamID, int *, int *, int *);
extern SteamAPICall_t cppISteamFriends_SteamFriends012_DownloadClanActivityCounts(void *, CSteamID *, int);
extern int cppISteamFriends_SteamFriends012_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends012_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends012_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends012_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends012_ActivateGameOverlay(void *, const char *);
extern void cppISteamFriends_SteamFriends012_ActivateGameOverlayToUser(void *, const char *, CSteamID);
extern void cppISteamFriends_SteamFriends012_ActivateGameOverlayToWebPage(void *, const char *);
extern void cppISteamFriends_SteamFriends012_ActivateGameOverlayToStore(void *, AppId_t);
extern void cppISteamFriends_SteamFriends012_SetPlayedWith(void *, CSteamID);
extern void cppISteamFriends_SteamFriends012_ActivateGameOverlayInviteDialog(void *, CSteamID);
extern int cppISteamFriends_SteamFriends012_GetSmallFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends012_GetMediumFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends012_GetLargeFriendAvatar(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends012_RequestUserInformation(void *, CSteamID, bool);
extern SteamAPICall_t cppISteamFriends_SteamFriends012_RequestClanOfficerList(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends012_GetClanOwner(void *, CSteamID);
extern int cppISteamFriends_SteamFriends012_GetClanOfficerCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends012_GetClanOfficerByIndex(void *, CSteamID, int);
extern uint32 cppISteamFriends_SteamFriends012_GetUserRestrictions(void *);
extern bool cppISteamFriends_SteamFriends012_SetRichPresence(void *, const char *, const char *);
extern void cppISteamFriends_SteamFriends012_ClearRichPresence(void *);
extern const char * cppISteamFriends_SteamFriends012_GetFriendRichPresence(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyCount(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends012_GetFriendRichPresenceKeyByIndex(void *, CSteamID, int);
extern void cppISteamFriends_SteamFriends012_RequestFriendRichPresence(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends012_InviteUserToGame(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends012_GetCoplayFriendCount(void *);
extern CSteamID cppISteamFriends_SteamFriends012_GetCoplayFriend(void *, int);
extern int cppISteamFriends_SteamFriends012_GetFriendCoplayTime(void *, CSteamID);
extern AppId_t cppISteamFriends_SteamFriends012_GetFriendCoplayGame(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends012_JoinClanChatRoom(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends012_LeaveClanChatRoom(void *, CSteamID);
extern int cppISteamFriends_SteamFriends012_GetClanChatMemberCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends012_GetChatMemberByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends012_SendClanChatMessage(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends012_GetClanChatMessage(void *, CSteamID, int, void *, int, EChatEntryType *, CSteamID *);
extern bool cppISteamFriends_SteamFriends012_IsClanChatAdmin(void *, CSteamID, CSteamID);
extern bool cppISteamFriends_SteamFriends012_IsClanChatWindowOpenInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends012_OpenClanChatWindowInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends012_CloseClanChatWindowInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends012_SetListenForFriendsMessages(void *, bool);
extern bool cppISteamFriends_SteamFriends012_ReplyToFriendMessage(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends012_GetFriendMessage(void *, CSteamID, int, void *, int, EChatEntryType *);
extern SteamAPICall_t cppISteamFriends_SteamFriends012_GetFollowerCount(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends012_IsFollowing(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends012_EnumerateFollowingList(void *, uint32);
#ifdef __cplusplus
}
#endif
