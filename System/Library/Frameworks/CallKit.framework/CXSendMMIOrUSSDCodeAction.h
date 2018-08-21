/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXAction.h>

@class NSString;

@interface CXSendMMIOrUSSDCodeAction : CXAction {

	NSString* _code;
	long long _ttyType;

}

@property (nonatomic,copy) NSString * code;                  //@synthesize code=_code - In the implementation block
@property (assign,nonatomic) long long ttyType;              //@synthesize ttyType=_ttyType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)code;
-(long long)ttyType;
-(void)setTtyType:(long long)arg1 ;
-(id)customDescription;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(void)setCode:(NSString *)arg1 ;
@end

