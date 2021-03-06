/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _MSPresentationState : NSObject <NSSecureCoding> {

	unsigned long long _presentationStyle;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) unsigned long long presentationStyle;              //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                        //@synthesize contentInsets=_contentInsets - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setPresentationStyle:(unsigned long long)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(unsigned long long)presentationStyle;
@end

