/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUserActivity, INCurrencyAmount;


@protocol INRideCompletionStatusExport <NSObject,JSExport>
@property (nonatomic,retain) NSUserActivity * completionUserActivity; 
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (assign,getter=isMissedPickup,nonatomic) BOOL missedPickup; 
@property (nonatomic,retain) INCurrencyAmount * paymentAmount; 
@property (assign,getter=isOutstanding,nonatomic) BOOL outstanding; 
@property (assign,getter=isCanceledByService,nonatomic) BOOL canceledByService; 
@required
+(BOOL)completed;
+(BOOL)canceledByService;
+(id)completedWithSettledPaymentAmount:(id)arg1;
+(id)completedWithOutstandingPaymentAmount:(id)arg1;
+(id)canceledByUser;
+(id)canceledMissedPickup;
-(id)init;
-(void)setCompleted:(BOOL)arg1;
-(BOOL)isCompleted;
-(void)setCompletionUserActivity:(id)arg1;
-(void)setPaymentAmount:(id)arg1;
-(void)setMissedPickup:(BOOL)arg1;
-(void)setOutstanding:(BOOL)arg1;
-(void)setCanceledByService:(BOOL)arg1;
-(NSUserActivity *)completionUserActivity;
-(INCurrencyAmount *)paymentAmount;
-(BOOL)isCanceledByService;
-(BOOL)isMissedPickup;
-(BOOL)isOutstanding;
-(BOOL)isCanceled;

@end

