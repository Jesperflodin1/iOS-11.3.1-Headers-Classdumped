/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _AXAssertionServer : NSObject {

	/*^block*/id _assertionWasAcquiredHandler;
	/*^block*/id _assertionWasReleasedHandler;
	NSMutableDictionary* _heldAssertionMap;

}

@property (nonatomic,retain) NSMutableDictionary * heldAssertionMap;              //@synthesize heldAssertionMap=_heldAssertionMap - In the implementation block
@property (nonatomic,copy) id assertionWasAcquiredHandler;                        //@synthesize assertionWasAcquiredHandler=_assertionWasAcquiredHandler - In the implementation block
@property (nonatomic,copy) id assertionWasReleasedHandler;                        //@synthesize assertionWasReleasedHandler=_assertionWasReleasedHandler - In the implementation block
-(id)init;
-(id)description;
-(void)setHeldAssertionMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)heldAssertionMap;
-(id)assertionWasAcquiredHandler;
-(id)assertionWasReleasedHandler;
-(void)addHeldAssertionOfType:(id)arg1 byClient:(id)arg2 ;
-(void)removeHeldAssertionOfType:(id)arg1 byClient:(id)arg2 ;
-(id)clientsHoldingAssertionOfType:(id)arg1 ;
-(void)setAssertionWasAcquiredHandler:(id)arg1 ;
-(void)setAssertionWasReleasedHandler:(id)arg1 ;
@end

