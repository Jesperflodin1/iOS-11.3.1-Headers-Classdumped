/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface HDOperation : NSOperation {

	NSMutableSet* _dependenciesForCancelationPolicyAllMustBeCanceled;
	NSMutableSet* _dependenciesForCancelationPolicyAnyCancels;
	NSObject*<OS_dispatch_queue> _dependencyQueue;

}
-(void)_evaluateDependencyCancelations;
-(void)_dependencyQueue_addDependency:(id)arg1 ;
-(id)_dependencyQueue_dependencies;
-(void)_dependencyQueue_removeDependency:(id)arg1 ;
-(void)addDependency:(id)arg1 cancelationPolicy:(long long)arg2 ;
-(id)init;
-(void)start;
-(id)dependencies;
-(void)addDependency:(id)arg1 ;
-(void)removeDependency:(id)arg1 ;
@end

