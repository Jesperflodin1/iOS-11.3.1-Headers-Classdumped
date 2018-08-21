/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoTransitionObserver.h>
#import <libobjc.A.dylib/SXVideoControlsLockManager.h>

@protocol SXVideoControlsLockManager <NSObject>
@required
-(void)addControl:(id)arg1;
-(void)removeControl:(id)arg1;

@end


@protocol SXVideoSkipLockObserverFactory, SXVideoSkipLockObserving;
@class NSHashTable, NSString;

@interface SXVideoControlsLockManager : NSObject <SXVideoTransitionObserver, SXVideoControlsLockManager> {

	id<SXVideoSkipLockObserverFactory> _factory;
	NSHashTable* _controls;
	id<SXVideoSkipLockObserving> _observer;

}

@property (nonatomic,readonly) id<SXVideoSkipLockObserverFactory> factory;              //@synthesize factory=_factory - In the implementation block
@property (nonatomic,readonly) NSHashTable * controls;                                  //@synthesize controls=_controls - In the implementation block
@property (nonatomic,retain) id<SXVideoSkipLockObserving> observer;                     //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXVideoSkipLockObserverFactory>)factory;
-(void)setObserver:(id<SXVideoSkipLockObserving>)arg1 ;
-(id<SXVideoSkipLockObserving>)observer;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(NSHashTable *)controls;
-(void)updateControl:(id)arg1 withLockObserver:(id)arg2 ;
-(void)addControl:(id)arg1 ;
-(void)removeControl:(id)arg1 ;
-(id)initWithSkipLockObserverFactory:(id)arg1 ;
@end

