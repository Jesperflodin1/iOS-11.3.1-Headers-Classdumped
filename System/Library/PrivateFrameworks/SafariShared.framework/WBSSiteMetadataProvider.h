/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSSiteMetadataProvider <NSObject>
@property (assign,nonatomic,__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate; 
@optional
-(id)operationForRequest:(id)arg1;
-(void)emptyCaches;
-(void)purgeUnneededCacheEntries;
-(void)stopWatchingUpdatesForRequest:(id)arg1;
-(void)savePendingChangesBeforeTermination;

@required
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)setProviderDelegate:(id)arg1;
-(BOOL)canHandleRequest:(id)arg1;

@end

