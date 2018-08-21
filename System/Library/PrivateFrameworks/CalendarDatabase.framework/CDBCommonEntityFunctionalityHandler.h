/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CalendarDatabase/CalendarDatabase-Structs.h>
@class NSObject, NSMutableSet;

@interface CDBCommonEntityFunctionalityHandler : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSMutableSet* _destructionObservers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lock;                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableSet * destructionObservers;              //@synthesize destructionObservers=_destructionObservers - In the implementation block
+(void)_notifyDestructionObservers:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)lock;
-(void)removeDestructionObserver:(CalRelationRef)arg1 ;
-(void)addDestructionObserver:(CalRelationRef)arg1 ;
-(void)notifyOfEntityDestruction;
-(void)setDestructionObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)destructionObservers;
-(void)setLock:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
