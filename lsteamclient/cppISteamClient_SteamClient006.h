#ifdef __cplusplus
extern "C" {
#endif
extern HSteamPipe cppISteamClient_SteamClient006_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient006_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient006_CreateGlobalUser(void *, HSteamPipe *);
extern HSteamUser cppISteamClient_SteamClient006_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient006_CreateLocalUser(void *, HSteamPipe *);
extern void cppISteamClient_SteamClient006_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void *cppISteamClient_SteamClient006_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient006_GetIVAC(void *, HSteamUser);
extern void *cppISteamClient_SteamClient006_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient006_SetLocalIPBinding(void *, uint32, uint16);
extern const char * cppISteamClient_SteamClient006_GetUniverseName(void *, EUniverse);
extern void *cppISteamClient_SteamClient006_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient006_GetISteamUtils(void *, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient006_GetISteamBilling(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient006_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient006_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient006_GetISteamContentServer(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient006_GetISteamMasterServerUpdater(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient006_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient006_RunFrame(void *);
extern uint32 cppISteamClient_SteamClient006_GetIPCCallCount(void *);
#ifdef __cplusplus
}
#endif
