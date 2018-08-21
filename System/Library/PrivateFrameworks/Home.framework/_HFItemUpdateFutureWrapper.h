/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NAFuture, HFItem, HFItemUpdateOutcome;

@interface _HFItemUpdateFutureWrapper : NSObject {

	BOOL _isInternal;
	NAFuture* _future;
	HFItem* _item;
	HFItemUpdateOutcome* _outcome;

}

@property (nonatomic,retain) NAFuture * future;                          //@synthesize future=_future - In the implementation block
@property (nonatomic,retain) HFItem * item;                              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL isInternal;                            //@synthesize isInternal=_isInternal - In the implementation block
@property (nonatomic,retain) HFItemUpdateOutcome * outcome;              //@synthesize outcome=_outcome - In the implementation block
+(id)wrapperWithFuture:(id)arg1 item:(id)arg2 isInternal:(BOOL)arg3 ;
+(id)futuresFromWrappers:(id)arg1 ;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)setFuture:(NAFuture *)arg1 ;
-(NAFuture *)future;
-(void)setIsInternal:(BOOL)arg1 ;
-(BOOL)isInternal;
-(HFItemUpdateOutcome *)outcome;
-(void)setOutcome:(HFItemUpdateOutcome *)arg1 ;
@end
