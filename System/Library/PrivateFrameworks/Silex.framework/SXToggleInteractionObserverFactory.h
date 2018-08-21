/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoInteractionObserverFactory.h>

@protocol SXVideoEventTrackerProviding;
@class NSString;

@interface SXToggleInteractionObserverFactory : NSObject <SXVideoInteractionObserverFactory> {

	id<SXVideoEventTrackerProviding> _eventTrackerProvider;

}

@property (nonatomic,readonly) id<SXVideoEventTrackerProviding> eventTrackerProvider;              //@synthesize eventTrackerProvider=_eventTrackerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXVideoEventTrackerProviding>)eventTrackerProvider;
-(id)createInteractionObserverForVideo:(id)arg1 ;
-(id)initWithVideoEventTrackerProvider:(id)arg1 ;
@end

