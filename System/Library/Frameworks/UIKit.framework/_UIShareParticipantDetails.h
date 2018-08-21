/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIColor;

@interface _UIShareParticipantDetails : NSObject <NSSecureCoding> {

	NSString* _participantID;
	NSString* _detailText;
	UIColor* _participantColor;

}

@property (copy) NSString * participantID;                //@synthesize participantID=_participantID - In the implementation block
@property (copy) NSString * detailText;                   //@synthesize detailText=_detailText - In the implementation block
@property (copy) UIColor * participantColor;              //@synthesize participantColor=_participantColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(UIColor *)participantColor;
-(void)setParticipantColor:(UIColor *)arg1 ;
@end

