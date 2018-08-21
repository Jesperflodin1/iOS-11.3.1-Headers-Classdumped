/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface RMSMediaRemoteDeviceController : NSObject {

	NSMapTable* _devices;

}
+(id)sharedController;
-(id)init;
-(void)addDevice:(void*)arg1 ;
-(void)removeDevice:(void*)arg1 ;
-(void)discoverDeviceWithUniqueIdentifier:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_keyWithDevice:(void*)arg1 ;
-(void*)deviceForUniqueIdentifier:(id)arg1 ;
@end

