/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FMAlertManager : NSObject {

	NSMutableDictionary* _activeAlerts;
	NSMutableDictionary* _activeCFNotificationsByCategory;

}

@property (nonatomic,retain) NSMutableDictionary * activeAlerts;                                 //@synthesize activeAlerts=_activeAlerts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeCFNotificationsByCategory;              //@synthesize activeCFNotificationsByCategory=_activeCFNotificationsByCategory - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)initSingleton;
-(void)setActiveAlerts:(NSMutableDictionary *)arg1 ;
-(void)setActiveCFNotificationsByCategory:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activeCFNotificationsByCategory;
-(NSMutableDictionary *)activeAlerts;
-(id)_xpcTransactionNameFor:(id)arg1 ;
-(void)activateAlert:(id)arg1 ;
@end
