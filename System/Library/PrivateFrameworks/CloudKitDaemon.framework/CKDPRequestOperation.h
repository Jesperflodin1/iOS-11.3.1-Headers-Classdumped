/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPArchiveRecordsRequest, CKDPAssetUploadTokenRetrieveRequest, CKDPBundlesForContainerRequest, CKDPDeleteCommentRequest, CKDPDeleteContainerRequest, CKDPFetchArchivedRecordsRequest, CKDPCodeFunctionInvokeRequest, CKDPGetCommentRequest, CKDPGetCommentsRequest, CKDPGetLikesRequest, CKDPRequestOperationHeader, CKDPLikeRequest, CKDPMescalCertificateRequest, CKDPMescalSessionInfoRequest, CKDPMescalSignatureRequest, CKDPNotificationMarkReadRequest, CKDPNotificationSyncRequest, CKDPPostCommentRequest, CKDPPulseRequest, CKDPQueryRetrieveRequest, CKDPRecordDeleteRequest, CKDPRecordResolveTokenRequest, CKDPRecordRetrieveAncestorsRequest, CKDPRecordRetrieveChangesRequest, CKDPRecordRetrieveRequest, CKDPRecordRetrieveVersionsRequest, CKDPRecordSaveRequest, CKDPOperation, CKDPSetBadgeCountRequest, CKDPShareAcceptRequest, CKDPShareDeleteRequest, CKDPShareRetrieveRequest, CKDPShareSaveRequest, CKDPShareTokenDeleteRequest, CKDPShareTokenRetrieveRequest, CKDPShareTokenSaveRequest, CKDPShareVettingInitiateRequest, CKDPSubscriptionCreateRequest, CKDPSubscriptionDeleteRequest, CKDPSubscriptionRetrieveRequest, CKDPTokenRegistrationRequest, CKDPTokenUnregistrationRequest, CKDPUnlikeRequest, CKDPUserAvailableQuotaRequest, CKDPUserPrivacySettingsBatchLookupRequest, CKDPUserPrivacySettingsResetRequest, CKDPUserPrivacySettingsRetrieveRequest, CKDPUserPrivacySettingsUpdateRequest, CKDPUserQueryRequest, CKDPUserRetrieveRequest, CKDPWebAuthTokenRetrieveRequest, CKDPZoneDeleteRequest, CKDPZoneRetrieveChangesRequest, CKDPZoneRetrieveRequest, CKDPZoneSaveRequest;

@interface CKDPRequestOperation : PBCodable <NSCopying> {

