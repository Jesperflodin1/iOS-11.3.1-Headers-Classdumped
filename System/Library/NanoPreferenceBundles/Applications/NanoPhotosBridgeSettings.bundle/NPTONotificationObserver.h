/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPhotosBridgeSettings.bundle/NanoPhotosBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NPTONotificationObserver : NSObject {

	int _notificationToken;

}

@property (assign,nonatomic) int notificationToken;              //@synthesize notificationToken=_notificationToken - In the implementation block
+(id)notificationObserverWithNotificationName:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithNotificationToken:(int)arg1 ;
-(void)setNotificationToken:(int)arg1 ;
-(int)notificationToken;
@end

