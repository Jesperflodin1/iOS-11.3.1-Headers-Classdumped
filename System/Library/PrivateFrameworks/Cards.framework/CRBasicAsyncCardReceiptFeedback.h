/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRAsyncCardReceiptFeedback.h>

@protocol CRCard;
@class NSString, SFFeedback;

@interface CRBasicAsyncCardReceiptFeedback : NSObject <CRAsyncCardReceiptFeedback> {

	id<CRCard> baseCard;
	id<CRCard> requestedCard;
	id<CRCard> receivedCard;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SFFeedback * backingFeedback; 
@property (nonatomic,retain) id<CRCard> baseCard; 
@property (nonatomic,retain) id<CRCard> requestedCard; 
@property (nonatomic,retain) id<CRCard> receivedCard; 
-(id<CRCard>)baseCard;
-(id<CRCard>)requestedCard;
-(id<CRCard>)receivedCard;
-(void)setBaseCard:(id<CRCard>)arg1 ;
-(void)setRequestedCard:(id<CRCard>)arg1 ;
-(void)setReceivedCard:(id<CRCard>)arg1 ;
@end