	CKDPArchiveRecordsRequest* _archiveRecordsRequest;
	CKDPAssetUploadTokenRetrieveRequest* _assetUploadTokenRetrieveRequest;
	CKDPBundlesForContainerRequest* _bundlesForContainerRequest;
	CKDPDeleteCommentRequest* _deleteCommentRequest;
	CKDPDeleteContainerRequest* _deleteContainerRequest;
	CKDPFetchArchivedRecordsRequest* _fetchArchivedRecordsRequest;
	CKDPCodeFunctionInvokeRequest* _functionInvokeRequest;
	CKDPGetCommentRequest* _getCommentRequest;
	CKDPGetCommentsRequest* _getCommentsRequest;
	CKDPGetLikesRequest* _getLikesRequest;
	CKDPRequestOperationHeader* _header;
	CKDPLikeRequest* _likeRequest;
	CKDPMescalCertificateRequest* _mescalCertificateRequest;
	CKDPMescalSessionInfoRequest* _mescalSessionInfoRequest;
	CKDPMescalSignatureRequest* _mescalSignatureRequest;
	CKDPNotificationMarkReadRequest* _notificationMarkReadRequest;
	CKDPNotificationSyncRequest* _notificationSyncRequest;
	CKDPPostCommentRequest* _postCommentRequest;
	CKDPPulseRequest* _pulseRequest;
	CKDPQueryRetrieveRequest* _queryRetrieveRequest;
	CKDPRecordDeleteRequest* _recordDeleteRequest;
	CKDPRecordResolveTokenRequest* _recordResolveTokenRequest;
	CKDPRecordRetrieveAncestorsRequest* _recordRetrieveAncestorsRequest;
	CKDPRecordRetrieveChangesRequest* _recordRetrieveChangesRequest;
	CKDPRecordRetrieveRequest* _recordRetrieveRequest;
	CKDPRecordRetrieveVersionsRequest* _recordRetrieveVersionsRequest;
	CKDPRecordSaveRequest* _recordSaveRequest;
	CKDPOperation* _request;
	CKDPSetBadgeCountRequest* _setBadgeCountRequest;
	CKDPShareAcceptRequest* _shareAcceptRequest;
	CKDPShareDeleteRequest* _shareDeleteRequest;
	CKDPShareRetrieveRequest* _shareRetrieveRequest;
	CKDPShareSaveRequest* _shareSaveRequest;
	CKDPShareTokenDeleteRequest* _shareTokenDeleteRequest;
	CKDPShareTokenRetrieveRequest* _shareTokenRetrieveRequest;
	CKDPShareTokenSaveRequest* _shareTokenSaveRequest;
	CKDPShareVettingInitiateRequest* _shareVettingInitiateRequest;
	CKDPSubscriptionCreateRequest* _subscriptionCreateRequest;
	CKDPSubscriptionDeleteRequest* _subscriptionDeleteRequest;
	CKDPSubscriptionRetrieveRequest* _subscriptionRetrieveRequest;
	CKDPTokenRegistrationRequest* _tokenRegistrationRequest;
	CKDPTokenUnregistrationRequest* _tokenUnregistrationRequest;
	CKDPUnlikeRequest* _unlikeRequest;
	CKDPUserAvailableQuotaRequest* _userAvailableQuotaRequest;
	CKDPUserPrivacySettingsBatchLookupRequest* _userPrivacySettingsBatchLookupRequest;
	CKDPUserPrivacySettingsResetRequest* _userPrivacySettingsResetRequest;
	CKDPUserPrivacySettingsRetrieveRequest* _userPrivacySettingsRetrieveRequest;
	CKDPUserPrivacySettingsUpdateRequest* _userPrivacySettingsUpdateRequest;
	CKDPUserQueryRequest* _userQueryRequest;
	CKDPUserRetrieveRequest* _userRetrieveRequest;
	CKDPWebAuthTokenRetrieveRequest* _webAuthTokenRetrieveRequest;
	CKDPZoneDeleteRequest* _zoneDeleteRequest;
	CKDPZoneRetrieveChangesRequest* _zoneRetrieveChangesRequest;
	CKDPZoneRetrieveRequest* _zoneRetrieveRequest;
	CKDPZoneSaveRequest* _zoneSaveRequest;

}

