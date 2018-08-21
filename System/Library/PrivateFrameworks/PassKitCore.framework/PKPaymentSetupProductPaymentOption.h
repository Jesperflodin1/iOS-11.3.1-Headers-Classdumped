/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKPaymentSetupProductPaymentOption : NSObject <NSSecureCoding> {

	unsigned long long _priority;
	long long _cardType;
	long long _supportedProtocols;

}

@property (nonatomic,readonly) unsigned long long priority;               //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) long long cardType;                        //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) long long supportedProtocols;              //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)priority;
-(id)initWithPaymentOptionDictionary:(id)arg1 ;
-(long long)supportedProtocols;
-(long long)cardType;
@end
