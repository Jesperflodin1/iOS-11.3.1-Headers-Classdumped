/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSObject;
@class NSObject, NSNumber;

@interface BRCContainerCellularSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _isCellularEnabledForDocumentsAndData;
	id<NSObject> _accountDidChangeNotificationObserver;

}
+(id)containerCellularSettings;
+(id)_notifAccountStore;
-(id)init;
-(void)dealloc;
-(void)_accountDidChange;
-(BOOL)isCellularEnabledForContainerID:(id)arg1 ;
-(BOOL)_isCellularEnabledForDocumentsAndData;
-(BOOL)_isCellularEnabledForBundleID:(id)arg1 ;
@end