@property (nonatomic,readonly) BOOL hasShareSaveRequest; 
@property (nonatomic,retain) CKDPShareSaveRequest * shareSaveRequest; 
@property (nonatomic,readonly) BOOL hasShareRetrieveRequest; 
@property (nonatomic,retain) CKDPShareRetrieveRequest * shareRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasShareDeleteRequest; 
@property (nonatomic,retain) CKDPShareDeleteRequest * shareDeleteRequest; 
@property (nonatomic,readonly) BOOL hasShareAcceptRequest; 
@property (nonatomic,retain) CKDPShareAcceptRequest * shareAcceptRequest; 
@property (nonatomic,readonly) BOOL hasShareTokenSaveRequest; 
@property (nonatomic,retain) CKDPShareTokenSaveRequest * shareTokenSaveRequest; 
@property (nonatomic,readonly) BOOL hasShareTokenRetrieveRequest; 
@property (nonatomic,retain) CKDPShareTokenRetrieveRequest * shareTokenRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasShareTokenDeleteRequest; 
@property (nonatomic,retain) CKDPShareTokenDeleteRequest * shareTokenDeleteRequest; 
@property (nonatomic,readonly) BOOL hasShareVettingInitiateRequest; 
@property (nonatomic,retain) CKDPShareVettingInitiateRequest * shareVettingInitiateRequest; 
@property (nonatomic,readonly) BOOL hasZoneSaveRequest; 
@property (nonatomic,retain) CKDPZoneSaveRequest * zoneSaveRequest; 
@property (nonatomic,readonly) BOOL hasZoneRetrieveRequest; 
@property (nonatomic,retain) CKDPZoneRetrieveRequest * zoneRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasZoneDeleteRequest; 
@property (nonatomic,retain) CKDPZoneDeleteRequest * zoneDeleteRequest; 
@property (nonatomic,readonly) BOOL hasZoneRetrieveChangesRequest; 
@property (nonatomic,retain) CKDPZoneRetrieveChangesRequest * zoneRetrieveChangesRequest; 
@property (nonatomic,readonly) BOOL hasRecordSaveRequest; 
@property (nonatomic,retain) CKDPRecordSaveRequest * recordSaveRequest; 
@property (nonatomic,readonly) BOOL hasRecordRetrieveRequest; 
@property (nonatomic,retain) CKDPRecordRetrieveRequest * recordRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasRecordRetrieveVersionsRequest; 
@property (nonatomic,retain) CKDPRecordRetrieveVersionsRequest * recordRetrieveVersionsRequest; 
@property (nonatomic,readonly) BOOL hasRecordRetrieveChangesRequest; 
@property (nonatomic,retain) CKDPRecordRetrieveChangesRequest * recordRetrieveChangesRequest; 
@property (nonatomic,readonly) BOOL hasRecordDeleteRequest; 
@property (nonatomic,retain) CKDPRecordDeleteRequest * recordDeleteRequest; 
@property (nonatomic,readonly) BOOL hasRecordRetrieveAncestorsRequest; 
@property (nonatomic,retain) CKDPRecordRetrieveAncestorsRequest * recordRetrieveAncestorsRequest; 
@property (nonatomic,readonly) BOOL hasRecordResolveTokenRequest; 
@property (nonatomic,retain) CKDPRecordResolveTokenRequest * recordResolveTokenRequest; 
@property (nonatomic,readonly) BOOL hasFetchArchivedRecordsRequest; 
@property (nonatomic,retain) CKDPFetchArchivedRecordsRequest * fetchArchivedRecordsRequest; 
@property (nonatomic,readonly) BOOL hasUserAvailableQuotaRequest; 
@property (nonatomic,retain) CKDPUserAvailableQuotaRequest * userAvailableQuotaRequest; 
@property (nonatomic,readonly) BOOL hasUserRetrieveRequest; 
@property (nonatomic,retain) CKDPUserRetrieveRequest * userRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasQueryRetrieveRequest; 
@property (nonatomic,retain) CKDPQueryRetrieveRequest * queryRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasAssetUploadTokenRetrieveRequest; 
@property (nonatomic,retain) CKDPAssetUploadTokenRetrieveRequest * assetUploadTokenRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasDeleteContainerRequest; 
@property (nonatomic,retain) CKDPDeleteContainerRequest * deleteContainerRequest; 
@property (nonatomic,readonly) BOOL hasBundlesForContainerRequest; 
@property (nonatomic,retain) CKDPBundlesForContainerRequest * bundlesForContainerRequest; 
@property (nonatomic,readonly) BOOL hasWebAuthTokenRetrieveRequest; 
@property (nonatomic,retain) CKDPWebAuthTokenRetrieveRequest * webAuthTokenRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasFunctionInvokeRequest; 
@property (nonatomic,retain) CKDPCodeFunctionInvokeRequest * functionInvokeRequest; 
@property (nonatomic,readonly) BOOL hasPostCommentRequest; 
@property (nonatomic,retain) CKDPPostCommentRequest * postCommentRequest; 
@property (nonatomic,readonly) BOOL hasGetCommentsRequest; 
@property (nonatomic,retain) CKDPGetCommentsRequest * getCommentsRequest; 
@property (nonatomic,readonly) BOOL hasGetCommentRequest; 
@property (nonatomic,retain) CKDPGetCommentRequest * getCommentRequest; 
@property (nonatomic,readonly) BOOL hasDeleteCommentRequest; 
@property (nonatomic,retain) CKDPDeleteCommentRequest * deleteCommentRequest; 
@property (nonatomic,readonly) BOOL hasLikeRequest; 
@property (nonatomic,retain) CKDPLikeRequest * likeRequest; 
@property (nonatomic,readonly) BOOL hasUnlikeRequest; 
@property (nonatomic,retain) CKDPUnlikeRequest * unlikeRequest; 
@property (nonatomic,readonly) BOOL hasGetLikesRequest; 
@property (nonatomic,retain) CKDPGetLikesRequest * getLikesRequest; 
@property (nonatomic,readonly) BOOL hasPulseRequest; 
@property (nonatomic,retain) CKDPPulseRequest * pulseRequest; 
@property (nonatomic,readonly) BOOL hasSubscriptionCreateRequest; 
@property (nonatomic,retain) CKDPSubscriptionCreateRequest * subscriptionCreateRequest; 
@property (nonatomic,readonly) BOOL hasSubscriptionRetrieveRequest; 
@property (nonatomic,retain) CKDPSubscriptionRetrieveRequest * subscriptionRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasSubscriptionDeleteRequest; 
@property (nonatomic,retain) CKDPSubscriptionDeleteRequest * subscriptionDeleteRequest; 
@property (nonatomic,readonly) BOOL hasArchiveRecordsRequest; 
@property (nonatomic,retain) CKDPArchiveRecordsRequest * archiveRecordsRequest; 
@property (nonatomic,readonly) BOOL hasUserQueryRequest; 
@property (nonatomic,retain) CKDPUserQueryRequest * userQueryRequest; 
@property (nonatomic,readonly) BOOL hasUserPrivacySettingsUpdateRequest; 
@property (nonatomic,retain) CKDPUserPrivacySettingsUpdateRequest * userPrivacySettingsUpdateRequest; 
@property (nonatomic,readonly) BOOL hasUserPrivacySettingsResetRequest; 
@property (nonatomic,retain) CKDPUserPrivacySettingsResetRequest * userPrivacySettingsResetRequest; 
@property (nonatomic,readonly) BOOL hasUserPrivacySettingsBatchLookupRequest; 
@property (nonatomic,retain) CKDPUserPrivacySettingsBatchLookupRequest * userPrivacySettingsBatchLookupRequest; 
@property (nonatomic,readonly) BOOL hasUserPrivacySettingsRetrieveRequest; 
@property (nonatomic,retain) CKDPUserPrivacySettingsRetrieveRequest * userPrivacySettingsRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasTokenRegistrationRequest; 
@property (nonatomic,retain) CKDPTokenRegistrationRequest * tokenRegistrationRequest; 
@property (nonatomic,readonly) BOOL hasTokenUnregistrationRequest; 
@property (nonatomic,retain) CKDPTokenUnregistrationRequest * tokenUnregistrationRequest; 
@property (nonatomic,readonly) BOOL hasSetBadgeCountRequest; 
@property (nonatomic,retain) CKDPSetBadgeCountRequest * setBadgeCountRequest; 
@property (nonatomic,readonly) BOOL hasNotificationSyncRequest; 
@property (nonatomic,retain) CKDPNotificationSyncRequest * notificationSyncRequest; 
@property (nonatomic,readonly) BOOL hasNotificationMarkReadRequest; 
@property (nonatomic,retain) CKDPNotificationMarkReadRequest * notificationMarkReadRequest; 
@property (nonatomic,readonly) BOOL hasMescalSignatureRequest; 
@property (nonatomic,retain) CKDPMescalSignatureRequest * mescalSignatureRequest; 
@property (nonatomic,readonly) BOOL hasMescalSessionInfoRequest; 
@property (nonatomic,retain) CKDPMescalSessionInfoRequest * mescalSessionInfoRequest; 
@property (nonatomic,readonly) BOOL hasMescalCertificateRequest; 
@property (nonatomic,retain) CKDPMescalCertificateRequest * mescalCertificateRequest; 
@property (nonatomic,readonly) BOOL hasHeader; 
@property (nonatomic,retain) CKDPRequestOperationHeader * header;                                                            //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) CKDPOperation * request;                                                                        //@synthesize request=_request - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRequest;
-(void)setRequest:(CKDPOperation *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKDPOperation *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHeader:(CKDPRequestOperationHeader *)arg1 ;
-(CKDPRequestOperationHeader *)header;
-(CKDPQueryRetrieveRequest *)queryRetrieveRequest;
-(void)setQueryRetrieveRequest:(CKDPQueryRetrieveRequest *)arg1 ;
-(void)setRecordRetrieveRequest:(CKDPRecordRetrieveRequest *)arg1 ;
-(BOOL)hasRecordRetrieveRequest;
-(CKDPRecordRetrieveRequest *)recordRetrieveRequest;
-(BOOL)hasQueryRetrieveRequest;
-(void)setMescalSignatureRequest:(CKDPMescalSignatureRequest *)arg1 ;
-(CKDPMescalSignatureRequest *)mescalSignatureRequest;
-(void)setAssetUploadTokenRetrieveRequest:(CKDPAssetUploadTokenRetrieveRequest *)arg1 ;
-(CKDPAssetUploadTokenRetrieveRequest *)assetUploadTokenRetrieveRequest;
-(void)setShareVettingInitiateRequest:(CKDPShareVettingInitiateRequest *)arg1 ;
-(CKDPShareVettingInitiateRequest *)shareVettingInitiateRequest;
-(void)setRecordResolveTokenRequest:(CKDPRecordResolveTokenRequest *)arg1 ;
-(CKDPRecordResolveTokenRequest *)recordResolveTokenRequest;
-(BOOL)hasMescalSignatureRequest;
-(void)setZoneSaveRequest:(CKDPZoneSaveRequest *)arg1 ;
-(void)setZoneRetrieveRequest:(CKDPZoneRetrieveRequest *)arg1 ;
-(void)setZoneDeleteRequest:(CKDPZoneDeleteRequest *)arg1 ;
-(void)setZoneRetrieveChangesRequest:(CKDPZoneRetrieveChangesRequest *)arg1 ;
-(void)setRecordSaveRequest:(CKDPRecordSaveRequest *)arg1 ;
-(void)setRecordRetrieveVersionsRequest:(CKDPRecordRetrieveVersionsRequest *)arg1 ;
-(void)setRecordRetrieveChangesRequest:(CKDPRecordRetrieveChangesRequest *)arg1 ;
-(void)setRecordDeleteRequest:(CKDPRecordDeleteRequest *)arg1 ;
-(void)setRecordRetrieveAncestorsRequest:(CKDPRecordRetrieveAncestorsRequest *)arg1 ;
-(void)setFetchArchivedRecordsRequest:(CKDPFetchArchivedRecordsRequest *)arg1 ;
-(void)setDeleteContainerRequest:(CKDPDeleteContainerRequest *)arg1 ;
-(void)setUserAvailableQuotaRequest:(CKDPUserAvailableQuotaRequest *)arg1 ;
-(void)setBundlesForContainerRequest:(CKDPBundlesForContainerRequest *)arg1 ;
-(void)setWebAuthTokenRetrieveRequest:(CKDPWebAuthTokenRetrieveRequest *)arg1 ;
-(void)setSubscriptionCreateRequest:(CKDPSubscriptionCreateRequest *)arg1 ;
-(void)setSubscriptionRetrieveRequest:(CKDPSubscriptionRetrieveRequest *)arg1 ;
-(void)setSubscriptionDeleteRequest:(CKDPSubscriptionDeleteRequest *)arg1 ;
-(void)setUserRetrieveRequest:(CKDPUserRetrieveRequest *)arg1 ;
-(void)setUserQueryRequest:(CKDPUserQueryRequest *)arg1 ;
-(void)setUserPrivacySettingsRetrieveRequest:(CKDPUserPrivacySettingsRetrieveRequest *)arg1 ;
-(void)setUserPrivacySettingsUpdateRequest:(CKDPUserPrivacySettingsUpdateRequest *)arg1 ;
-(void)setUserPrivacySettingsResetRequest:(CKDPUserPrivacySettingsResetRequest *)arg1 ;
-(void)setUserPrivacySettingsBatchLookupRequest:(CKDPUserPrivacySettingsBatchLookupRequest *)arg1 ;
-(void)setShareSaveRequest:(CKDPShareSaveRequest *)arg1 ;
-(void)setShareRetrieveRequest:(CKDPShareRetrieveRequest *)arg1 ;
-(void)setShareDeleteRequest:(CKDPShareDeleteRequest *)arg1 ;
-(void)setShareAcceptRequest:(CKDPShareAcceptRequest *)arg1 ;
-(void)setShareTokenSaveRequest:(CKDPShareTokenSaveRequest *)arg1 ;
-(void)setShareTokenRetrieveRequest:(CKDPShareTokenRetrieveRequest *)arg1 ;
-(void)setShareTokenDeleteRequest:(CKDPShareTokenDeleteRequest *)arg1 ;
-(void)setPostCommentRequest:(CKDPPostCommentRequest *)arg1 ;
-(void)setGetCommentsRequest:(CKDPGetCommentsRequest *)arg1 ;
-(void)setDeleteCommentRequest:(CKDPDeleteCommentRequest *)arg1 ;
-(void)setLikeRequest:(CKDPLikeRequest *)arg1 ;
-(void)setUnlikeRequest:(CKDPUnlikeRequest *)arg1 ;
-(void)setGetLikesRequest:(CKDPGetLikesRequest *)arg1 ;
-(void)setGetCommentRequest:(CKDPGetCommentRequest *)arg1 ;
-(void)setPulseRequest:(CKDPPulseRequest *)arg1 ;
-(void)setTokenRegistrationRequest:(CKDPTokenRegistrationRequest *)arg1 ;
-(void)setTokenUnregistrationRequest:(CKDPTokenUnregistrationRequest *)arg1 ;
-(void)setSetBadgeCountRequest:(CKDPSetBadgeCountRequest *)arg1 ;
-(void)setNotificationSyncRequest:(CKDPNotificationSyncRequest *)arg1 ;
-(void)setNotificationMarkReadRequest:(CKDPNotificationMarkReadRequest *)arg1 ;
-(void)setArchiveRecordsRequest:(CKDPArchiveRecordsRequest *)arg1 ;
-(void)setMescalSessionInfoRequest:(CKDPMescalSessionInfoRequest *)arg1 ;
-(void)setMescalCertificateRequest:(CKDPMescalCertificateRequest *)arg1 ;
-(void)setFunctionInvokeRequest:(CKDPCodeFunctionInvokeRequest *)arg1 ;
-(BOOL)hasShareSaveRequest;
-(CKDPShareSaveRequest *)shareSaveRequest;
-(BOOL)hasShareRetrieveRequest;
-(CKDPShareRetrieveRequest *)shareRetrieveRequest;
-(BOOL)hasShareDeleteRequest;
-(CKDPShareDeleteRequest *)shareDeleteRequest;
-(BOOL)hasShareAcceptRequest;
-(CKDPShareAcceptRequest *)shareAcceptRequest;
-(BOOL)hasShareTokenSaveRequest;
-(CKDPShareTokenSaveRequest *)shareTokenSaveRequest;
-(BOOL)hasShareTokenRetrieveRequest;
-(CKDPShareTokenRetrieveRequest *)shareTokenRetrieveRequest;
-(BOOL)hasShareTokenDeleteRequest;
-(CKDPShareTokenDeleteRequest *)shareTokenDeleteRequest;
-(BOOL)hasShareVettingInitiateRequest;
-(BOOL)hasZoneSaveRequest;
-(CKDPZoneSaveRequest *)zoneSaveRequest;
-(BOOL)hasZoneRetrieveRequest;
-(CKDPZoneRetrieveRequest *)zoneRetrieveRequest;
-(BOOL)hasZoneDeleteRequest;
-(CKDPZoneDeleteRequest *)zoneDeleteRequest;
-(BOOL)hasZoneRetrieveChangesRequest;
-(CKDPZoneRetrieveChangesRequest *)zoneRetrieveChangesRequest;
-(BOOL)hasRecordSaveRequest;
-(CKDPRecordSaveRequest *)recordSaveRequest;
-(BOOL)hasRecordRetrieveVersionsRequest;
-(CKDPRecordRetrieveVersionsRequest *)recordRetrieveVersionsRequest;
-(BOOL)hasRecordRetrieveChangesRequest;
-(CKDPRecordRetrieveChangesRequest *)recordRetrieveChangesRequest;
-(BOOL)hasRecordDeleteRequest;
-(CKDPRecordDeleteRequest *)recordDeleteRequest;
-(BOOL)hasRecordRetrieveAncestorsRequest;
-(CKDPRecordRetrieveAncestorsRequest *)recordRetrieveAncestorsRequest;
-(BOOL)hasRecordResolveTokenRequest;
-(BOOL)hasFetchArchivedRecordsRequest;
-(CKDPFetchArchivedRecordsRequest *)fetchArchivedRecordsRequest;
-(BOOL)hasUserAvailableQuotaRequest;
-(CKDPUserAvailableQuotaRequest *)userAvailableQuotaRequest;
-(BOOL)hasUserRetrieveRequest;
-(CKDPUserRetrieveRequest *)userRetrieveRequest;
-(BOOL)hasAssetUploadTokenRetrieveRequest;
-(BOOL)hasDeleteContainerRequest;
-(CKDPDeleteContainerRequest *)deleteContainerRequest;
-(BOOL)hasBundlesForContainerRequest;
-(CKDPBundlesForContainerRequest *)bundlesForContainerRequest;
-(BOOL)hasWebAuthTokenRetrieveRequest;
-(CKDPWebAuthTokenRetrieveRequest *)webAuthTokenRetrieveRequest;
-(BOOL)hasFunctionInvokeRequest;
-(CKDPCodeFunctionInvokeRequest *)functionInvokeRequest;
-(BOOL)hasPostCommentRequest;
-(CKDPPostCommentRequest *)postCommentRequest;
-(BOOL)hasGetCommentsRequest;
-(CKDPGetCommentsRequest *)getCommentsRequest;
-(BOOL)hasGetCommentRequest;
-(CKDPGetCommentRequest *)getCommentRequest;
-(BOOL)hasDeleteCommentRequest;
-(CKDPDeleteCommentRequest *)deleteCommentRequest;
-(BOOL)hasLikeRequest;
-(CKDPLikeRequest *)likeRequest;
-(BOOL)hasUnlikeRequest;
-(CKDPUnlikeRequest *)unlikeRequest;
-(BOOL)hasGetLikesRequest;
-(CKDPGetLikesRequest *)getLikesRequest;
-(BOOL)hasPulseRequest;
-(CKDPPulseRequest *)pulseRequest;
-(BOOL)hasSubscriptionCreateRequest;
-(CKDPSubscriptionCreateRequest *)subscriptionCreateRequest;
-(BOOL)hasSubscriptionRetrieveRequest;
-(CKDPSubscriptionRetrieveRequest *)subscriptionRetrieveRequest;
-(BOOL)hasSubscriptionDeleteRequest;
-(CKDPSubscriptionDeleteRequest *)subscriptionDeleteRequest;
-(BOOL)hasArchiveRecordsRequest;
-(CKDPArchiveRecordsRequest *)archiveRecordsRequest;
-(BOOL)hasUserQueryRequest;
-(CKDPUserQueryRequest *)userQueryRequest;
-(BOOL)hasUserPrivacySettingsUpdateRequest;
-(CKDPUserPrivacySettingsUpdateRequest *)userPrivacySettingsUpdateRequest;
-(BOOL)hasUserPrivacySettingsResetRequest;
-(CKDPUserPrivacySettingsResetRequest *)userPrivacySettingsResetRequest;
-(BOOL)hasUserPrivacySettingsBatchLookupRequest;
-(CKDPUserPrivacySettingsBatchLookupRequest *)userPrivacySettingsBatchLookupRequest;
-(BOOL)hasUserPrivacySettingsRetrieveRequest;
-(CKDPUserPrivacySettingsRetrieveRequest *)userPrivacySettingsRetrieveRequest;
-(BOOL)hasTokenRegistrationRequest;
-(CKDPTokenRegistrationRequest *)tokenRegistrationRequest;
-(BOOL)hasTokenUnregistrationRequest;
-(CKDPTokenUnregistrationRequest *)tokenUnregistrationRequest;
-(BOOL)hasSetBadgeCountRequest;
-(CKDPSetBadgeCountRequest *)setBadgeCountRequest;
-(BOOL)hasNotificationSyncRequest;
-(CKDPNotificationSyncRequest *)notificationSyncRequest;
-(BOOL)hasNotificationMarkReadRequest;
-(CKDPNotificationMarkReadRequest *)notificationMarkReadRequest;
-(BOOL)hasMescalSessionInfoRequest;
-(CKDPMescalSessionInfoRequest *)mescalSessionInfoRequest;
-(BOOL)hasMescalCertificateRequest;
-(CKDPMescalCertificateRequest *)mescalCertificateRequest;
-(BOOL)hasHeader;
@end

