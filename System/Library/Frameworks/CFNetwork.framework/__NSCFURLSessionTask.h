/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionTask.h>

@protocol OS_dispatch_queue, SZExtractor, NSURLSessionAppleIDContext;
@class NSString, NSURLRequest, NSURLResponse, NSDate, NSError, NSURLSession, NSObject, NSURL, NSData, NSDictionary, NSArray, NSURLSessionConfiguration, NSURLSessionTaskHTTPAuthenticator, NSURLSessionTaskDependencyTree, NSURLSessionTaskDependency, NSMutableArray, NSURLSessionTaskMetrics, NSProgress;

@interface __NSCFURLSessionTask : NSURLSessionTask {

	unsigned long long _taskIdentifier;
	NSString* _taskDescription;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	NSDate* _earliestBeginDate;
	long long _countOfBytesClientExpectsToSend;
	long long _countOfBytesClientExpectsToReceive;
	long long _countOfBytesReceived;
	long long __countOfPendingBytesReceivedEncoded;
	long long __countOfBytesReceivedEncoded;
	long long _countOfBytesSent;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesExpectedToReceive;
	long long _state;
	NSError* _error;
	CFURLRequestRef _currentCFURLRequest;
	double _startTime;
	NSURLSession* _session;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _ledBellyServiceIdentifier;
	NSURL* _ledBellyFallbackURL;
	NSData* __TCPConnectionMetadata;
	unsigned short _TLSNegotiatedCipherSuite;
	float _priorityHint;
	long long _priorityValue;
	double _loadingPriorityValue;
	long long _bytesPerSecondLimitValue;
	PerformanceTimingRef _performanceTiming;
	NSDictionary* _backgroundTaskTimingData;
	BOOL _shouldSkipPreferredClientCertificateLookup;
	BOOL _cacheOnly;
	BOOL _preventsSystemHTTPProxyAuthentication;
	NSDictionary* _legacySocketStreamProperties;
	CFHSTSPolicyRef _cfHSTS;
	CFURLCacheRef _cfCache;
	CFURLCredentialStorageRef _cfCreds;
	OpaqueCFHTTPCookieStorageRef _cfCookies;
	int _cachePolicy;
	double _timeoutInterval;
	double _timeoutIntervalForResource;
	NSDictionary* _proxySettings;
	NSDictionary* _sslSettings;
	BOOL _shouldPipelineHTTP;
	BOOL _shouldUsePipelineHeuristics;
	BOOL _shouldSkipPipelineProbe;
	BOOL _shouldHandleCookies;
	int _cookieAcceptPolicy;
	BOOL _preventsIdleSystemSleep;
	NSArray* _contentDispositionFallbackArray;
	BOOL _allowsCellular;
	int _networkServiceType;
	BOOL _prohibitAuthUI;
	BOOL _strictContentLength;
	long long _suspensionThreshhold;
	NSString* _boundInterfaceIdentifier;
	BOOL _disallowCellular;
	unsigned long long _allowedProtocolTypes;
	long long _requestPriority;
	long long _expectedWorkload;
	double _timeWindowDelay;
	double _timeWindowDuration;
	NSString* _uniqueIdentifier;
	unsigned _powerAssertion;
	unsigned _darkWakePowerAssertion;
	CFDictionaryRef _cachedSocketStreamProperties;
	NSURLSessionConfiguration* _configuration;
	BOOL _connectionIsCellular;
	id _protocolForTask;
	NSURLSessionTaskHTTPAuthenticator* _authenticator;
	BOOL _shouldReportTimingDataToAWD;
	NSString* _storagePartitionIdentifier;
	NSDictionary* _dependencyInfo;
	NSDictionary* _DuetActivityProperties;
	NSURLSessionTaskDependencyTree* _dependencyTree;
	NSURLSessionTaskDependency* _taskDependency;
	NSString* _pathToDownloadTaskFile;
	NSMutableArray* _transactionMetrics;
	NSURLSessionTaskMetrics* _incompleteTaskMetrics;
	NSDictionary* _trailers;
	BOOL _allowsQUIC;
	id<SZExtractor> _extractor;
	BOOL _extractorFinishedDecoding;
	BOOL _hasSZExtractor;
	BOOL _doesSZExtractorConsumeExtractedData;
	id<NSURLSessionAppleIDContext> _appleIDContext;
	BOOL _authenticatorConfiguredViaTaskProperty;
	NSProgress* _progress;
	NSProgress* _uploadProgress;
	NSProgress* _downloadProgress;
	BOOL _undeterminedUploadProgressState;
	BOOL _undeterminedDownloadProgressState;
	BOOL _isInUpload;
	BOOL _progressReportingFinished;
	NSURL* _publishingURL;
	NSURL* _backgroundPublishingURL;
	os_unfair_lock_s _unfair_lock;
	BOOL _preconnect;
	NSString* _APSRelayTopic;
	BOOL _extractorPreparedForExtraction;

}
+(BOOL)supportsSecureCoding;
-(void)set_powerAssertion:(unsigned)arg1 ;
-(void)updateCurrentRequest:(id)arg1 ;
-(id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4 ;
-(const XCookieStorage*)_createXCookieStorage;
-(const XCredentialStorage*)_createXCredentialStorage;
-(const XURLCache*)_createXURLCache;
-(CFURLRequestRef)_currentCFURLRequest;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(id)_protocolForTask;
-(void)set_protocolForTask:(id)arg1 ;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(void)setCountOfBytesExpectedToReceive:(long long)arg1 ;
-(void)_finishProgressReporting;
-(void)_reportTimingDataToAWD:(id)arg1 ;
-(void)setCountOfBytesReceived:(long long)arg1 ;
-(void)_onqueue_releasePowerAsssertion;
-(long long)computeAdjustedPoolPriority;
-(id)_legacySocketStreamProperties;
-(void)set_legacySocketStreamProperties:(id)arg1 ;
-(id)currentRequest_URL;
-(double)_timeoutIntervalForResource;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(void)_onqueue_adjustPriorityHint:(float)arg1 ;
-(id)_pathToDownloadTaskFile;
-(void)set_suspensionThreshhold:(long long)arg1 ;
-(CFDictionaryRef)_copySocketStreamProperties;
-(void)set_extractor:(id)arg1 ;
-(void)setOriginalRequest:(id)arg1 ;
-(void)set_backgroundPublishingURL:(id)arg1 ;
-(id)_extractor;
-(BOOL)_extractorFinishedDecoding;
-(void)set_extractorFinishedDecoding:(BOOL)arg1 ;
-(id)_backgroundPublishingURL;
-(BOOL)_extractorPreparedForExtraction;
-(void)set_extractorPreparedForExtraction:(BOOL)arg1 ;
-(void)_consumePendingBytesReceivedEncoded;
-(BOOL)_cacheOnly;
-(void)set_cachePolicy:(int)arg1 ;
-(void)set_preventsSystemHTTPProxyAuthentication:(BOOL)arg1 ;
-(long long)_priorityValue;
-(long long)_bytesPerSecondLimit;
-(void)set_backgroundTaskTimingData:(id)arg1 ;
-(void)set_trailers:(id)arg1 ;
-(id)_proxySettings;
-(PerformanceTimingRef)_performanceTiming;
-(id)earliestBeginDate;
-(void)setEarliestBeginDate:(id)arg1 ;
-(long long)countOfBytesClientExpectsToSend;
-(void)setCountOfBytesClientExpectsToSend:(long long)arg1 ;
-(long long)countOfBytesClientExpectsToReceive;
-(void)setCountOfBytesClientExpectsToReceive:(long long)arg1 ;
-(void)set_uniqueIdentifier:(id)arg1 ;
-(id)_backgroundTaskTimingData;
-(BOOL)_doesSZExtractorConsumeExtractedData;
-(void)set_doesSZExtractorConsumeExtractedData:(BOOL)arg1 ;
-(BOOL)_hasSZExtractor;
-(void)set_hasSZExtractor:(BOOL)arg1 ;
-(BOOL)_authenticatorConfiguredViaTaskProperty;
-(id)_publishingURL;
-(double)_loadingPriorityValue;
-(double)_loadingPriority;
-(void)setDependencyTree:(id)arg1 ;
-(id)_dependencyInfo;
-(void)setTaskDependency:(id)arg1 ;
-(CFDictionaryRef)_copyATSState;
-(id)_appleIDContext;
-(CFURLRequestRef)_copyCurrentCFURLRequest;
-(CFURLRequestRef)_copyOriginalCFURLRequest;
-(void)_setSocketProperties:(CFDictionaryRef)arg1 connectionProperties:(CFDictionaryRef)arg2 ;
-(void)_setExplicitStorageSession:(CFURLStorageSessionRef)arg1 ;
-(void)_setExplicitCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)set_timeoutInterval:(double)arg1 ;
-(void)set_shouldPipelineHTTP:(BOOL)arg1 ;
-(void)set_shouldUsePipelineHeuristics:(BOOL)arg1 ;
-(void)set_shouldSkipPipelineProbe:(BOOL)arg1 ;
-(void)set_shouldHandleCookies:(BOOL)arg1 ;
-(void)set_cookieAcceptPolicy:(int)arg1 ;
-(void)set_preventsIdleSystemSleep:(BOOL)arg1 ;
-(void)set_contentDispositionFallbackArray:(id)arg1 ;
-(void)set_allowsCellular:(BOOL)arg1 ;
-(void)set_networkServiceType:(int)arg1 ;
-(void)set_proxySettings:(id)arg1 ;
-(void)set_sslSettings:(id)arg1 ;
-(void)set_boundInterfaceIdentifier:(id)arg1 ;
-(void)set_disallowCellular:(BOOL)arg1 ;
-(void)set_allowedProtocolTypes:(unsigned long long)arg1 ;
-(void)set_requestPriority:(long long)arg1 ;
-(void)set_expectedWorkload:(long long)arg1 ;
-(void)set_timeWindowDelay:(double)arg1 ;
-(void)set_timeWindowDuration:(double)arg1 ;
-(int)_cachePolicy;
-(double)_timeoutInterval;
-(id)_sslSettings;
-(BOOL)_shouldPipelineHTTP;
-(BOOL)_shouldUsePipelineHeuristics;
-(BOOL)_shouldSkipPipelineProbe;
-(long long)_requestPriority;
-(unsigned long long)_allowedProtocolTypes;
-(BOOL)_prohibitAuthUI;
-(BOOL)_strictContentLength;
-(long long)_suspensionThreshhold;
-(BOOL)_preventsIdleSystemSleep;
-(long long)_expectedWorkload;
-(double)_timeWindowDelay;
-(double)_timeWindowDuration;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(void)_setConnectionIsCellular:(BOOL)arg1 ;
-(id)_ledBellyFallbackURL;
-(id)_ledBellyServiceIdentifier;
-(void)set_ledBellyServiceIdentifier:(id)arg1 ;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(BOOL)_shouldSkipPreferredClientCertificateLookup;
-(void)_getAuthenticationHeadersForResponse:(CFURLResponseRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CFSetRef)_getAuthenticatorStatusCodes;
-(id)_DuetActivityProperties;
-(void)set_TCPConnectionMetadata:(id)arg1 ;
-(id)_TCPConnectionMetadata;
-(BOOL)_preventsSystemHTTPProxyAuthentication;
-(void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1 ;
-(unsigned short)_TLSNegotiatedCipherSuite;
-(id)_APSRelayTopic;
-(BOOL)_shouldReportTimingDataToAWD;
-(id)currentRequest_mainDocumentURL;
-(int)_cookieAcceptPolicy;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(BOOL)_disallowCellular;
-(int)_networkServiceType;
-(void)adjustConditionalConnectionProperties:(CFDictionaryRef)arg1 ;
-(void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg1 statusCodes:(id)arg2 ;
-(void)_initializeTimingDataWithSessionConfiguration:(id)arg1 ;
-(void)_prepareNewTimingDataContainer;
-(id)_transactionMetrics;
-(void)_completeUploadProgress;
-(void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1 ;
-(void)set_loadingPriority:(double)arg1 ;
-(void)addAdditionalHeadersToRequest:(CFURLRequestRef)arg1 ;
-(long long)_countOfPendingBytesReceivedEncoded;
-(long long)_countOfBytesReceivedEncoded;
-(CFHSTSPolicyRef)_cfHSTS;
-(CFURLCacheRef)_cfCache;
-(CFURLCredentialStorageRef)_cfCreds;
-(OpaqueCFHTTPCookieStorageRef)_cfCookies;
-(BOOL)_shouldHandleCookies;
-(id)_contentDispositionFallbackArray;
-(BOOL)_allowsCellular;
-(void)set_bytesPerSecondLimit:(long long)arg1 ;
-(void)set_shouldReportTimingDataToAWD:(BOOL)arg1 ;
-(id)_trailers;
-(BOOL)_allowsQUIC;
-(void)set_allowsQUIC:(BOOL)arg1 ;
-(void)_setAppleIDContext:(id)arg1 ;
-(void)set_authenticatorConfiguredViaTaskProperty:(BOOL)arg1 ;
-(void)set_publishingURL:(id)arg1 ;
-(BOOL)_preconnect;
-(id)_incompleteTaskMetrics;
-(void)set_incompleteTaskMetrics:(id)arg1 ;
-(void)set_priorityValue:(long long)arg1 ;
-(void)set_loadingPriorityValue:(double)arg1 ;
-(void)set_currentCFURLRequest:(CFURLRequestRef)arg1 ;
-(int)_createAssertionWithType:(CFStringRef)arg1 name:(CFStringRef)arg2 assertion:(unsigned*)arg3 ;
-(unsigned)_darkWakePowerAssertion;
-(void)set_darkWakePowerAssertion:(unsigned)arg1 ;
-(void)set_prohibitAuthUI:(BOOL)arg1 ;
-(void)set_strictContentLength:(BOOL)arg1 ;
-(void)set_cfCache:(CFURLCacheRef)arg1 ;
-(void)set_cfCreds:(CFURLCredentialStorageRef)arg1 ;
-(void)set_cfCookies:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)set_cfHSTS:(CFHSTSPolicyRef)arg1 ;
-(void)set_dependencyInfo:(id)arg1 ;
-(id)dependencyTree;
-(void)set_countOfPendingBytesReceivedEncoded:(long long)arg1 ;
-(void)set_countOfBytesReceivedEncoded:(long long)arg1 ;
-(void)set_priority:(long long)arg1 ;
-(void)set_ledBellyFallbackURL:(id)arg1 ;
-(void)set_performanceTiming:(PerformanceTimingRef)arg1 ;
-(void)set_cacheOnly:(BOOL)arg1 ;
-(BOOL)_connectionIsCellular;
-(id)taskDependency;
-(void)set_DuetActivityProperties:(id)arg1 ;
-(id)workQueue;
-(unsigned long long)taskIdentifier;
-(void)setResponse:(id)arg1 ;
-(id)taskDescription;
-(long long)countOfBytesExpectedToReceive;
-(long long)countOfBytesExpectedToSend;
-(long long)countOfBytesSent;
-(long long)countOfBytesReceived;
-(id)currentRequest;
-(id)originalRequest;
-(void)setTaskDescription:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)response;
-(id)_uniqueIdentifier;
-(void)setStartTime:(double)arg1 ;
-(void)suspend;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(float)arg1 ;
-(float)priority;
-(double)startTime;
-(void)resume;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)session;
-(void)setSession:(id)arg1 ;
-(long long)_priority;
-(id)progress;
-(id)initWithTask:(id)arg1 ;
-(void)set_APSRelayTopic:(id)arg1 ;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(void)set_pathToDownloadTaskFile:(id)arg1 ;
-(void)set_storagePartitionIdentifier:(id)arg1 ;
-(void)set_preconnect:(BOOL)arg1 ;
-(id)_storagePartitionIdentifier;
-(void)set_shouldSkipPreferredClientCertificateLookup:(BOOL)arg1 ;
-(id)_boundInterfaceIdentifier;
-(void)setError:(id)arg1 ;
-(id)error;
-(id)_timingData;
-(id)authenticator;
-(void)setAuthenticator:(id)arg1 ;
-(unsigned)_powerAssertion;
-(void)set_timeoutIntervalForResource:(double)arg1 ;
-(void)setCurrentRequest:(id)arg1 ;
@end

