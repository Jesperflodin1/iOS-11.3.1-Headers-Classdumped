/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMDUnpairedHAPAccessoryProgressHandler : HMFObject {

	NSUUID* _accessoryUUID;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSUUID * accessoryUUID;              //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,copy) id progressHandler;                    //@synthesize progressHandler=_progressHandler - In the implementation block
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(void)setAccessoryUUID:(NSUUID *)arg1 ;
-(NSUUID *)accessoryUUID;
-(id)initWithAccessoryUUID:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
@end
