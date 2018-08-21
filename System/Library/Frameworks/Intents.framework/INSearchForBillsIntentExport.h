/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INBillPayee, INDateComponentsRange;


@protocol INSearchForBillsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INBillPayee * billPayee; 
@property (nonatomic,copy) INDateComponentsRange * paymentDateRange; 
@property (assign,nonatomic) long long billType; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,copy) INDateComponentsRange * dueDateRange; 
@required
-(id)init;
-(void)setStatus:(long long)arg1;
-(long long)status;
-(void)setBillPayee:(id)arg1;
-(void)setBillType:(long long)arg1;
-(INBillPayee *)billPayee;
-(long long)billType;
-(void)setPaymentDateRange:(id)arg1;
-(void)setDueDateRange:(id)arg1;
-(INDateComponentsRange *)paymentDateRange;
-(INDateComponentsRange *)dueDateRange;

@end

