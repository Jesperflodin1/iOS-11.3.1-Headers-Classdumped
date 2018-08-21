/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CDSession, NSUserDefaults, NSMutableDictionary, CDAttribute, NSDictionary;

@interface _CDComplications : NSObject {

	NSObject*<OS_dispatch_queue> complicationQueue;
	CDSession* session;
	int deviceChangeToken;
	NSUserDefaults* pushLimits;
	NSMutableDictionary* meterTokens;
	CDAttribute* attribute;
	NSDictionary* _activeComplications;

}

@property (copy) NSDictionary * activeComplications;              //@synthesize activeComplications=_activeComplications - In the implementation block
+(id)sharedComplication;
+(id)initializeForAdmissionChecking:(BOOL)arg1 ;
-(id)initForComplications;
-(void)setActiveComplications:(NSDictionary *)arg1 ;
-(void)readOutActiveComplications;
-(int)remainingPushesOnComplication:(id)arg1 andReduceBy:(id)arg2 ;
-(NSDictionary *)activeComplications;
-(BOOL)watchIsCharging;
-(int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)arg1 ;
-(BOOL)admissionCheckOnComplication:(id)arg1 forRemote:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)isBundleActiveComplication:(id)arg1 ;
-(void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(id)CDAttributeForComplication:(id)arg1 error:(id*)arg2 ;
@end

