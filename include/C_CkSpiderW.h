// This is a generated source file for Chilkat version 9.5.0.82
#ifndef _C_CkSpiderWH
#define _C_CkSpiderWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkSpiderW_setAbortCheck(HCkSpiderW cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkSpiderW_setPercentDone(HCkSpiderW cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkSpiderW_setProgressInfo(HCkSpiderW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));
CK_C_VISIBLE_PUBLIC void CkSpiderW_setTaskCompleted(HCkSpiderW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkSpiderW CkSpiderW_Create(void);
CK_C_VISIBLE_PUBLIC void CkSpiderW_Dispose(HCkSpiderW handle);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_getAbortCurrent(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putAbortCurrent(HCkSpiderW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_getAvoidHttps(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putAvoidHttps(HCkSpiderW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getCacheDir(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putCacheDir(HCkSpiderW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_cacheDir(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_getChopAtQuery(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putChopAtQuery(HCkSpiderW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkSpiderW_getConnectTimeout(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putConnectTimeout(HCkSpiderW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getDebugLogFilePath(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putDebugLogFilePath(HCkSpiderW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_debugLogFilePath(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getDomain(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_domain(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_getFetchFromCache(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putFetchFromCache(HCkSpiderW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC int CkSpiderW_getHeartbeatMs(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putHeartbeatMs(HCkSpiderW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getLastErrorHtml(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_lastErrorHtml(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getLastErrorText(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_lastErrorText(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getLastErrorXml(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_lastErrorXml(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_getLastFromCache(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getLastHtml(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_lastHtml(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getLastHtmlDescription(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_lastHtmlDescription(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getLastHtmlKeywords(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_lastHtmlKeywords(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getLastHtmlTitle(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_lastHtmlTitle(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_getLastMethodSuccess(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putLastMethodSuccess(HCkSpiderW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getLastModDate(HCkSpiderW cHandle, SYSTEMTIME * retval);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getLastModDateStr(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_lastModDateStr(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getLastUrl(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_lastUrl(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC int CkSpiderW_getMaxResponseSize(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putMaxResponseSize(HCkSpiderW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC int CkSpiderW_getMaxUrlLen(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putMaxUrlLen(HCkSpiderW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC int CkSpiderW_getNumAvoidPatterns(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC int CkSpiderW_getNumFailed(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC int CkSpiderW_getNumOutboundLinks(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC int CkSpiderW_getNumSpidered(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC int CkSpiderW_getNumUnspidered(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_getPreferIpv6(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putPreferIpv6(HCkSpiderW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getProxyDomain(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putProxyDomain(HCkSpiderW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_proxyDomain(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getProxyLogin(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putProxyLogin(HCkSpiderW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_proxyLogin(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getProxyPassword(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putProxyPassword(HCkSpiderW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_proxyPassword(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC int CkSpiderW_getProxyPort(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putProxyPort(HCkSpiderW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC int CkSpiderW_getReadTimeout(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putReadTimeout(HCkSpiderW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_getUpdateCache(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putUpdateCache(HCkSpiderW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getUserAgent(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putUserAgent(HCkSpiderW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_userAgent(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_getVerboseLogging(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putVerboseLogging(HCkSpiderW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkSpiderW_getVersion(HCkSpiderW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_version(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC int CkSpiderW_getWindDownCount(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void  CkSpiderW_putWindDownCount(HCkSpiderW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkSpiderW_AddAvoidOutboundLinkPattern(HCkSpiderW cHandle, const wchar_t *pattern);
CK_C_VISIBLE_PUBLIC void CkSpiderW_AddAvoidPattern(HCkSpiderW cHandle, const wchar_t *pattern);
CK_C_VISIBLE_PUBLIC void CkSpiderW_AddMustMatchPattern(HCkSpiderW cHandle, const wchar_t *pattern);
CK_C_VISIBLE_PUBLIC void CkSpiderW_AddUnspidered(HCkSpiderW cHandle, const wchar_t *url);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_CanonicalizeUrl(HCkSpiderW cHandle, const wchar_t *url, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_canonicalizeUrl(HCkSpiderW cHandle, const wchar_t *url);
CK_C_VISIBLE_PUBLIC void CkSpiderW_ClearFailedUrls(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void CkSpiderW_ClearOutboundLinks(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC void CkSpiderW_ClearSpideredUrls(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_CrawlNext(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSpiderW_CrawlNextAsync(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_FetchRobotsText(HCkSpiderW cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_fetchRobotsText(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSpiderW_FetchRobotsTextAsync(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_GetAvoidPattern(HCkSpiderW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_getAvoidPattern(HCkSpiderW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_GetBaseDomain(HCkSpiderW cHandle, const wchar_t *domain, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_getBaseDomain(HCkSpiderW cHandle, const wchar_t *domain);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_GetFailedUrl(HCkSpiderW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_getFailedUrl(HCkSpiderW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_GetOutboundLink(HCkSpiderW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_getOutboundLink(HCkSpiderW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_GetSpideredUrl(HCkSpiderW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_getSpideredUrl(HCkSpiderW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_GetUnspideredUrl(HCkSpiderW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_getUnspideredUrl(HCkSpiderW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_GetUrlDomain(HCkSpiderW cHandle, const wchar_t *url, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkSpiderW_getUrlDomain(HCkSpiderW cHandle, const wchar_t *url);
CK_C_VISIBLE_PUBLIC void CkSpiderW_Initialize(HCkSpiderW cHandle, const wchar_t *domain);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_LoadTaskCaller(HCkSpiderW cHandle, HCkTaskW task);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_RecrawlLast(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC HCkTaskW CkSpiderW_RecrawlLastAsync(HCkSpiderW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkSpiderW_SaveLastError(HCkSpiderW cHandle, const wchar_t *path);
CK_C_VISIBLE_PUBLIC void CkSpiderW_SkipUnspidered(HCkSpiderW cHandle, int index);
CK_C_VISIBLE_PUBLIC void CkSpiderW_SleepMs(HCkSpiderW cHandle, int numMilliseconds);
#endif
