/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString, NSData;


@protocol VSAuthenticationToken <NSObject>
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,copy,readonly) NSData * serializedData; 
@required
-(BOOL)isValid;
-(BOOL)isOpaque;
-(NSString *)body;
-(void)setBody:(id)arg1;
-(NSDate *)expirationDate;
-(NSData *)serializedData;
-(id)initWithSerializedData:(id)arg1;

@end
