/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ATAsset, NSString;

@interface ATStoreDownloadOperation : ICRequestOperation {

	BOOL _cancelAllRemaining;
	ATAsset* _asset;
	long long _downloadState;
	NSString* _downloadFilePath;

}

@property (nonatomic,retain) ATAsset * asset;                          //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) long long downloadState;                  //@synthesize downloadState=_downloadState - In the implementation block
@property (nonatomic,retain) NSString * downloadFilePath;              //@synthesize downloadFilePath=_downloadFilePath - In the implementation block
@property (assign,nonatomic) BOOL cancelAllRemaining;                  //@synthesize cancelAllRemaining=_cancelAllRemaining - In the implementation block
-(id)description;
-(id)initWithAsset:(id)arg1 ;
-(ATAsset *)asset;
-(void)setAsset:(ATAsset *)arg1 ;
-(NSString *)downloadFilePath;
-(void)setDownloadFilePath:(NSString *)arg1 ;
-(void)performDownloadOnOperationsQueue:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)cancelAllRemaining;
-(id)_ATErrorFromError:(id)arg1 ;
-(void)setCancelAllRemaining:(BOOL)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)setDownloadState:(long long)arg1 ;
-(long long)downloadState;
@end

