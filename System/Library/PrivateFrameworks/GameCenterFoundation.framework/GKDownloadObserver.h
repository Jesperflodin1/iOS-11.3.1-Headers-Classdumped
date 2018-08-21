/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>

@class SSDownloadManager, NSString;

@interface GKDownloadObserver : NSObject <SSDownloadManagerObserver> {

	SSDownloadManager* _downloadManager;

}

@property (retain) SSDownloadManager * downloadManager;              //@synthesize downloadManager=_downloadManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedObserver;
-(id)init;
-(void)dealloc;
-(SSDownloadManager *)downloadManager;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(BOOL)isDownloadingGame:(id)arg1 ;
-(void)setDownloadManager:(SSDownloadManager *)arg1 ;
@end
