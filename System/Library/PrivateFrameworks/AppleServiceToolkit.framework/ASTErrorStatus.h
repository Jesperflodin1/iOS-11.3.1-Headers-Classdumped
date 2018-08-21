/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSMutableDictionary;

@interface ASTErrorStatus : NSObject {

	NSNumber* _code;
	NSString* _reason;
	NSMutableDictionary* _data;

}

@property (nonatomic,retain) NSNumber * code;                         //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSString * reason;                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * data;              //@synthesize data=_data - In the implementation block
+(id)errorStatusWithCode:(long long)arg1 ;
-(id)init;
-(id)dictionary;
-(NSNumber *)code;
-(NSMutableDictionary *)data;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)setCode:(NSNumber *)arg1 ;
-(id)reasonForCode:(id)arg1 ;
@end

